#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <tcpServer.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    //Picture data model
    QList<model> *allDots = new QList<model>();

    DrawController* draw = new DrawController(0,allDots);
    DatabaseController* base = new DatabaseController(0,allDots);

    TCPServer server(0,draw,base,allDots);

    QQmlApplicationEngine engine;

    QQmlContext* context = engine.rootContext();
    context->setContextProperty("server",&server);
    context->setContextProperty("drawer",draw);
    context->setContextProperty("base",base);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
