/****************************************************************************
** Meta object code from reading C++ file 'drawController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../protobufPainterServer/drawController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DrawController_t {
    QByteArrayData data[11];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrawController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrawController_t qt_meta_stringdata_DrawController = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DrawController"
QT_MOC_LITERAL(1, 15, 13), // "toQML_drawDot"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 1), // "x"
QT_MOC_LITERAL(4, 32, 1), // "y"
QT_MOC_LITERAL(5, 34, 5), // "color"
QT_MOC_LITERAL(6, 40, 15), // "toQML_clearView"
QT_MOC_LITERAL(7, 56, 5), // "clear"
QT_MOC_LITERAL(8, 62, 6), // "redraw"
QT_MOC_LITERAL(9, 69, 7), // "drawDot"
QT_MOC_LITERAL(10, 77, 5) // "model"

    },
    "DrawController\0toQML_drawDot\0\0x\0y\0"
    "color\0toQML_clearView\0clear\0redraw\0"
    "drawDot\0model"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrawController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,
       6,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   47,    2, 0x0a /* Public */,
       8,    0,   48,    2, 0x0a /* Public */,
       9,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    3,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    2,

       0        // eod
};

void DrawController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DrawController *_t = static_cast<DrawController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toQML_drawDot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->toQML_clearView(); break;
        case 2: _t->clear(); break;
        case 3: _t->redraw(); break;
        case 4: _t->drawDot((*reinterpret_cast< model(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DrawController::*_t)(int , int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DrawController::toQML_drawDot)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DrawController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DrawController::toQML_clearView)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DrawController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DrawController.data,
      qt_meta_data_DrawController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DrawController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DrawController.stringdata0))
        return static_cast<void*>(const_cast< DrawController*>(this));
    return QObject::qt_metacast(_clname);
}

int DrawController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DrawController::toQML_drawDot(int _t1, int _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DrawController::toQML_clearView()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
