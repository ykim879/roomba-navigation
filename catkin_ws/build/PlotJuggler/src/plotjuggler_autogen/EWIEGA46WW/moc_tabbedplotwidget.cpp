/****************************************************************************
** Meta object code from reading C++ file 'tabbedplotwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tabbedplotwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabbedplotwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TabbedPlotWidget_t {
    QByteArrayData data[24];
    char stringdata0[391];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabbedPlotWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabbedPlotWidget_t qt_meta_stringdata_TabbedPlotWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TabbedPlotWidget"
QT_MOC_LITERAL(1, 17, 7), // "created"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "undoableChange"
QT_MOC_LITERAL(4, 41, 8), // "tabAdded"
QT_MOC_LITERAL(5, 50, 11), // "PlotDocker*"
QT_MOC_LITERAL(6, 62, 18), // "sendTabToNewWindow"
QT_MOC_LITERAL(7, 81, 16), // "setStreamingMode"
QT_MOC_LITERAL(8, 98, 14), // "streaming_mode"
QT_MOC_LITERAL(9, 113, 20), // "on_stylesheetChanged"
QT_MOC_LITERAL(10, 134, 9), // "style_dir"
QT_MOC_LITERAL(11, 144, 19), // "on_renameCurrentTab"
QT_MOC_LITERAL(12, 164, 23), // "on_addTabButton_pressed"
QT_MOC_LITERAL(13, 188, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(14, 216, 5), // "index"
QT_MOC_LITERAL(15, 222, 30), // "on_tabWidget_tabCloseRequested"
QT_MOC_LITERAL(16, 253, 36), // "on_buttonLinkHorizontalScale_..."
QT_MOC_LITERAL(17, 290, 7), // "checked"
QT_MOC_LITERAL(18, 298, 21), // "on_requestTabMovement"
QT_MOC_LITERAL(19, 320, 16), // "destination_name"
QT_MOC_LITERAL(20, 337, 23), // "on_moveTabIntoNewWindow"
QT_MOC_LITERAL(21, 361, 10), // "paintEvent"
QT_MOC_LITERAL(22, 372, 12), // "QPaintEvent*"
QT_MOC_LITERAL(23, 385, 5) // "event"

    },
    "TabbedPlotWidget\0created\0\0undoableChange\0"
    "tabAdded\0PlotDocker*\0sendTabToNewWindow\0"
    "setStreamingMode\0streaming_mode\0"
    "on_stylesheetChanged\0style_dir\0"
    "on_renameCurrentTab\0on_addTabButton_pressed\0"
    "on_tabWidget_currentChanged\0index\0"
    "on_tabWidget_tabCloseRequested\0"
    "on_buttonLinkHorizontalScale_toggled\0"
    "checked\0on_requestTabMovement\0"
    "destination_name\0on_moveTabIntoNewWindow\0"
    "paintEvent\0QPaintEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabbedPlotWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    1,   86,    2, 0x06 /* Public */,
       6,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   92,    2, 0x0a /* Public */,
       9,    1,   95,    2, 0x0a /* Public */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    1,  100,    2, 0x08 /* Private */,
      15,    1,  103,    2, 0x08 /* Private */,
      16,    1,  106,    2, 0x08 /* Private */,
      18,    1,  109,    2, 0x08 /* Private */,
      20,    0,  112,    2, 0x08 /* Private */,
      21,    1,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,

       0        // eod
};

void TabbedPlotWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TabbedPlotWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->created(); break;
        case 1: _t->undoableChange(); break;
        case 2: _t->tabAdded((*reinterpret_cast< PlotDocker*(*)>(_a[1]))); break;
        case 3: _t->sendTabToNewWindow((*reinterpret_cast< PlotDocker*(*)>(_a[1]))); break;
        case 4: _t->setStreamingMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_stylesheetChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_renameCurrentTab(); break;
        case 7: _t->on_addTabButton_pressed(); break;
        case 8: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_tabWidget_tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_buttonLinkHorizontalScale_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_requestTabMovement((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_moveTabIntoNewWindow(); break;
        case 13: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlotDocker* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlotDocker* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TabbedPlotWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabbedPlotWidget::created)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TabbedPlotWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabbedPlotWidget::undoableChange)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TabbedPlotWidget::*)(PlotDocker * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabbedPlotWidget::tabAdded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TabbedPlotWidget::*)(PlotDocker * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabbedPlotWidget::sendTabToNewWindow)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TabbedPlotWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_TabbedPlotWidget.data,
    qt_meta_data_TabbedPlotWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TabbedPlotWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabbedPlotWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TabbedPlotWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TabbedPlotWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void TabbedPlotWidget::created()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TabbedPlotWidget::undoableChange()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TabbedPlotWidget::tabAdded(PlotDocker * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TabbedPlotWidget::sendTabToNewWindow(PlotDocker * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
