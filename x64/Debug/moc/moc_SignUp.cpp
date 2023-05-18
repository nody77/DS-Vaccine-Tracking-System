/****************************************************************************
** Meta object code from reading C++ file 'SignUp.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SignUp.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SignUp.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSignUpENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSignUpENDCLASS = QtMocHelpers::stringData(
    "SignUp",
    "on_submitButton_Clicked",
    "",
    "unordered_map<string,User>&",
    "vector<User>&",
    "queue<User>&",
    "QStackedWidget&",
    "on_backButton_Clicked",
    "stackedWidget"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSignUpENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[7];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[14];
    char stringdata5[13];
    char stringdata6[16];
    char stringdata7[22];
    char stringdata8[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSignUpENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSignUpENDCLASS_t qt_meta_stringdata_CLASSSignUpENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "SignUp"
        QT_MOC_LITERAL(7, 23),  // "on_submitButton_Clicked"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 27),  // "unordered_map<string,User>&"
        QT_MOC_LITERAL(60, 13),  // "vector<User>&"
        QT_MOC_LITERAL(74, 12),  // "queue<User>&"
        QT_MOC_LITERAL(87, 15),  // "QStackedWidget&"
        QT_MOC_LITERAL(103, 21),  // "on_backButton_Clicked"
        QT_MOC_LITERAL(125, 13)   // "stackedWidget"
    },
    "SignUp",
    "on_submitButton_Clicked",
    "",
    "unordered_map<string,User>&",
    "vector<User>&",
    "queue<User>&",
    "QStackedWidget&",
    "on_backButton_Clicked",
    "stackedWidget"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSignUpENDCLASS[] = {

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
       1,    7,   26,    2, 0x0a,    1 /* Public */,
       7,    7,   41,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 6,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 6,    2,    2,    2,    2,    2,    2,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject SignUp::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSSignUpENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSignUpENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSignUpENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SignUp, std::true_type>,
        // method 'on_submitButton_Clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unordered_map<string,User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<queue<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<queue<User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStackedWidget &, std::false_type>,
        // method 'on_backButton_Clicked'
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

void SignUp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SignUp *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_submitButton_Clicked((*reinterpret_cast< std::add_pointer_t<unordered_map<string,User>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<vector<User>&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<vector<User>&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<vector<User>&>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<queue<User>&>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<queue<User>&>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QStackedWidget&>>(_a[7]))); break;
        case 1: _t->on_backButton_Clicked((*reinterpret_cast< std::add_pointer_t<unordered_map<string,User>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<vector<User>&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<vector<User>&>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<vector<User>&>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<queue<User>&>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<queue<User>&>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QStackedWidget&>>(_a[7]))); break;
        default: ;
        }
    }
}

const QMetaObject *SignUp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SignUp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSignUpENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SignUp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
