/****************************************************************************
** Meta object code from reading C++ file 'mainquery.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/mainquery.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainquery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainQuery_t {
    QByteArrayData data[19];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainQuery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainQuery_t qt_meta_stringdata_MainQuery = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MainQuery"
QT_MOC_LITERAL(1, 10, 6), // "Log_in"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 4), // "Name"
QT_MOC_LITERAL(4, 23, 8), // "Register"
QT_MOC_LITERAL(5, 32, 8), // "ok_click"
QT_MOC_LITERAL(6, 41, 3), // "des"
QT_MOC_LITERAL(7, 45, 3), // "src"
QT_MOC_LITERAL(8, 49, 4), // "date"
QT_MOC_LITERAL(9, 54, 3), // "Buy"
QT_MOC_LITERAL(10, 58, 5), // "Route"
QT_MOC_LITERAL(11, 64, 6), // "Reload"
QT_MOC_LITERAL(12, 71, 4), // "rank"
QT_MOC_LITERAL(13, 76, 1), // "m"
QT_MOC_LITERAL(14, 78, 7), // "Log_out"
QT_MOC_LITERAL(15, 86, 5), // "Query"
QT_MOC_LITERAL(16, 92, 8), // "ReadyBuy"
QT_MOC_LITERAL(17, 101, 1), // "s"
QT_MOC_LITERAL(18, 103, 4) // "show"

    },
    "MainQuery\0Log_in\0\0Name\0Register\0"
    "ok_click\0des\0src\0date\0Buy\0Route\0Reload\0"
    "rank\0m\0Log_out\0Query\0ReadyBuy\0s\0show"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainQuery[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    3,   72,    2, 0x06 /* Public */,
       9,    4,   79,    2, 0x06 /* Public */,
      10,    1,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    2,   91,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,
      16,    1,   98,    2, 0x08 /* Private */,
      18,    0,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QDate,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QDate,    2,    6,    7,    8,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,

       0        // eod
};

void MainQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainQuery *_t = static_cast<MainQuery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Log_in(); break;
        case 1: _t->Name(); break;
        case 2: _t->Register(); break;
        case 3: _t->ok_click((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QDate(*)>(_a[3]))); break;
        case 4: _t->Buy((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QDate(*)>(_a[4]))); break;
        case 5: _t->Route((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->Reload((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->Log_out(); break;
        case 8: _t->Query(); break;
        case 9: _t->ReadyBuy((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->show(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainQuery::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainQuery::Log_in)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainQuery::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainQuery::Name)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainQuery::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainQuery::Register)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainQuery::*_t)(int , int , QDate );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainQuery::ok_click)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainQuery::*_t)(QString , int , int , QDate );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainQuery::Buy)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MainQuery::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainQuery::Route)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject MainQuery::staticMetaObject = {
    { &User::staticMetaObject, qt_meta_stringdata_MainQuery.data,
      qt_meta_data_MainQuery,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainQuery.stringdata0))
        return static_cast<void*>(const_cast< MainQuery*>(this));
    return User::qt_metacast(_clname);
}

int MainQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = User::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void MainQuery::Log_in()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MainQuery::Name()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void MainQuery::Register()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void MainQuery::ok_click(int _t1, int _t2, QDate _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainQuery::Buy(QString _t1, int _t2, int _t3, QDate _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainQuery::Route(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
