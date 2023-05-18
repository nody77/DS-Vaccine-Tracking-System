/****************************************************************************
** Meta object code from reading C++ file 'AdminLoginPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../AdminLoginPage.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdminLoginPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAdminLoginPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAdminLoginPageENDCLASS = QtMocHelpers::stringData(
    "AdminLoginPage",
    "onLoginButtonClicked",
    "",
    "unordered_map<string,User>&",
    "userMap",
    "queue<User>&",
    "waitingList",
    "firstDoseList",
    "vector<User>&",
    "secondDoseList",
    "QStackedWidget&",
    "stackedWidget",
    "on_backButton_Clicked",
    "userdata",
    "fullyVaccinated",
    "firstDoseQueue",
    "seconDoseQueue"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAdminLoginPageENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[15];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[8];
    char stringdata5[13];
    char stringdata6[12];
    char stringdata7[14];
    char stringdata8[14];
    char stringdata9[15];
    char stringdata10[16];
    char stringdata11[14];
    char stringdata12[22];
    char stringdata13[9];
    char stringdata14[16];
    char stringdata15[15];
    char stringdata16[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAdminLoginPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAdminLoginPageENDCLASS_t qt_meta_stringdata_CLASSAdminLoginPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "AdminLoginPage"
        QT_MOC_LITERAL(15, 20),  // "onLoginButtonClicked"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 27),  // "unordered_map<string,User>&"
        QT_MOC_LITERAL(65, 7),  // "userMap"
        QT_MOC_LITERAL(73, 12),  // "queue<User>&"
        QT_MOC_LITERAL(86, 11),  // "waitingList"
        QT_MOC_LITERAL(98, 13),  // "firstDoseList"
        QT_MOC_LITERAL(112, 13),  // "vector<User>&"
        QT_MOC_LITERAL(126, 14),  // "secondDoseList"
        QT_MOC_LITERAL(141, 15),  // "QStackedWidget&"
        QT_MOC_LITERAL(157, 13),  // "stackedWidget"
        QT_MOC_LITERAL(171, 21),  // "on_backButton_Clicked"
        QT_MOC_LITERAL(193, 8),  // "userdata"
        QT_MOC_LITERAL(202, 15),  // "fullyVaccinated"
        QT_MOC_LITERAL(218, 14),  // "firstDoseQueue"
        QT_MOC_LITERAL(233, 14)   // "seconDoseQueue"
    },
    "AdminLoginPage",
    "onLoginButtonClicked",
    "",
    "unordered_map<string,User>&",
    "userMap",
    "queue<User>&",
    "waitingList",
    "firstDoseList",
    "vector<User>&",
    "secondDoseList",
    "QStackedWidget&",
    "stackedWidget",
    "on_backButton_Clicked",
    "userdata",
    "fullyVaccinated",
    "firstDoseQueue",
    "seconDoseQueue"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAdminLoginPageENDCLASS[] = {

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
       1,    5,   26,    2, 0x08,    1 /* Private */,
      12,    5,   37,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 8, 0x80000000 | 10,    4,    6,    7,    9,   11,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 8, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 10,   13,   14,   15,   16,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject AdminLoginPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSAdminLoginPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAdminLoginPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAdminLoginPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdminLoginPage, std::true_type>,
        // method 'onLoginButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unordered_map<string,User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<queue<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<queue<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStackedWidget &, std::false_type>,
        // method 'on_backButton_Clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unordered_map<string,User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<queue<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<queue<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStackedWidget &, std::false_type>
    >,
    nullptr
} };

void AdminLoginPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminLoginPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onLoginButtonClicked((*reinterpret_cast< std::add_pointer_t<unordered_map<string,User>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<queue<User>&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<queue<User>&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<vector<User>&>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QStackedWidget&>>(_a[5]))); break;
        case 1: _t->on_backButton_Clicked((*reinterpret_cast< std::add_pointer_t<unordered_map<string,User>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<vector<User>&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<queue<User>&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<queue<User>&>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QStackedWidget&>>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObject *AdminLoginPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminLoginPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAdminLoginPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AdminLoginPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
