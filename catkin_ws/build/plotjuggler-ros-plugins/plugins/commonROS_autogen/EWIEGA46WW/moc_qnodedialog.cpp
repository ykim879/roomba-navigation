/****************************************************************************
** Meta object code from reading C++ file 'qnodedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qnodedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnodedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNodeDialog_t {
    QByteArrayData data[6];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNodeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNodeDialog_t qt_meta_stringdata_QNodeDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QNodeDialog"
QT_MOC_LITERAL(1, 12, 33), // "on_checkBoxUseEnvironment_tog..."
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 7), // "checked"
QT_MOC_LITERAL(4, 55, 28), // "on_pushButtonConnect_pressed"
QT_MOC_LITERAL(5, 84, 27) // "on_pushButtonCancel_pressed"

    },
    "QNodeDialog\0on_checkBoxUseEnvironment_toggled\0"
    "\0checked\0on_pushButtonConnect_pressed\0"
    "on_pushButtonCancel_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNodeDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    0,   32,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QNodeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QNodeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_checkBoxUseEnvironment_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_pushButtonConnect_pressed(); break;
        case 2: _t->on_pushButtonCancel_pressed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QNodeDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_QNodeDialog.data,
    qt_meta_data_QNodeDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QNodeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNodeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QNodeDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QNodeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
