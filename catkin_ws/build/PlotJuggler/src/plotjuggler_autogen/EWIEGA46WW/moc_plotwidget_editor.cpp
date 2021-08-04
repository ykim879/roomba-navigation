/****************************************************************************
** Meta object code from reading C++ file 'plotwidget_editor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "plotwidget_editor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plotwidget_editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EditorRowWidget_t {
    QByteArrayData data[5];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditorRowWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditorRowWidget_t qt_meta_stringdata_EditorRowWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "EditorRowWidget"
QT_MOC_LITERAL(1, 16, 9), // "deleteRow"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "QWidget*"
QT_MOC_LITERAL(4, 36, 5) // "_this"

    },
    "EditorRowWidget\0deleteRow\0\0QWidget*\0"
    "_this"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditorRowWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void EditorRowWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditorRowWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteRow((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditorRowWidget::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditorRowWidget::deleteRow)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EditorRowWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_EditorRowWidget.data,
    qt_meta_data_EditorRowWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EditorRowWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditorRowWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditorRowWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EditorRowWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void EditorRowWidget::deleteRow(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_PlotwidgetEditor_t {
    QByteArrayData data[19];
    char stringdata0[366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlotwidgetEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlotwidgetEditor_t qt_meta_stringdata_PlotwidgetEditor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PlotwidgetEditor"
QT_MOC_LITERAL(1, 17, 14), // "onColorChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 1), // "c"
QT_MOC_LITERAL(4, 35, 28), // "on_editColotText_textChanged"
QT_MOC_LITERAL(5, 64, 4), // "arg1"
QT_MOC_LITERAL(6, 69, 21), // "on_radioLines_toggled"
QT_MOC_LITERAL(7, 91, 7), // "checked"
QT_MOC_LITERAL(8, 99, 22), // "on_radioPoints_toggled"
QT_MOC_LITERAL(9, 122, 20), // "on_radioBoth_toggled"
QT_MOC_LITERAL(10, 143, 22), // "on_checkBoxMax_toggled"
QT_MOC_LITERAL(11, 166, 22), // "on_checkBoxMin_toggled"
QT_MOC_LITERAL(12, 189, 26), // "on_pushButtonReset_clicked"
QT_MOC_LITERAL(13, 216, 27), // "on_pushButtonCancel_pressed"
QT_MOC_LITERAL(14, 244, 25), // "on_pushButtonSave_pressed"
QT_MOC_LITERAL(15, 270, 34), // "on_listWidget_itemSelectionCh..."
QT_MOC_LITERAL(16, 305, 27), // "on_lineLimitMin_textChanged"
QT_MOC_LITERAL(17, 333, 4), // "text"
QT_MOC_LITERAL(18, 338, 27) // "on_lineLimitMax_textChanged"

    },
    "PlotwidgetEditor\0onColorChanged\0\0c\0"
    "on_editColotText_textChanged\0arg1\0"
    "on_radioLines_toggled\0checked\0"
    "on_radioPoints_toggled\0on_radioBoth_toggled\0"
    "on_checkBoxMax_toggled\0on_checkBoxMin_toggled\0"
    "on_pushButtonReset_clicked\0"
    "on_pushButtonCancel_pressed\0"
    "on_pushButtonSave_pressed\0"
    "on_listWidget_itemSelectionChanged\0"
    "on_lineLimitMin_textChanged\0text\0"
    "on_lineLimitMax_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlotwidgetEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       4,    1,   82,    2, 0x08 /* Private */,
       6,    1,   85,    2, 0x08 /* Private */,
       8,    1,   88,    2, 0x08 /* Private */,
       9,    1,   91,    2, 0x08 /* Private */,
      10,    1,   94,    2, 0x08 /* Private */,
      11,    1,   97,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    1,  104,    2, 0x08 /* Private */,
      18,    1,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void PlotwidgetEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlotwidgetEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->on_editColotText_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_radioLines_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_radioPoints_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_radioBoth_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_checkBoxMax_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_checkBoxMin_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_pushButtonReset_clicked(); break;
        case 8: _t->on_pushButtonCancel_pressed(); break;
        case 9: _t->on_pushButtonSave_pressed(); break;
        case 10: _t->on_listWidget_itemSelectionChanged(); break;
        case 11: _t->on_lineLimitMin_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_lineLimitMax_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlotwidgetEditor::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_PlotwidgetEditor.data,
    qt_meta_data_PlotwidgetEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlotwidgetEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlotwidgetEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlotwidgetEditor.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PlotwidgetEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
