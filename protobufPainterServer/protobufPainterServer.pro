TEMPLATE = app

QT += qml quick widgets sql

CONFIG += c++11

SOURCES += main.cpp \
    drawController.cpp \
    tcpServer.cpp \
    databaseController.cpp \
    model.pb.cc

RESOURCES += qml.qrc \
    js/Dots.js


# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    Model.pb.h \
    tcpServer.h \
    drawController.h \
    databaseController.h \
    model.pb.h

DISTFILES += \
    js/Dots.js \
    QtRPT/QtRPT.pri


include(QRpt/QtRPT/QtRPT.pri)

unix:!macx: LIBS += -L$$PWD/lib/ -lprotobuf

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include

unix:!macx: PRE_TARGETDEPS += $$PWD/lib/libprotobuf.a
