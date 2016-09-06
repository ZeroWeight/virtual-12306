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
    QByteArrayData data[12];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Communicate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Communicate_t qt_meta_stringdata_Communicate = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Communicate"
QT_MOC_LITERAL(1, 12, 6), // "listen"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 14), // "get_from_query"
QT_MOC_LITERAL(4, 35, 6), // "log_in"
QT_MOC_LITERAL(5, 42, 3), // "reg"
QT_MOC_LITERAL(6, 46, 6), // "GENDER"
QT_MOC_LITERAL(7, 53, 4), // "TYPE"
QT_MOC_LITERAL(8, 58, 7), // "Station"
QT_MOC_LITERAL(9, 66, 13), // "get_from_main"
QT_MOC_LITERAL(10, 80, 13), // "buy_from_main"
QT_MOC_LITERAL(11, 94, 15) // "route_from_main"

    },
    "Communicate\0listen\0\0get_from_query\0"
    "log_in\0reg\0GENDER\0TYPE\0Station\0"
    "get_from_main\0buy_from_main\0route_from_main"
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
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    3,   50,    2, 0x0a /* Public */,
       4,    2,   57,    2, 0x0a /* Public */,
       5,   11,   62,    2, 0x0a /* Public */,
       9,    3,   85,    2, 0x0a /* Public */,
      10,    4,   92,    2, 0x0a /* Public */,
      11,    1,  101,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QDate,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 6, 0x80000000 | 7, QMetaType::QString, QMetaType::Int, QMetaType::QString, 0x80000000 | 8, 0x80000000 | 8,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QDate,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QDate,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Communicate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Communicate *_t = static_cast<Communicate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->listen(); break;
        case 1: _t->get_from_query((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QDate(*)>(_a[3]))); break;
        case 2: _t->log_in((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->reg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< GENDER(*)>(_a[5])),(*reinterpret_cast< TYPE(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< QString(*)>(_a[9])),(*reinterpret_cast< Station(*)>(_a[10])),(*reinterpret_cast< Station(*)>(_a[11]))); break;
        case 4: _t->get_from_main((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QDate(*)>(_a[3]))); break;
        case 5: _t->buy_from_main((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QDate(*)>(_a[4]))); break;
        case 6: _t->route_from_main((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Communicate::staticMetaObject = {
    { &User::staticMetaObject, qt_meta_stringdata_Communicate.data,
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
    return User::qt_metacast(_clname);
}

int Communicate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = User::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
