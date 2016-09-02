/****************************************************************************
** Meta object code from reading C++ file 'register.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/register.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'register.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Register_t {
    QByteArrayData data[23];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Register_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Register_t qt_meta_stringdata_Register = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Register"
QT_MOC_LITERAL(1, 9, 7), // "OK_Send"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 3), // "usr"
QT_MOC_LITERAL(4, 22, 8), // "password"
QT_MOC_LITERAL(5, 31, 4), // "name"
QT_MOC_LITERAL(6, 36, 2), // "id"
QT_MOC_LITERAL(7, 39, 6), // "GENDER"
QT_MOC_LITERAL(8, 46, 1), // "g"
QT_MOC_LITERAL(9, 48, 4), // "TYPE"
QT_MOC_LITERAL(10, 53, 4), // "type"
QT_MOC_LITERAL(11, 58, 4), // "univ"
QT_MOC_LITERAL(12, 63, 5), // "grade"
QT_MOC_LITERAL(13, 69, 9), // "studentid"
QT_MOC_LITERAL(14, 79, 7), // "Station"
QT_MOC_LITERAL(15, 87, 5), // "intv1"
QT_MOC_LITERAL(16, 93, 5), // "intv2"
QT_MOC_LITERAL(17, 99, 11), // "Cancle_Send"
QT_MOC_LITERAL(18, 111, 9), // "DueToType"
QT_MOC_LITERAL(19, 121, 1), // "s"
QT_MOC_LITERAL(20, 123, 2), // "OK"
QT_MOC_LITERAL(21, 126, 6), // "Cancle"
QT_MOC_LITERAL(22, 133, 4) // "show"

    },
    "Register\0OK_Send\0\0usr\0password\0name\0"
    "id\0GENDER\0g\0TYPE\0type\0univ\0grade\0"
    "studentid\0Station\0intv1\0intv2\0Cancle_Send\0"
    "DueToType\0s\0OK\0Cancle\0show"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Register[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,   11,   44,    2, 0x06 /* Public */,
      17,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,   68,    2, 0x08 /* Private */,
      20,    0,   71,    2, 0x08 /* Private */,
      21,    0,   72,    2, 0x08 /* Private */,
      22,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 7, 0x80000000 | 9, QMetaType::QString, QMetaType::Int, QMetaType::QString, 0x80000000 | 14, 0x80000000 | 14,    3,    4,    5,    6,    8,   10,   11,   12,   13,   15,   16,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Register::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Register *_t = static_cast<Register *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OK_Send((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< GENDER(*)>(_a[5])),(*reinterpret_cast< TYPE(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< QString(*)>(_a[9])),(*reinterpret_cast< Station(*)>(_a[10])),(*reinterpret_cast< Station(*)>(_a[11]))); break;
        case 1: _t->Cancle_Send(); break;
        case 2: _t->DueToType((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->OK(); break;
        case 4: _t->Cancle(); break;
        case 5: _t->show(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Register::*_t)(QString , QString , QString , QString , GENDER , TYPE , QString , int , QString , Station , Station );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Register::OK_Send)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Register::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Register::Cancle_Send)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Register::staticMetaObject = {
    { &User::staticMetaObject, qt_meta_stringdata_Register.data,
      qt_meta_data_Register,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Register::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Register::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Register.stringdata0))
        return static_cast<void*>(const_cast< Register*>(this));
    return User::qt_metacast(_clname);
}

int Register::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = User::qt_metacall(_c, _id, _a);
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
void Register::OK_Send(QString _t1, QString _t2, QString _t3, QString _t4, GENDER _t5, TYPE _t6, QString _t7, int _t8, QString _t9, Station _t10, Station _t11)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Register::Cancle_Send()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
