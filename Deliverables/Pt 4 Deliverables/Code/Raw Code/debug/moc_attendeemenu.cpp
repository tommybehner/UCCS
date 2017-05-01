/****************************************************************************
** Meta object code from reading C++ file 'attendeemenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../attendeemenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attendeemenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AttendeeMenu_t {
    QByteArrayData data[10];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AttendeeMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AttendeeMenu_t qt_meta_stringdata_AttendeeMenu = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AttendeeMenu"
QT_MOC_LITERAL(1, 13, 11), // "nameChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "string"
QT_MOC_LITERAL(4, 33, 7), // "newName"
QT_MOC_LITERAL(5, 41, 7), // "setName"
QT_MOC_LITERAL(6, 49, 20), // "updateEquipmentTable"
QT_MOC_LITERAL(7, 70, 45), // "on_tableView_registeredsessio..."
QT_MOC_LITERAL(8, 116, 5), // "index"
QT_MOC_LITERAL(9, 122, 45) // "on_tableView_Availablkesessio..."

    },
    "AttendeeMenu\0nameChanged\0\0string\0"
    "newName\0setName\0updateEquipmentTable\0"
    "on_tableView_registeredsessions_doubleClicked\0"
    "index\0on_tableView_Availablkesessions_doubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AttendeeMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x0a /* Public */,
       6,    0,   45,    2, 0x0a /* Public */,
       7,    1,   46,    2, 0x08 /* Private */,
       9,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void, QMetaType::QModelIndex,    8,

       0        // eod
};

void AttendeeMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AttendeeMenu *_t = static_cast<AttendeeMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 1: _t->setName((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 2: _t->updateEquipmentTable(); break;
        case 3: _t->on_tableView_registeredsessions_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_tableView_Availablkesessions_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AttendeeMenu::*_t)(string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AttendeeMenu::nameChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AttendeeMenu::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AttendeeMenu.data,
      qt_meta_data_AttendeeMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AttendeeMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttendeeMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AttendeeMenu.stringdata0))
        return static_cast<void*>(const_cast< AttendeeMenu*>(this));
    return QDialog::qt_metacast(_clname);
}

int AttendeeMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AttendeeMenu::nameChanged(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
