/****************************************************************************
** Meta object code from reading C++ file 'qpolarchart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qpolarchart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpolarchart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCharts__QPolarChart_t {
    QByteArrayData data[5];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QPolarChart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QPolarChart_t qt_meta_stringdata_QtCharts__QPolarChart = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QtCharts::QPolarChart"
QT_MOC_LITERAL(1, 22, 16), // "PolarOrientation"
QT_MOC_LITERAL(2, 39, 22), // "PolarOrientationRadial"
QT_MOC_LITERAL(3, 62, 23), // "PolarOrientationAngular"
QT_MOC_LITERAL(4, 86, 17) // "PolarOrientations"

    },
    "QtCharts::QPolarChart\0PolarOrientation\0"
    "PolarOrientationRadial\0PolarOrientationAngular\0"
    "PolarOrientations"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QPolarChart[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    2,   22,
       4, 0x1,    2,   26,

 // enum data: key, value
       2, uint(QtCharts::QPolarChart::PolarOrientationRadial),
       3, uint(QtCharts::QPolarChart::PolarOrientationAngular),
       2, uint(QtCharts::QPolarChart::PolarOrientationRadial),
       3, uint(QtCharts::QPolarChart::PolarOrientationAngular),

       0        // eod
};

void QtCharts::QPolarChart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QtCharts::QPolarChart::staticMetaObject = {
    { &QChart::staticMetaObject, qt_meta_stringdata_QtCharts__QPolarChart.data,
      qt_meta_data_QtCharts__QPolarChart,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtCharts::QPolarChart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QPolarChart::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QPolarChart.stringdata0))
        return static_cast<void*>(const_cast< QPolarChart*>(this));
    return QChart::qt_metacast(_clname);
}

int QtCharts::QPolarChart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QChart::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
