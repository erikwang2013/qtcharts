/****************************************************************************
** Meta object code from reading C++ file 'glxyseriesdata_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../xychart/glxyseriesdata_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glxyseriesdata_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCharts__GLXYSeriesDataManager_t {
    QByteArrayData data[11];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__GLXYSeriesDataManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__GLXYSeriesDataManager_t qt_meta_stringdata_QtCharts__GLXYSeriesDataManager = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QtCharts::GLXYSeriesDataManager"
QT_MOC_LITERAL(1, 32, 13), // "seriesRemoved"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 16), // "const QXYSeries*"
QT_MOC_LITERAL(4, 64, 6), // "series"
QT_MOC_LITERAL(5, 71, 7), // "cleanup"
QT_MOC_LITERAL(6, 79, 21), // "handleSeriesPenChange"
QT_MOC_LITERAL(7, 101, 24), // "handleSeriesOpenGLChange"
QT_MOC_LITERAL(8, 126, 28), // "handleSeriesVisibilityChange"
QT_MOC_LITERAL(9, 155, 24), // "handleScatterColorChange"
QT_MOC_LITERAL(10, 180, 29) // "handleScatterMarkerSizeChange"

    },
    "QtCharts::GLXYSeriesDataManager\0"
    "seriesRemoved\0\0const QXYSeries*\0series\0"
    "cleanup\0handleSeriesPenChange\0"
    "handleSeriesOpenGLChange\0"
    "handleSeriesVisibilityChange\0"
    "handleScatterColorChange\0"
    "handleScatterMarkerSizeChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__GLXYSeriesDataManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,
       9,    0,   56,    2, 0x0a /* Public */,
      10,    0,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtCharts::GLXYSeriesDataManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GLXYSeriesDataManager *_t = static_cast<GLXYSeriesDataManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->seriesRemoved((*reinterpret_cast< const QXYSeries*(*)>(_a[1]))); break;
        case 1: _t->cleanup(); break;
        case 2: _t->handleSeriesPenChange(); break;
        case 3: _t->handleSeriesOpenGLChange(); break;
        case 4: _t->handleSeriesVisibilityChange(); break;
        case 5: _t->handleScatterColorChange(); break;
        case 6: _t->handleScatterMarkerSizeChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GLXYSeriesDataManager::*_t)(const QXYSeries * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLXYSeriesDataManager::seriesRemoved)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QtCharts::GLXYSeriesDataManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCharts__GLXYSeriesDataManager.data,
      qt_meta_data_QtCharts__GLXYSeriesDataManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtCharts::GLXYSeriesDataManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::GLXYSeriesDataManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__GLXYSeriesDataManager.stringdata0))
        return static_cast<void*>(const_cast< GLXYSeriesDataManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QtCharts::GLXYSeriesDataManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QtCharts::GLXYSeriesDataManager::seriesRemoved(const QXYSeries * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
