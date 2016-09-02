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
    QByteArrayData data[13];
    char stringdata0[75];
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
QT_MOC_LITERAL(5, 32, 3), // "Buy"
QT_MOC_LITERAL(6, 36, 5), // "Route"
QT_MOC_LITERAL(7, 42, 6), // "Reload"
QT_MOC_LITERAL(8, 49, 4), // "rank"
QT_MOC_LITERAL(9, 54, 1), // "m"
QT_MOC_LITERAL(10, 56, 7), // "Log_out"
QT_MOC_LITERAL(11, 64, 4), // "show"
QT_MOC_LITERAL(12, 69, 5) // "Debug"

    },
    "MainQuery\0Log_in\0\0Name\0Register\0Buy\0"
    "Route\0Reload\0rank\0m\0Log_out\0show\0Debug"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainQuery[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   68,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x0a /* Public */,
      12,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
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
        case 3: _t->Buy((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->Route((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->Reload((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->Log_out(); break;
        case 7: _t->show(); break;
        case 8: _t->Debug(); break;
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
            typedef void (MainQuery::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainQuery::Buy)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainQuery::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainQuery::Route)) {
                *result = 4;
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
void MainQuery::Buy(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainQuery::Route(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
