#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <TcpClient.h>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    TcpClient client;

    QQmlApplicationEngine engine;

    QQmlContext* context = engine.rootContext();
    context->setContextProperty("client",&client);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
