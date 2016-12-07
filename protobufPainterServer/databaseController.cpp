#include "databaseController.h"

DatabaseController::DatabaseController(QObject *parent,QList<model> *allDots) : QObject(parent){
    this->allDots =allDots;
}

void DatabaseController::savePic(){
    if(!base.isOpen())
        initBase();
    QSqlQuery query;

    query.prepare("INSERT INTO PICS (TIME) VALUES(?)");
    query.bindValue(0,QDateTime::currentDateTime().toString(Qt::ISODate));
    query.exec();
    qDebug()<<query.executedQuery();
    qDebug()<<query.lastError();
    int picId = query.lastInsertId().toInt();

    model buffer;
    foreach (buffer, *allDots) {
        query.clear();
        query.prepare("INSERT INTO DOTS (COLOR,X,Y,TIME) VALUES(?,?,?,?)");
        query.bindValue(0,buffer.color());
        query.bindValue(1,buffer.x());
        query.bindValue(2,buffer.y());
        query.bindValue(3,picId);
        query.exec();
        qDebug()<<query.lastQuery();
        qDebug()<<query.lastError();
    }

}

void DatabaseController::sendAllPics(){
    if(!base.isOpen())
        initBase();
    QSqlQuery query;
    query.exec("Select * from pics");
    while(query.next()){
        emit toQML_addPic(query.value("id").toInt(),query.value("time").toString());
        qDebug()<<query.value("time").toString();
    }
}

void DatabaseController::sendPic(int id){
    QSqlQuery query;

    allDots->clear();

    qDebug()<<"Get PIcture"<<id;
    query.prepare("Select * from dots where time = ?");
    query.bindValue(0,id);
    query.exec();
    while(query.next()){
        model buffer;

        buffer.set_color((::model::Color) query.value("color").toInt());
        buffer.set_x(query.value("x").toInt());
        buffer.set_y(query.value("y").toInt());

        allDots->append(buffer);
    }
    qDebug() <<"SIZE"<< allDots->size();
    emit toDrawer_redraw();
}

void DatabaseController::removePic(int id){
    QSqlQuery query;
    qDebug()<<"remove PIcture"<<id;
    query.prepare("Delete from pics where id = ?");
    query.bindValue(0,id);
    if(query.exec())qDebug()<<"Pic"<<id<<" was remowed";
    else qDebug()<<query.lastError().text();
}

void DatabaseController::initBase(){

    base = QSqlDatabase::addDatabase("QPSQL");

    base.setDatabaseName(dbName);
    base.setHostName(host);
    base.setUserName(user);
    base.setPassword(password);

    if(base.open()){
        qDebug()<<"base opened"<<base.lastError().text();
    }
    else{
        qDebug()<<"base can not connect -"<<base.lastError().text();
    }
}

void DatabaseController::createReport(){
    if(!base.isOpen())
        initBase();
    QList<QSqlRecord> reportRecords;
    QtRPT *report = new QtRPT(this);
    report->loadReport(":/dotsRep.xml");
    QSqlQuery query;
    query.exec("SELECT pics.time, COUNT(dots) FROM pics INNER JOIN dots ON (dots.time = pics.id) GROUP BY pics.id");
    while (query.next()){
        reportRecords.append(query.record());
    }
    report->recordCount.append(reportRecords.count());
    connect(report,&QtRPT::setValue, [&](const int recNo, const QString paramName,QVariant &paramValue,const int reportPage){
        (void) reportPage;
        if(paramName == "TIME")paramValue = reportRecords.at(recNo).value(0).toString();
        if(paramName == "COUNT")paramValue = reportRecords.at(recNo).value(1).toString();
    });

    report->printExec();
    delete report;
}
