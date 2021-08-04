/****************************************************************************
** Meta object code from reading C++ file 'datastream_lsl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "datastream_lsl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datastream_lsl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StreamLSLDialog_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StreamLSLDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StreamLSLDialog_t qt_meta_stringdata_StreamLSLDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "StreamLSLDialog"
QT_MOC_LITERAL(1, 16, 17), // "resolveLSLStreams"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "StreamLSLDialog\0resolveLSLStreams\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StreamLSLDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void StreamLSLDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StreamLSLDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resolveLSLStreams(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StreamLSLDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_StreamLSLDialog.data,
    qt_meta_data_StreamLSLDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StreamLSLDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StreamLSLDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StreamLSLDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int StreamLSLDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_DataStreamLSL_t {
    QByteArrayData data[7];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataStreamLSL_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataStreamLSL_t qt_meta_stringdata_DataStreamLSL = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DataStreamLSL"
QT_MOC_LITERAL(1, 14, 12), // "dataReceived"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 34), // "std::vector<std::vector<doubl..."
QT_MOC_LITERAL(4, 63, 5), // "chunk"
QT_MOC_LITERAL(5, 69, 20), // "std::vector<double>*"
QT_MOC_LITERAL(6, 90, 6) // "stamps"

    },
    "DataStreamLSL\0dataReceived\0\0"
    "std::vector<std::vector<double> >*\0"
    "chunk\0std::vector<double>*\0stamps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataStreamLSL[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

void DataStreamLSL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataStreamLSL *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataReceived((*reinterpret_cast< std::vector<std::vector<double> >*(*)>(_a[1])),(*reinterpret_cast< std::vector<double>*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataStreamLSL::staticMetaObject = { {
    &PJ::DataStreamer::staticMetaObject,
    qt_meta_stringdata_DataStreamLSL.data,
    qt_meta_data_DataStreamLSL,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataStreamLSL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataStreamLSL::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataStreamLSL.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "facontidavide.PlotJuggler3.DataStreamer"))
        return static_cast< PJ::DataStreamer*>(this);
    return PJ::DataStreamer::qt_metacast(_clname);
}

int DataStreamLSL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PJ::DataStreamer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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
    0x02,  0x78,  0x27,  'f',  'a',  'c',  'o',  'n', 
    't',  'i',  'd',  'a',  'v',  'i',  'd',  'e', 
    '.',  'P',  'l',  'o',  't',  'J',  'u',  'g', 
    'g',  'l',  'e',  'r',  '3',  '.',  'D',  'a', 
    't',  'a',  'S',  't',  'r',  'e',  'a',  'm', 
    'e',  'r', 
    // "className"
    0x03,  0x6d,  'D',  'a',  't',  'a',  'S',  't', 
    'r',  'e',  'a',  'm',  'L',  'S',  'L', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(DataStreamLSL, DataStreamLSL)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
