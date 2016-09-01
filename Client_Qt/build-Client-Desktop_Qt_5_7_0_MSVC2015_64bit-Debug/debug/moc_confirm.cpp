/****************************************************************************
** Meta object code from reading C++ file 'confirm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/confirm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'confirm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Confirm_t {
    QByteArrayData data[7];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Confirm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Confirm_t qt_meta_stringdata_Confirm = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Confirm"
QT_MOC_LITERAL(1, 8, 8), // "seat_set"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 1), // "x"
QT_MOC_LITERAL(4, 20, 1), // "y"
QT_MOC_LITERAL(5, 22, 11), // "sleeper_set"
QT_MOC_LITERAL(6, 34, 4) // "show"

    },
    "Confirm\0seat_set\0\0x\0y\0sleeper_set\0"
    "show"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Confirm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x08 /* Private */,
       5,    2,   34,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,

       0        // eod
};

void Confirm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Confirm *_t = static_cast<Confirm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->seat_set((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->sleeper_set((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->show(); break;
        default: ;
        }
    }
}

const QMetaObject Confirm::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Confirm.data,
      qt_meta_data_Confirm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Confirm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Confirm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Confirm.stringdata0))
        return static_cast<void*>(const_cast< Confirm*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Confirm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
