/****************************************************************************
** Meta object code from reading C++ file 'customtracker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "customtracker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customtracker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CurveTracker_t {
    QByteArrayData data[11];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CurveTracker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CurveTracker_t qt_meta_stringdata_CurveTracker = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CurveTracker"
QT_MOC_LITERAL(1, 13, 11), // "setPosition"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "pos"
QT_MOC_LITERAL(4, 30, 12), // "setParameter"
QT_MOC_LITERAL(5, 43, 9), // "Parameter"
QT_MOC_LITERAL(6, 53, 3), // "par"
QT_MOC_LITERAL(7, 57, 10), // "setEnabled"
QT_MOC_LITERAL(8, 68, 6), // "enable"
QT_MOC_LITERAL(9, 75, 9), // "isEnabled"
QT_MOC_LITERAL(10, 85, 6) // "redraw"

    },
    "CurveTracker\0setPosition\0\0pos\0"
    "setParameter\0Parameter\0par\0setEnabled\0"
    "enable\0isEnabled\0redraw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CurveTracker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       7,    1,   45,    2, 0x0a /* Public */,
       9,    0,   48,    2, 0x0a /* Public */,
      10,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void CurveTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CurveTracker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setPosition((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 1: _t->setParameter((*reinterpret_cast< Parameter(*)>(_a[1]))); break;
        case 2: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: { bool _r = _t->isEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->redraw(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CurveTracker::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CurveTracker.data,
    qt_meta_data_CurveTracker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CurveTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurveTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CurveTracker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CurveTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
