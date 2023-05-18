/****************************************************************************
** Meta object code from reading C++ file 'viewWaitingList.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../viewWaitingList.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewWaitingList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSviewWaitingListENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSviewWaitingListENDCLASS = QtMocHelpers::stringData(
    "viewWaitingList",
    "tableDisplay",
    "",
    "queue<User>&",
    "waitingList",
    "QStackedWidget&",
    "stackedWidget",
    "onbackButtonclicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSviewWaitingListENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[16];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[12];
    char stringdata5[16];
    char stringdata6[14];
    char stringdata7[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSviewWaitingListENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSviewWaitingListENDCLASS_t qt_meta_stringdata_CLASSviewWaitingListENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "viewWaitingList"
        QT_MOC_LITERAL(16, 12),  // "tableDisplay"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 12),  // "queue<User>&"
        QT_MOC_LITERAL(43, 11),  // "waitingList"
        QT_MOC_LITERAL(55, 15),  // "QStackedWidget&"
        QT_MOC_LITERAL(71, 13),  // "stackedWidget"
        QT_MOC_LITERAL(85, 19)   // "onbackButtonclicked"
    },
    "viewWaitingList",
    "tableDisplay",
    "",
    "queue<User>&",
    "waitingList",
    "QStackedWidget&",
    "stackedWidget",
    "onbackButtonclicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSviewWaitingListENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   26,    2, 0x08,    1 /* Private */,
       7,    2,   31,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject viewWaitingList::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSviewWaitingListENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSviewWaitingListENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSviewWaitingListENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<viewWaitingList, std::true_type>,
        // method 'tableDisplay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<queue<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStackedWidget &, std::false_type>,
        // method 'onbackButtonclicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<queue<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStackedWidget &, std::false_type>
    >,
    nullptr
} };

void viewWaitingList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<viewWaitingList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tableDisplay((*reinterpret_cast< std::add_pointer_t<queue<User>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStackedWidget&>>(_a[2]))); break;
        case 1: _t->onbackButtonclicked((*reinterpret_cast< std::add_pointer_t<queue<User>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStackedWidget&>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *viewWaitingList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *viewWaitingList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSviewWaitingListENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int viewWaitingList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
