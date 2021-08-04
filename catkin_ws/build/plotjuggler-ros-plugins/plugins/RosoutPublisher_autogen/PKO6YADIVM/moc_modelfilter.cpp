/****************************************************************************
** Meta object code from reading C++ file 'modelfilter.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "RosoutPublisher/modelfilter.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelfilter.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModelFilter_t {
    QByteArrayData data[21];
    char stringdata0[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelFilter_t qt_meta_stringdata_ModelFilter = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ModelFilter"
QT_MOC_LITERAL(1, 12, 23), // "setMessageFilterEnabled"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "enabled"
QT_MOC_LITERAL(4, 45, 20), // "setNodeFilterEnabled"
QT_MOC_LITERAL(5, 66, 22), // "setSourceFilterEnabled"
QT_MOC_LITERAL(6, 89, 20), // "setTimeFilterEnabled"
QT_MOC_LITERAL(7, 110, 20), // "messageFilterUpdated"
QT_MOC_LITERAL(8, 131, 10), // "FilterMode"
QT_MOC_LITERAL(9, 142, 4), // "mode"
QT_MOC_LITERAL(10, 147, 4), // "text"
QT_MOC_LITERAL(11, 152, 17), // "nodeFilterUpdated"
QT_MOC_LITERAL(12, 170, 19), // "sourceFilterUpdated"
QT_MOC_LITERAL(13, 190, 17), // "timeMinMaxUpdated"
QT_MOC_LITERAL(14, 208, 9), // "TimePoint"
QT_MOC_LITERAL(15, 218, 3), // "min"
QT_MOC_LITERAL(16, 222, 3), // "max"
QT_MOC_LITERAL(17, 226, 22), // "setSeverityInfoEnabled"
QT_MOC_LITERAL(18, 249, 23), // "setSeverityDebugEnabled"
QT_MOC_LITERAL(19, 273, 23), // "setSeverityErrorEnabled"
QT_MOC_LITERAL(20, 297, 26) // "setSeverityWarningsEnabled"

    },
    "ModelFilter\0setMessageFilterEnabled\0"
    "\0enabled\0setNodeFilterEnabled\0"
    "setSourceFilterEnabled\0setTimeFilterEnabled\0"
    "messageFilterUpdated\0FilterMode\0mode\0"
    "text\0nodeFilterUpdated\0sourceFilterUpdated\0"
    "timeMinMaxUpdated\0TimePoint\0min\0max\0"
    "setSeverityInfoEnabled\0setSeverityDebugEnabled\0"
    "setSeverityErrorEnabled\0"
    "setSeverityWarningsEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelFilter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       4,    1,   77,    2, 0x0a /* Public */,
       5,    1,   80,    2, 0x0a /* Public */,
       6,    1,   83,    2, 0x0a /* Public */,
       7,    2,   86,    2, 0x0a /* Public */,
      11,    2,   91,    2, 0x0a /* Public */,
      12,    2,   96,    2, 0x0a /* Public */,
      13,    2,  101,    2, 0x0a /* Public */,
      17,    1,  106,    2, 0x0a /* Public */,
      18,    1,  109,    2, 0x0a /* Public */,
      19,    1,  112,    2, 0x0a /* Public */,
      20,    1,  115,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   10,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   10,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   10,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14,   15,   16,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void ModelFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModelFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setMessageFilterEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setNodeFilterEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setSourceFilterEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setTimeFilterEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->messageFilterUpdated((*reinterpret_cast< FilterMode(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->nodeFilterUpdated((*reinterpret_cast< FilterMode(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->sourceFilterUpdated((*reinterpret_cast< FilterMode(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->timeMinMaxUpdated((*reinterpret_cast< TimePoint(*)>(_a[1])),(*reinterpret_cast< TimePoint(*)>(_a[2]))); break;
        case 8: _t->setSeverityInfoEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setSeverityDebugEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setSeverityErrorEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setSeverityWarningsEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ModelFilter::staticMetaObject = { {
    &QSortFilterProxyModel::staticMetaObject,
    qt_meta_stringdata_ModelFilter.data,
    qt_meta_data_ModelFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ModelFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModelFilter.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int ModelFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
