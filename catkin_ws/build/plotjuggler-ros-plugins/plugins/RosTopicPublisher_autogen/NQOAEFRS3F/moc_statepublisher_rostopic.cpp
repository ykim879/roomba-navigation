/****************************************************************************
** Meta object code from reading C++ file 'statepublisher_rostopic.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TopicPublisherROS/statepublisher_rostopic.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statepublisher_rostopic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TopicPublisherROS_t {
    QByteArrayData data[6];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TopicPublisherROS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TopicPublisherROS_t qt_meta_stringdata_TopicPublisherROS = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TopicPublisherROS"
QT_MOC_LITERAL(1, 18, 10), // "setEnabled"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "enabled"
QT_MOC_LITERAL(4, 38, 12), // "filterDialog"
QT_MOC_LITERAL(5, 51, 11) // "autoconfirm"

    },
    "TopicPublisherROS\0setEnabled\0\0enabled\0"
    "filterDialog\0autoconfirm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TopicPublisherROS[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void TopicPublisherROS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TopicPublisherROS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->filterDialog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TopicPublisherROS::staticMetaObject = { {
    &PJ::StatePublisher::staticMetaObject,
    qt_meta_stringdata_TopicPublisherROS.data,
    qt_meta_data_TopicPublisherROS,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TopicPublisherROS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TopicPublisherROS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TopicPublisherROS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "facontidavide.PlotJuggler3.StatePublisher"))
        return static_cast< PJ::StatePublisher*>(this);
    return PJ::StatePublisher::qt_metacast(_clname);
}

int TopicPublisherROS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PJ::StatePublisher::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x29,  'f',  'a',  'c',  'o',  'n', 
    't',  'i',  'd',  'a',  'v',  'i',  'd',  'e', 
    '.',  'P',  'l',  'o',  't',  'J',  'u',  'g', 
    'g',  'l',  'e',  'r',  '3',  '.',  'S',  't', 
    'a',  't',  'e',  'P',  'u',  'b',  'l',  'i', 
    's',  'h',  'e',  'r', 
    // "className"
    0x03,  0x71,  'T',  'o',  'p',  'i',  'c',  'P', 
    'u',  'b',  'l',  'i',  's',  'h',  'e',  'r', 
    'R',  'O',  'S', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(TopicPublisherROS, TopicPublisherROS)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
