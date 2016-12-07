#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <model.pb.h>
#include <drawController.h>
#include <databaseController.h>

class TCPServer :  public QThread
{
    Q_OBJECT
private:

    QList<model> *allDots;

    QTcpServer* server;
    QTcpSocket* socket;
    DrawController* drawController;
    DatabaseController* baseController;

public:
    explicit TCPServer(QObject *parent = 0, DrawController* draw = 0, DatabaseController* data = 0, QList<model> *allDots = 0);
    ~TCPServer();

signals:
    void toDrawer_clear();
    void toDrawer_drawDot(model&);
    void toDrawer_redraw();

public slots:

    void newConnect();
    void serverRead();
    void clientDisconnect();

    // QThread interface
protected:
    void run();
};

#endif // TCPSERVER_H
