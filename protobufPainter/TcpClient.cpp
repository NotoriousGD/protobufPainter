#include "TcpClient.h"
#include <QByteArray>
#include <QBuffer>
#include <sstream>
#include <QDebug>

TcpClient::TcpClient(QObject *parent) : QObject(parent){
    client = new QTcpSocket(this);
}

void TcpClient::connect(QString addr){
    client->abort();
    client->connectToHost(addr,4422);
    qDebug()<<client->error();
    if(!client->isOpen())qDebug()<<client->error();
}

void TcpClient::send(model* dot){
    std::ostringstream out;
    dot->SerializePartialToOstream(&out);
    QByteArray data(out.str().c_str());
    client->write(data);
    client->flush();
    qDebug()<<"sended";
    qDebug()<<allDots.size();
}

void TcpClient::getModel(int x, int y,QString color){
    model *dot = new ::model();
    dot->set_x(x);
    dot->set_y(y);

    if(color == "green")dot->set_color(::model::GREEN);
    if(color == "blue")dot->set_color(::model::BLUE);
    if(color == "yellow")dot->set_color(::model::YELLOW);
    if(color == "purple")dot->set_color(::model::PURPLE);
    if(color == "red")dot->set_color(::model::RED);


    allDots.append(dot);

    qDebug()<<"added- x="+QString::number(x)+
              " y="+QString::number(y)+" color="<<dot->color();
    send(dot);
}

void TcpClient::clear(){
    allDots.clear();
    qDebug()<<"cleared";

    QByteArray data("CLEARALL");
    client->write(data);
    client->flush();
}

TcpClient::~TcpClient(){

}
