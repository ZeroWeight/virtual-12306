/****************************************************************************
** Meta object code from reading C++ file 'quickquery.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/quickquery.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quickquery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QuickQuery_t {
    QByteArrayData data[12];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuickQuery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuickQuery_t qt_meta_stringdata_QuickQuery = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QuickQuery"
QT_MOC_LITERAL(1, 11, 8), // "ok_click"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 3), // "des"
QT_MOC_LITERAL(4, 25, 3), // "src"
QT_MOC_LITERAL(5, 29, 4), // "date"
QT_MOC_LITERAL(6, 34, 11), // "login_click"
QT_MOC_LITERAL(7, 46, 9), // "reg_click"
QT_MOC_LITERAL(8, 56, 10), // "name_click"
QT_MOC_LITERAL(9, 67, 4), // "show"
QT_MOC_LITERAL(10, 72, 2), // "ok"
QT_MOC_LITERAL(11, 75, 12) // "logout_click"

    },
    "QuickQuery\0ok_click\0\0des\0src\0date\0"
    "login_click\0reg_click\0name_click\0show\0"
    "ok\0logout_click"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuickQuery[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x06 /* Public */,
       6,    0,   56,    2, 0x06 /* Public */,
       7,    0,   57,    2, 0x06 /* Public */,
       8,    0,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   59,    2, 0x0a /* Public */,
      10,    0,   60,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QDate,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QuickQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QuickQuery *_t = static_cast<QuickQuery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ok_click((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QDate(*)>(_a[3]))); break;
        case 1: _t->login_click(); break;
        case 2: _t->reg_click(); break;
        case 3: _t->name_click(); break;
        case 4: _t->show(); break;
        case 5: _t->ok(); break;
        case 6: _t->logout_click(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QuickQuery::*_t)(int , int , QDate );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickQuery::ok_click)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QuickQuery::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickQuery::login_click)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QuickQuery::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickQuery::reg_click)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QuickQuery::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QuickQuery::name_click)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QuickQuery::staticMetaObject = {
    { &User::staticMetaObject, qt_meta_stringdata_QuickQuery.data,
      qt_meta_data_QuickQuery,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QuickQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuickQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QuickQuery.stringdata0))
        return static_cast<void*>(const_cast< QuickQuery*>(this));
    return User::qt_metacast(_clname);
}

int QuickQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QuickQuery::ok_click(int _t1, int _t2, QDate _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QuickQuery::login_click()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QuickQuery::reg_click()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QuickQuery::name_click()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
