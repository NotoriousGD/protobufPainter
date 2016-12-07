TEMPLATE = app

QT += qml quick widgets network
CONFIG += c++11

SOURCES += main.cpp \
    TcpClient.cpp \
    model.pb.cc

RESOURCES += \
    qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    dot.qml \
    js/localValuesDots.js

HEADERS += \
    TcpClient.h \
    model.pb.h



unix:!macx: LIBS += -L$$PWD/lib/android/ -lprotobuf

INCLUDEPATH += $$PWD/lib/android/Include
DEPENDPATH += $$PWD/lib/android/Include

unix:!macx: PRE_TARGETDEPS += $$PWD/lib/android/libprotobuf.a
