/****************************************************************************
** Meta object code from reading C++ file 'QSourceManager.h'
**
** Created: Wed 24. Nov 19:16:28 2010
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
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      39,   15,   15,   15, 0x0a,
      62,   15,   15,   15, 0x0a,
      86,   80,   15,   15, 0x0a,
     116,   80,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QSourceManager[] = {
    "QSourceManager\0\0actShowHelpTriggered()\0"
    "actShowConfTriggered()\0actRunTriggered()\0"
    "index\0cmbSourceSelectActivated(int)\0"
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
        case 0: actShowHelpTriggered(); break;
        case 1: actShowConfTriggered(); break;
        case 2: actRunTriggered(); break;
        case 3: cmbSourceSelectActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: cmbAddressEditActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
