/****************************************************************************
** Meta object code from reading C++ file 'databaseController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../protobufPainterServer/databaseController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'databaseController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DatabaseController_t {
    QByteArrayData data[12];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatabaseController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatabaseController_t qt_meta_stringdata_DatabaseController = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DatabaseController"
QT_MOC_LITERAL(1, 19, 12), // "toQML_addPic"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "baseid"
QT_MOC_LITERAL(4, 40, 4), // "time"
QT_MOC_LITERAL(5, 45, 15), // "toDrawer_redraw"
QT_MOC_LITERAL(6, 61, 7), // "savePic"
QT_MOC_LITERAL(7, 69, 11), // "sendAllPics"
QT_MOC_LITERAL(8, 81, 9), // "removePic"
QT_MOC_LITERAL(9, 91, 2), // "id"
QT_MOC_LITERAL(10, 94, 7), // "sendPic"
QT_MOC_LITERAL(11, 102, 12) // "createReport"

    },
    "DatabaseController\0toQML_addPic\0\0"
    "baseid\0time\0toDrawer_redraw\0savePic\0"
    "sendAllPics\0removePic\0id\0sendPic\0"
    "createReport"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatabaseController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   55,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x0a /* Public */,
       8,    1,   57,    2, 0x0a /* Public */,
      10,    1,   60,    2, 0x0a /* Public */,
      11,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,

       0        // eod
};

void DatabaseController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DatabaseController *_t = static_cast<DatabaseController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toQML_addPic((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->toDrawer_redraw(); break;
        case 2: _t->savePic(); break;
        case 3: _t->sendAllPics(); break;
        case 4: _t->removePic((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->sendPic((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->createReport(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DatabaseController::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseController::toQML_addPic)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DatabaseController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DatabaseController::toDrawer_redraw)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DatabaseController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DatabaseController.data,
      qt_meta_data_DatabaseController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DatabaseController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatabaseController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseController.stringdata0))
        return static_cast<void*>(const_cast< DatabaseController*>(this));
    return QObject::qt_metacast(_clname);
}

int DatabaseController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DatabaseController::toQML_addPic(int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DatabaseController::toDrawer_redraw()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
