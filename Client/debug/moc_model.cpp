/****************************************************************************
** Meta object code from reading C++ file 'model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnimalModel_t {
    QByteArrayData data[7];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnimalModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnimalModel_t qt_meta_stringdata_AnimalModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AnimalModel"
QT_MOC_LITERAL(1, 12, 11), // "infoChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "captionChanged"
QT_MOC_LITERAL(4, 40, 7), // "addNews"
QT_MOC_LITERAL(5, 48, 4), // "info"
QT_MOC_LITERAL(6, 53, 7) // "caption"

    },
    "AnimalModel\0infoChanged\0\0captionChanged\0"
    "addNews\0info\0caption"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnimalModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495103,
       6, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void AnimalModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnimalModel *_t = static_cast<AnimalModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->infoChanged(); break;
        case 1: _t->captionChanged(); break;
        case 2: _t->addNews(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AnimalModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AnimalModel::infoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AnimalModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AnimalModel::captionChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AnimalModel *_t = static_cast<AnimalModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->info(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->caption(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AnimalModel *_t = static_cast<AnimalModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInfo(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setCaption(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject AnimalModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_AnimalModel.data,
      qt_meta_data_AnimalModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AnimalModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnimalModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AnimalModel.stringdata0))
        return static_cast<void*>(const_cast< AnimalModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int AnimalModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AnimalModel::infoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void AnimalModel::captionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
