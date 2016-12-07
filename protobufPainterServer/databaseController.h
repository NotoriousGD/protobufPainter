#ifndef DATABASECONTROLLER_H
#define DATABASECONTROLLER_H

#include <QObject>
#include <model.pb.h>
#include <QList>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDateTime>
#include <QVariant>
#include <QDebug>
#include <QtGlobal>
#include <QtSql>
#include <QSqlDriver>
#include <qtrpt.h>

class DatabaseController : public QObject
{
    Q_OBJECT
public:
    const QString dbName = "postgres";
    const QString host = "127.0.0.1";
    const QString user = "painter";
    const QString password = "123456";

    QSqlDatabase base;

    QList<model> *allDots;


    explicit DatabaseController(QObject *parent = 0, QList<model> *allDots = 0);

    void initBase();

signals:
    void toQML_addPic(int baseid,QString time);
    void toDrawer_redraw();

public slots:
    void savePic();
    void sendAllPics();
    void removePic(int id);
    void sendPic(int id);
    void createReport();
};

#endif // DATABASECONTROLLER_H
