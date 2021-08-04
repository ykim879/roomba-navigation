/****************************************************************************
** Meta object code from reading C++ file 'selectlistdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "selectlistdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectlistdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SelectFromListDialog_t {
    QByteArrayData data[10];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectFromListDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectFromListDialog_t qt_meta_stringdata_SelectFromListDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SelectFromListDialog"
QT_MOC_LITERAL(1, 21, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 37), // "on_listFieldsWidget_currentRo..."
QT_MOC_LITERAL(4, 82, 10), // "currentRow"
QT_MOC_LITERAL(5, 93, 33), // "on_listFieldsWidget_doubleCli..."
QT_MOC_LITERAL(6, 127, 11), // "QModelIndex"
QT_MOC_LITERAL(7, 139, 5), // "index"
QT_MOC_LITERAL(8, 145, 30), // "on_pushButtonSelectAll_pressed"
QT_MOC_LITERAL(9, 176, 27) // "on_listFieldsWidget_clicked"

    },
    "SelectFromListDialog\0on_buttonBox_accepted\0"
    "\0on_listFieldsWidget_currentRowChanged\0"
    "currentRow\0on_listFieldsWidget_doubleClicked\0"
    "QModelIndex\0index\0on_pushButtonSelectAll_pressed\0"
    "on_listFieldsWidget_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectFromListDialog[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       8,    0,   46,    2, 0x08 /* Private */,
       9,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void SelectFromListDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SelectFromListDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_buttonBox_accepted(); break;
        case 1: _t->on_listFieldsWidget_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_listFieldsWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_pushButtonSelectAll_pressed(); break;
        case 4: _t->on_listFieldsWidget_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SelectFromListDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_SelectFromListDialog.data,
    qt_meta_data_SelectFromListDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SelectFromListDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectFromListDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelectFromListDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SelectFromListDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
