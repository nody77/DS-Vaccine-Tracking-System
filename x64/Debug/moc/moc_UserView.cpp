/****************************************************************************
** Meta object code from reading C++ file 'UserView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UserView.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserView.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSUserViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSUserViewENDCLASS = QtMocHelpers::stringData(
    "UserView",
    "onDeleteButtonPressed",
    "",
    "unordered_map<string,User>&",
    "queue<User>&",
    "vector<User>&",
    "QStackedWidget&",
    "User",
    "onLogOutButtonPressed",
    "on_Edit_Button_clicked",
    "userMap",
    "fullyVaccinated",
    "waitForFirstConfirm",
    "waitForSecondConfirm",
    "firstDoseQueue",
    "seconDoseQueue",
    "stackedWidget"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSUserViewENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[9];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[13];
    char stringdata5[14];
    char stringdata6[16];
    char stringdata7[5];
    char stringdata8[22];
    char stringdata9[23];
    char stringdata10[8];
    char stringdata11[16];
    char stringdata12[20];
    char stringdata13[21];
    char stringdata14[15];
    char stringdata15[15];
    char stringdata16[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSUserViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSUserViewENDCLASS_t qt_meta_stringdata_CLASSUserViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "UserView"
        QT_MOC_LITERAL(9, 21),  // "onDeleteButtonPressed"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 27),  // "unordered_map<string,User>&"
        QT_MOC_LITERAL(60, 12),  // "queue<User>&"
        QT_MOC_LITERAL(73, 13),  // "vector<User>&"
        QT_MOC_LITERAL(87, 15),  // "QStackedWidget&"
        QT_MOC_LITERAL(103, 4),  // "User"
        QT_MOC_LITERAL(108, 21),  // "onLogOutButtonPressed"
        QT_MOC_LITERAL(130, 22),  // "on_Edit_Button_clicked"
        QT_MOC_LITERAL(153, 7),  // "userMap"
        QT_MOC_LITERAL(161, 15),  // "fullyVaccinated"
        QT_MOC_LITERAL(177, 19),  // "waitForFirstConfirm"
        QT_MOC_LITERAL(197, 20),  // "waitForSecondConfirm"
        QT_MOC_LITERAL(218, 14),  // "firstDoseQueue"
        QT_MOC_LITERAL(233, 14),  // "seconDoseQueue"
        QT_MOC_LITERAL(248, 13)   // "stackedWidget"
    },
    "UserView",
    "onDeleteButtonPressed",
    "",
    "unordered_map<string,User>&",
    "queue<User>&",
    "vector<User>&",
    "QStackedWidget&",
    "User",
    "onLogOutButtonPressed",
    "on_Edit_Button_clicked",
    "userMap",
    "fullyVaccinated",
    "waitForFirstConfirm",
    "waitForSecondConfirm",
    "firstDoseQueue",
    "seconDoseQueue",
    "stackedWidget"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUserViewENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    8,   32,    2, 0x08,    1 /* Private */,
       8,    7,   49,    2, 0x08,   10 /* Private */,
       9,    7,   64,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 6, 0x80000000 | 7,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 6,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 6,   10,   11,   12,   13,   14,   15,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject UserView::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSUserViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUserViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUserViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserView, std::true_type>,
        // method 'onDeleteButtonPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unordered_map<string,User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<queue<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<queue<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStackedWidget &, std::false_type>,
        QtPrivate::TypeAndForceComplete<User, std::false_type>,
        // method 'onLogOutButtonPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unordered_map<string,User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<queue<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<queue<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStackedWidget &, std::false_type>,
        // method 'on_Edit_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unordered_map<string,User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<queue<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<queue<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStackedWidget &, std::false_type>
    >,
    nullptr
} };

void UserView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onDeleteButtonPressed((*reinterpret_cast< std::add_pointer_t<unordered_map<string,User>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<queue<User>&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<queue<User>&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<vector<User>&>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<vector<User>&>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<vector<User>&>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QStackedWidget&>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<User>>(_a[8]))); break;
        case 1: _t->onLogOutButtonPressed((*reinterpret_cast< std::add_pointer_t<unordered_map<string,User>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<vector<User>&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<vector<User>&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<vector<User>&>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<queue<User>&>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<queue<User>&>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QStackedWidget&>>(_a[7]))); break;
        case 2: _t->on_Edit_Button_clicked((*reinterpret_cast< std::add_pointer_t<unordered_map<string,User>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<vector<User>&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<vector<User>&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<vector<User>&>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<queue<User>&>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<queue<User>&>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QStackedWidget&>>(_a[7]))); break;
        default: ;
        }
    }
}

const QMetaObject *UserView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUserViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int UserView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
