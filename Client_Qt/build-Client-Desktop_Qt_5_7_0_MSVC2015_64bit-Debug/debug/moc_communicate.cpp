/****************************************************************************
** Meta object code from reading C++ file 'communicate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/communicate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'communicate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Communicate_t {
    QByteArrayData data[11];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Communicate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Communicate_t qt_meta_stringdata_Communicate = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Communicate"
QT_MOC_LITERAL(1, 12, 6), // "LogIn_"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 10), // "MainQuery_"
QT_MOC_LITERAL(4, 31, 8), // "Confirm_"
QT_MOC_LITERAL(5, 40, 6), // "_Login"
QT_MOC_LITERAL(6, 47, 9), // "_Register"
QT_MOC_LITERAL(7, 57, 6), // "_Query"
QT_MOC_LITERAL(8, 64, 4), // "_Buy"
QT_MOC_LITERAL(9, 69, 8), // "_Confirm"
QT_MOC_LITERAL(10, 78, 4) // "_Pay"

    },
    "Communicate\0LogIn_\0\0MainQuery_\0Confirm_\0"
    "_Login\0_Register\0_Query\0_Buy\0_Confirm\0"
    "_Pay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Communicate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Communicate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Communicate *_t = static_cast<Communicate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LogIn_(); break;
        case 1: _t->MainQuery_(); break;
        case 2: _t->Confirm_(); break;
        case 3: _t->_Login(); break;
        case 4: _t->_Register(); break;
        case 5: _t->_Query(); break;
        case 6: _t->_Buy(); break;
        case 7: _t->_Confirm(); break;
        case 8: _t->_Pay(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Communicate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Communicate::LogIn_)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Communicate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Communicate::MainQuery_)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Communicate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Communicate::Confirm_)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Communicate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Communicate.data,
      qt_meta_data_Communicate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Communicate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Communicate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Communicate.stringdata0))
        return static_cast<void*>(const_cast< Communicate*>(this));
    return QObject::qt_metacast(_clname);
}

int Communicate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Communicate::LogIn_()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Communicate::MainQuery_()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Communicate::Confirm_()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
