#ifndef DRAWER_H
#define DRAWER_H

#include <QObject>
#include <model.pb.h>

class DrawController : public QObject
{
    Q_OBJECT

    QList<model> *allDots;
public:
    explicit DrawController(QObject *parent = 0, QList<model> *allDots = 0);

signals:
    void toQML_drawDot(int x, int y, QString color);
    void toQML_clearView();


public slots:    
    void clear();
    void redraw();
    void drawDot(model);
};

#endif // DRAWER_H
