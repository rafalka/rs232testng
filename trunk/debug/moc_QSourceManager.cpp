/****************************************************************************
** Meta object code from reading C++ file 'QSourceManager.h'
**
** Created: Wed 1. Dec 22:41:14 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QSourceManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QSourceManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSourceManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      61,   15,   15,   15, 0x0a,
      84,   15,   15,   15, 0x0a,
     107,   15,   15,   15, 0x0a,
     131,  125,   15,   15, 0x0a,
     161,  125,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QSourceManager[] = {
    "QSourceManager\0\0newProvider\0"
    "providerChanged(SourceProvider*)\0"
    "actShowHelpTriggered()\0actShowConfTriggered()\0"
    "actRunTriggered()\0index\0"
    "cmbSourceSelectActivated(int)\0"
    "cmbAddressEditActivated(int)\0"
};

const QMetaObject QSourceManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSourceManager,
      qt_meta_data_QSourceManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSourceManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSourceManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSourceManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSourceManager))
        return static_cast<void*>(const_cast< QSourceManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QSourceManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: providerChanged((*reinterpret_cast< SourceProvider*(*)>(_a[1]))); break;
        case 1: actShowHelpTriggered(); break;
        case 2: actShowConfTriggered(); break;
        case 3: actRunTriggered(); break;
        case 4: cmbSourceSelectActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: cmbAddressEditActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QSourceManager::providerChanged(SourceProvider * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
