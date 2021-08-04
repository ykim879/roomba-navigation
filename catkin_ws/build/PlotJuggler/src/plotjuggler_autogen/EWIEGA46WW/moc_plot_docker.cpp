/****************************************************************************
** Meta object code from reading C++ file 'plot_docker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "plot_docker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plot_docker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DraggableToolbar_t {
    QByteArrayData data[4];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DraggableToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DraggableToolbar_t qt_meta_stringdata_DraggableToolbar = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DraggableToolbar"
QT_MOC_LITERAL(1, 17, 20), // "on_stylesheetChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5) // "theme"

    },
    "DraggableToolbar\0on_stylesheetChanged\0"
    "\0theme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DraggableToolbar[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void DraggableToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DraggableToolbar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_stylesheetChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DraggableToolbar::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_DraggableToolbar.data,
    qt_meta_data_DraggableToolbar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DraggableToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DraggableToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DraggableToolbar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DraggableToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_DockWidget_t {
    QByteArrayData data[6];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DockWidget_t qt_meta_stringdata_DockWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DockWidget"
QT_MOC_LITERAL(1, 11, 14), // "undoableChange"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "splitHorizontal"
QT_MOC_LITERAL(4, 43, 11), // "DockWidget*"
QT_MOC_LITERAL(5, 55, 13) // "splitVertical"

    },
    "DockWidget\0undoableChange\0\0splitHorizontal\0"
    "DockWidget*\0splitVertical"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DockWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x0a /* Public */,
       5,    0,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 4,
    0x80000000 | 4,

       0        // eod
};

void DockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->undoableChange(); break;
        case 1: { DockWidget* _r = _t->splitHorizontal();
            if (_a[0]) *reinterpret_cast< DockWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: { DockWidget* _r = _t->splitVertical();
            if (_a[0]) *reinterpret_cast< DockWidget**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockWidget::undoableChange)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DockWidget::staticMetaObject = { {
    &ads::CDockWidget::staticMetaObject,
    qt_meta_stringdata_DockWidget.data,
    qt_meta_data_DockWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DockWidget.stringdata0))
        return static_cast<void*>(this);
    return ads::CDockWidget::qt_metacast(_clname);
}

int DockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ads::CDockWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void DockWidget::undoableChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_PlotDocker_t {
    QByteArrayData data[7];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlotDocker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlotDocker_t qt_meta_stringdata_PlotDocker = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PlotDocker"
QT_MOC_LITERAL(1, 11, 15), // "plotWidgetAdded"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "PlotWidget*"
QT_MOC_LITERAL(4, 40, 14), // "undoableChange"
QT_MOC_LITERAL(5, 55, 20), // "on_stylesheetChanged"
QT_MOC_LITERAL(6, 76, 5) // "theme"

    },
    "PlotDocker\0plotWidgetAdded\0\0PlotWidget*\0"
    "undoableChange\0on_stylesheetChanged\0"
    "theme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlotDocker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void PlotDocker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlotDocker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->plotWidgetAdded((*reinterpret_cast< PlotWidget*(*)>(_a[1]))); break;
        case 1: _t->undoableChange(); break;
        case 2: _t->on_stylesheetChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlotWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlotDocker::*)(PlotWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotDocker::plotWidgetAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlotDocker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotDocker::undoableChange)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlotDocker::staticMetaObject = { {
    &ads::CDockManager::staticMetaObject,
    qt_meta_stringdata_PlotDocker.data,
    qt_meta_data_PlotDocker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlotDocker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlotDocker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlotDocker.stringdata0))
        return static_cast<void*>(this);
    return ads::CDockManager::qt_metacast(_clname);
}

int PlotDocker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ads::CDockManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PlotDocker::plotWidgetAdded(PlotWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlotDocker::undoableChange()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
