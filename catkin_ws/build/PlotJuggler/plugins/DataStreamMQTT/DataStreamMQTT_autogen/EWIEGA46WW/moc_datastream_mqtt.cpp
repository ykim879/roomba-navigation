/****************************************************************************
** Meta object code from reading C++ file 'datastream_mqtt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "datastream_mqtt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datastream_mqtt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataStreamMQTT_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataStreamMQTT_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataStreamMQTT_t qt_meta_stringdata_DataStreamMQTT = {
    {
QT_MOC_LITERAL(0, 0, 14) // "DataStreamMQTT"

    },
    "DataStreamMQTT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataStreamMQTT[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DataStreamMQTT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DataStreamMQTT::staticMetaObject = { {
    &PJ::DataStreamer::staticMetaObject,
    qt_meta_stringdata_DataStreamMQTT.data,
    qt_meta_data_DataStreamMQTT,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataStreamMQTT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataStreamMQTT::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataStreamMQTT.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "facontidavide.PlotJuggler3.DataStreamer"))
        return static_cast< PJ::DataStreamer*>(this);
    return PJ::DataStreamer::qt_metacast(_clname);
}

int DataStreamMQTT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PJ::DataStreamer::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x27,  'f',  'a',  'c',  'o',  'n', 
    't',  'i',  'd',  'a',  'v',  'i',  'd',  'e', 
    '.',  'P',  'l',  'o',  't',  'J',  'u',  'g', 
    'g',  'l',  'e',  'r',  '3',  '.',  'D',  'a', 
    't',  'a',  'S',  't',  'r',  'e',  'a',  'm', 
    'e',  'r', 
    // "className"
    0x03,  0x6e,  'D',  'a',  't',  'a',  'S',  't', 
    'r',  'e',  'a',  'm',  'M',  'Q',  'T',  'T', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(DataStreamMQTT, DataStreamMQTT)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
