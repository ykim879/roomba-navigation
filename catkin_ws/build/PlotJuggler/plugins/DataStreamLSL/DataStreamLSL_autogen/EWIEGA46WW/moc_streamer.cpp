/****************************************************************************
** Meta object code from reading C++ file 'streamer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "streamer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Streamer_t {
    QByteArrayData data[10];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Streamer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Streamer_t qt_meta_stringdata_Streamer = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Streamer"
QT_MOC_LITERAL(1, 9, 7), // "stopped"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 12), // "dataReceived"
QT_MOC_LITERAL(4, 31, 34), // "std::vector<std::vector<doubl..."
QT_MOC_LITERAL(5, 66, 5), // "chunk"
QT_MOC_LITERAL(6, 72, 20), // "std::vector<double>*"
QT_MOC_LITERAL(7, 93, 6), // "stamps"
QT_MOC_LITERAL(8, 100, 6), // "stream"
QT_MOC_LITERAL(9, 107, 4) // "stop"

    },
    "Streamer\0stopped\0\0dataReceived\0"
    "std::vector<std::vector<double> >*\0"
    "chunk\0std::vector<double>*\0stamps\0"
    "stream\0stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Streamer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    2,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   40,    2, 0x0a /* Public */,
       9,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Streamer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Streamer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopped(); break;
        case 1: _t->dataReceived((*reinterpret_cast< std::vector<std::vector<double> >*(*)>(_a[1])),(*reinterpret_cast< std::vector<double>*(*)>(_a[2]))); break;
        case 2: _t->stream(); break;
        case 3: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Streamer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Streamer::stopped)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Streamer::*)(std::vector<std::vector<double> > * , std::vector<double> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Streamer::dataReceived)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Streamer::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Streamer.data,
    qt_meta_data_Streamer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Streamer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Streamer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Streamer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Streamer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Streamer::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Streamer::dataReceived(std::vector<std::vector<double> > * _t1, std::vector<double> * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
