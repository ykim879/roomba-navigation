/****************************************************************************
** Meta object code from reading C++ file 'curvelist_panel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "curvelist_panel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'curvelist_panel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CurveListPanel_t {
    QByteArrayData data[29];
    char stringdata0[463];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CurveListPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CurveListPanel_t qt_meta_stringdata_CurveListPanel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CurveListPanel"
QT_MOC_LITERAL(1, 15, 18), // "hiddenItemsChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "createMathPlot"
QT_MOC_LITERAL(4, 50, 11), // "std::string"
QT_MOC_LITERAL(5, 62, 11), // "linked_plot"
QT_MOC_LITERAL(6, 74, 12), // "editMathPlot"
QT_MOC_LITERAL(7, 87, 9), // "plot_name"
QT_MOC_LITERAL(8, 97, 15), // "refreshMathPlot"
QT_MOC_LITERAL(9, 113, 10), // "curve_name"
QT_MOC_LITERAL(10, 124, 12), // "deleteCurves"
QT_MOC_LITERAL(11, 137, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(12, 162, 11), // "curve_names"
QT_MOC_LITERAL(13, 174, 29), // "on_lineEditFilter_textChanged"
QT_MOC_LITERAL(14, 204, 13), // "search_string"
QT_MOC_LITERAL(15, 218, 20), // "removeSelectedCurves"
QT_MOC_LITERAL(16, 239, 26), // "on_buttonAddCustom_clicked"
QT_MOC_LITERAL(17, 266, 27), // "on_buttonEditCustom_clicked"
QT_MOC_LITERAL(18, 294, 24), // "onCustomSelectionChanged"
QT_MOC_LITERAL(19, 319, 14), // "QItemSelection"
QT_MOC_LITERAL(20, 334, 8), // "selected"
QT_MOC_LITERAL(21, 343, 10), // "deselected"
QT_MOC_LITERAL(22, 354, 29), // "on_checkBoxShowValues_toggled"
QT_MOC_LITERAL(23, 384, 4), // "show"
QT_MOC_LITERAL(24, 389, 16), // "getSelectedNames"
QT_MOC_LITERAL(25, 406, 15), // "clearSelections"
QT_MOC_LITERAL(26, 422, 20), // "on_stylesheetChanged"
QT_MOC_LITERAL(27, 443, 5), // "theme"
QT_MOC_LITERAL(28, 449, 13) // "refreshValues"

    },
    "CurveListPanel\0hiddenItemsChanged\0\0"
    "createMathPlot\0std::string\0linked_plot\0"
    "editMathPlot\0plot_name\0refreshMathPlot\0"
    "curve_name\0deleteCurves\0"
    "std::vector<std::string>\0curve_names\0"
    "on_lineEditFilter_textChanged\0"
    "search_string\0removeSelectedCurves\0"
    "on_buttonAddCustom_clicked\0"
    "on_buttonEditCustom_clicked\0"
    "onCustomSelectionChanged\0QItemSelection\0"
    "selected\0deselected\0on_checkBoxShowValues_toggled\0"
    "show\0getSelectedNames\0clearSelections\0"
    "on_stylesheetChanged\0theme\0refreshValues"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CurveListPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    1,   90,    2, 0x06 /* Public */,
       6,    1,   93,    2, 0x06 /* Public */,
       8,    1,   96,    2, 0x06 /* Public */,
      10,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  102,    2, 0x08 /* Private */,
      15,    0,  105,    2, 0x08 /* Private */,
      16,    0,  106,    2, 0x08 /* Private */,
      17,    0,  107,    2, 0x08 /* Private */,
      18,    2,  108,    2, 0x08 /* Private */,
      22,    1,  113,    2, 0x08 /* Private */,
      24,    0,  116,    2, 0x0a /* Public */,
      25,    0,  117,    2, 0x0a /* Public */,
      26,    1,  118,    2, 0x0a /* Public */,
      28,    0,  121,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    7,
    QMetaType::Void, 0x80000000 | 4,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 19,   20,   21,
    QMetaType::Void, QMetaType::Bool,   23,
    0x80000000 | 11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void,

       0        // eod
};

void CurveListPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CurveListPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hiddenItemsChanged(); break;
        case 1: _t->createMathPlot((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 2: _t->editMathPlot((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 3: _t->refreshMathPlot((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 4: _t->deleteCurves((*reinterpret_cast< const std::vector<std::string>(*)>(_a[1]))); break;
        case 5: _t->on_lineEditFilter_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->removeSelectedCurves(); break;
        case 7: _t->on_buttonAddCustom_clicked(); break;
        case 8: _t->on_buttonEditCustom_clicked(); break;
        case 9: _t->onCustomSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 10: _t->on_checkBoxShowValues_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { std::vector<std::string> _r = _t->getSelectedNames();
            if (_a[0]) *reinterpret_cast< std::vector<std::string>*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->clearSelections(); break;
        case 13: _t->on_stylesheetChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->refreshValues(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CurveListPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurveListPanel::hiddenItemsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CurveListPanel::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurveListPanel::createMathPlot)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CurveListPanel::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurveListPanel::editMathPlot)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CurveListPanel::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurveListPanel::refreshMathPlot)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CurveListPanel::*)(const std::vector<std::string> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurveListPanel::deleteCurves)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CurveListPanel::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_CurveListPanel.data,
    qt_meta_data_CurveListPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CurveListPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurveListPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CurveListPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CurveListPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void CurveListPanel::hiddenItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CurveListPanel::createMathPlot(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CurveListPanel::editMathPlot(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CurveListPanel::refreshMathPlot(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CurveListPanel::deleteCurves(const std::vector<std::string> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
