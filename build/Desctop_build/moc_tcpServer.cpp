/****************************************************************************
** Meta object code from reading C++ file 'tcpServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../protobufPainterServer/tcpServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TCPServer_t {
    QByteArrayData data[9];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TCPServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TCPServer_t qt_meta_stringdata_TCPServer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TCPServer"
QT_MOC_LITERAL(1, 10, 14), // "toDrawer_clear"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 16), // "toDrawer_drawDot"
QT_MOC_LITERAL(4, 43, 6), // "model&"
QT_MOC_LITERAL(5, 50, 15), // "toDrawer_redraw"
QT_MOC_LITERAL(6, 66, 10), // "newConnect"
QT_MOC_LITERAL(7, 77, 10), // "serverRead"
QT_MOC_LITERAL(8, 88, 16) // "clientDisconnect"

    },
    "TCPServer\0toDrawer_clear\0\0toDrawer_drawDot\0"
    "model&\0toDrawer_redraw\0newConnect\0"
    "serverRead\0clientDisconnect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TCPServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       5,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   49,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TCPServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TCPServer *_t = static_cast<TCPServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toDrawer_clear(); break;
        case 1: _t->toDrawer_drawDot((*reinterpret_cast< model(*)>(_a[1]))); break;
        case 2: _t->toDrawer_redraw(); break;
        case 3: _t->newConnect(); break;
        case 4: _t->serverRead(); break;
        case 5: _t->clientDisconnect(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TCPServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TCPServer::toDrawer_clear)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TCPServer::*_t)(model & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TCPServer::toDrawer_drawDot)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TCPServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TCPServer::toDrawer_redraw)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject TCPServer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_TCPServer.data,
      qt_meta_data_TCPServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TCPServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TCPServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TCPServer.stringdata0))
        return static_cast<void*>(const_cast< TCPServer*>(this));
    return QThread::qt_metacast(_clname);
}

int TCPServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TCPServer::toDrawer_clear()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void TCPServer::toDrawer_drawDot(model & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TCPServer::toDrawer_redraw()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE