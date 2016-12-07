#include "tcpServer.h"
#include <QTcpSocket>


TCPServer::TCPServer(QObject* parent,DrawController* draw,DatabaseController* base,    QList<model> *allDots) : QThread(parent){

    drawController = draw;
    baseController = base;
    this->allDots =allDots;

    server = new QTcpServer();

    connect(baseController, &DatabaseController::toDrawer_redraw, drawController, &DrawController::redraw);
    connect(server,&QTcpServer::newConnection,this,&TCPServer::newConnect);

    if(!server->listen(QHostAddress::Any,4422))
        qDebug()<<"Server could not start";
    else
        qDebug()<<"Server started";
}

void TCPServer::newConnect(){
    socket = server->nextPendingConnection();
    connect(socket, &QTcpSocket::readyRead, this, &TCPServer::serverRead);
    connect(socket, &QTcpSocket::disconnected, this, &TCPServer::clientDisconnect);

    connect(this, &TCPServer::toDrawer_drawDot,drawController, &DrawController::drawDot);
    connect(this, &TCPServer::toDrawer_clear,drawController, &DrawController::clear);

    qDebug()<<"Connect!";
}

void TCPServer::serverRead(){
    run();
}

void TCPServer::clientDisconnect(){

}

void TCPServer::run(){
    while(socket->bytesAvailable()>0)
    {
        model dot;
        QByteArray array = socket->read(8);

        if(QString::fromStdString(array.toStdString()) == "CLEARALL"){
            emit toDrawer_clear();
            allDots->clear();
        }
        else
            if(dot.ParseFromArray(array,array.size())){
                allDots->append(dot);
                emit toDrawer_drawDot(dot);
            }
        qDebug()<<allDots->size()<<"SSS"<<sizeof(dot);
    }
}

TCPServer::~TCPServer(){

}
