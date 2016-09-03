/****************************************************************************
** Meta object code from reading C++ file 'buy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/buy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Buy_t {
    QByteArrayData data[11];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Buy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Buy_t qt_meta_stringdata_Buy = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Buy"
QT_MOC_LITERAL(1, 4, 1), // "c"
QT_MOC_LITERAL(2, 6, 0), // ""
QT_MOC_LITERAL(3, 7, 2), // "ok"
QT_MOC_LITERAL(4, 10, 7), // "trainid"
QT_MOC_LITERAL(5, 18, 4), // "date"
QT_MOC_LITERAL(6, 23, 10), // "QString[4]"
QT_MOC_LITERAL(7, 34, 2), // "id"
QT_MOC_LITERAL(8, 37, 9), // "SEAT_TYPE"
QT_MOC_LITERAL(9, 47, 4), // "type"
QT_MOC_LITERAL(10, 52, 10) // "to_confirm"

    },
    "Buy\0c\0\0ok\0trainid\0date\0QString[4]\0id\0"
    "SEAT_TYPE\0type\0to_confirm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Buy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    4,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QDate, 0x80000000 | 6, 0x80000000 | 8,    4,    5,    7,    9,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Buy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Buy *_t = static_cast<Buy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->c(); break;
        case 1: _t->ok((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QDate(*)>(_a[2])),(*reinterpret_cast< QString(*)[4]>(_a[3])),(*reinterpret_cast< SEAT_TYPE(*)>(_a[4]))); break;
        case 2: _t->to_confirm(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Buy::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buy::c)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Buy::*_t)(QString , QDate , QString [4], SEAT_TYPE );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buy::ok)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Buy::staticMetaObject = {
    { &User::staticMetaObject, qt_meta_stringdata_Buy.data,
      qt_meta_data_Buy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Buy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Buy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Buy.stringdata0))
        return static_cast<void*>(const_cast< Buy*>(this));
    return User::qt_metacast(_clname);
}

int Buy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = User::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Buy::c()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Buy::ok(QString _t1, QDate _t2, QString _t3[4], SEAT_TYPE _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
