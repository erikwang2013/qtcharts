/****************************************************************************
** Meta object code from reading C++ file 'chartvalueaxisx_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../axis/valueaxis/chartvalueaxisx_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartvalueaxisx_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCharts__ChartValueAxisX_t {
    QByteArrayData data[7];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__ChartValueAxisX_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__ChartValueAxisX_t qt_meta_stringdata_QtCharts__ChartValueAxisX = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QtCharts::ChartValueAxisX"
QT_MOC_LITERAL(1, 26, 22), // "handleTickCountChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 4), // "tick"
QT_MOC_LITERAL(4, 55, 27), // "handleMinorTickCountChanged"
QT_MOC_LITERAL(5, 83, 24), // "handleLabelFormatChanged"
QT_MOC_LITERAL(6, 108, 6) // "format"

    },
    "QtCharts::ChartValueAxisX\0"
    "handleTickCountChanged\0\0tick\0"
    "handleMinorTickCountChanged\0"
    "handleLabelFormatChanged\0format"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__ChartValueAxisX[] = {

 // content:
       7,       // revision
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
       4,    1,   32,    2, 0x08 /* Private */,
       5,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void QtCharts::ChartValueAxisX::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChartValueAxisX *_t = static_cast<ChartValueAxisX *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleTickCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->handleMinorTickCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->handleLabelFormatChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtCharts::ChartValueAxisX::staticMetaObject = {
    { &HorizontalAxis::staticMetaObject, qt_meta_stringdata_QtCharts__ChartValueAxisX.data,
      qt_meta_data_QtCharts__ChartValueAxisX,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtCharts::ChartValueAxisX::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::ChartValueAxisX::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__ChartValueAxisX.stringdata0))
        return static_cast<void*>(const_cast< ChartValueAxisX*>(this));
    return HorizontalAxis::qt_metacast(_clname);
}

int QtCharts::ChartValueAxisX::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HorizontalAxis::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
