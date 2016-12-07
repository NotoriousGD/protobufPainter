#include "drawController.h"
#include <QDebug>

DrawController::DrawController(QObject *parent, QList<model> *allDots) : QObject(parent){
    this->allDots = allDots;
}

void DrawController::drawDot(model dot){
    QString color = QString::fromStdString(::model::Color_Name(dot.color()));
    emit toQML_drawDot(dot.x(),dot.y(),color);
    //qDebug()<<"drawDot s-"<<" col-"<<color;
}

void DrawController::redraw(){
    qDebug()<<"Redrawing";
    clear();
    model buffer;
    foreach(buffer, *allDots){
        drawDot(buffer);
    }
}

void DrawController::clear(){
    emit toQML_clearView();
    qDebug()<<"cleared";
}
