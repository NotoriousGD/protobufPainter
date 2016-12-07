#ifndef CONNECTMODEL_H
#define CONNECTMODEL_H

#include <QObject>
#include<QTcpSocket>
#include"model.pb.h"

class TcpClient : public QObject
{
    Q_OBJECT
private:
    QList<model*> allDots;
    QTcpSocket* client;
    QString addres;
    void disconnect();
public:
    explicit TcpClient(QObject *parent = 0);
    ~TcpClient();
signals:   
    void test();
public slots:
    void connect(QString);
    void getModel(int x, int y, QString color);
    void send(model*);
    void clear();
};

#endif // CONNECTMODEL_H
