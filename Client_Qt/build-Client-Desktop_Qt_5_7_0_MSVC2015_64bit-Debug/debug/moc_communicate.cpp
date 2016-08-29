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
    char stringdata0[92];
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
QT_MOC_LITERAL(5, 40, 4), // "Send"
QT_MOC_LITERAL(6, 45, 8), // "Message&"
QT_MOC_LITERAL(7, 54, 7), // "message"
QT_MOC_LITERAL(8, 62, 10), // "GetConnect"
QT_MOC_LITERAL(9, 73, 11), // "LostConnect"
QT_MOC_LITERAL(10, 85, 6) // "Listen"

    },
    "Communicate\0LogIn_\0\0MainQuery_\0Confirm_\0"
    "Send\0Message&\0message\0GetConnect\0"
    "LostConnect\0Listen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Communicate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x08 /* Private */,
       9,    0,   56,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
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
        case 3: _t->Send((*reinterpret_cast< Message(*)>(_a[1]))); break;
        case 4: _t->GetConnect(); break;
        case 5: _t->LostConnect(); break;
        case 6: _t->Listen(); break;
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
