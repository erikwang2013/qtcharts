/****************************************************************************
** Meta object code from reading C++ file 'boxplotchartitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../boxplotchart/boxplotchartitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boxplotchartitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCharts__BoxPlotChartItem_t {
    QByteArrayData data[9];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__BoxPlotChartItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__BoxPlotChartItem_t qt_meta_stringdata_QtCharts__BoxPlotChartItem = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QtCharts::BoxPlotChartItem"
QT_MOC_LITERAL(1, 27, 26), // "handleDataStructureChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 19), // "handleDomainUpdated"
QT_MOC_LITERAL(4, 75, 19), // "handleLayoutChanged"
QT_MOC_LITERAL(5, 95, 17), // "handleUpdatedBars"
QT_MOC_LITERAL(6, 113, 18), // "handleBoxsetRemove"
QT_MOC_LITERAL(7, 132, 15), // "QList<QBoxSet*>"
QT_MOC_LITERAL(8, 148, 7) // "barSets"

    },
    "QtCharts::BoxPlotChartItem\0"
    "handleDataStructureChanged\0\0"
    "handleDomainUpdated\0handleLayoutChanged\0"
    "handleUpdatedBars\0handleBoxsetRemove\0"
    "QList<QBoxSet*>\0barSets"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__BoxPlotChartItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void QtCharts::BoxPlotChartItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BoxPlotChartItem *_t = static_cast<BoxPlotChartItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleDataStructureChanged(); break;
        case 1: _t->handleDomainUpdated(); break;
        case 2: _t->handleLayoutChanged(); break;
        case 3: _t->handleUpdatedBars(); break;
        case 4: _t->handleBoxsetRemove((*reinterpret_cast< QList<QBoxSet*>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QBoxSet*> >(); break;
            }
            break;
        }
    }
}

const QMetaObject QtCharts::BoxPlotChartItem::staticMetaObject = {
    { &ChartItem::staticMetaObject, qt_meta_stringdata_QtCharts__BoxPlotChartItem.data,
      qt_meta_data_QtCharts__BoxPlotChartItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtCharts::BoxPlotChartItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::BoxPlotChartItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__BoxPlotChartItem.stringdata0))
        return static_cast<void*>(const_cast< BoxPlotChartItem*>(this));
    return ChartItem::qt_metacast(_clname);
}

int QtCharts::BoxPlotChartItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChartItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
