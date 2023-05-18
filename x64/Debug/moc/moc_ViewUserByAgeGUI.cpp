/****************************************************************************
** Meta object code from reading C++ file 'ViewUserByAgeGUI.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ViewUserByAgeGUI.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewUserByAgeGUI.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSViewUserByAgeGUIENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSViewUserByAgeGUIENDCLASS = QtMocHelpers::stringData(
    "ViewUserByAgeGUI",
    "onViewAscendingButtonClicked",
    "",
    "unordered_map<string,User>&",
    "userData",
    "QStackedWidget&",
    "stackedWidget",
    "onViewDescendingButtonClicked",
    "onBackButtonclicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSViewUserByAgeGUIENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[17];
    char stringdata1[29];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[9];
    char stringdata5[16];
    char stringdata6[14];
    char stringdata7[30];
    char stringdata8[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSViewUserByAgeGUIENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSViewUserByAgeGUIENDCLASS_t qt_meta_stringdata_CLASSViewUserByAgeGUIENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "ViewUserByAgeGUI"
        QT_MOC_LITERAL(17, 28),  // "onViewAscendingButtonClicked"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 27),  // "unordered_map<string,User>&"
        QT_MOC_LITERAL(75, 8),  // "userData"
        QT_MOC_LITERAL(84, 15),  // "QStackedWidget&"
        QT_MOC_LITERAL(100, 13),  // "stackedWidget"
        QT_MOC_LITERAL(114, 29),  // "onViewDescendingButtonClicked"
        QT_MOC_LITERAL(144, 19)   // "onBackButtonclicked"
    },
    "ViewUserByAgeGUI",
    "onViewAscendingButtonClicked",
    "",
    "unordered_map<string,User>&",
    "userData",
    "QStackedWidget&",
    "stackedWidget",
    "onViewDescendingButtonClicked",
    "onBackButtonclicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSViewUserByAgeGUIENDCLASS[] = {

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
       1,    2,   32,    2, 0x08,    1 /* Private */,
       7,    2,   37,    2, 0x08,    4 /* Private */,
       8,    2,   42,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject ViewUserByAgeGUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSViewUserByAgeGUIENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSViewUserByAgeGUIENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSViewUserByAgeGUIENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ViewUserByAgeGUI, std::true_type>,
        // method 'onViewAscendingButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unordered_map<string,User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStackedWidget &, std::false_type>,
        // method 'onViewDescendingButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unordered_map<string,User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStackedWidget &, std::false_type>,
        // method 'onBackButtonclicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unordered_map<string,User> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStackedWidget &, std::false_type>
    >,
    nullptr
} };

void ViewUserByAgeGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewUserByAgeGUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onViewAscendingButtonClicked((*reinterpret_cast< std::add_pointer_t<unordered_map<string,User>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStackedWidget&>>(_a[2]))); break;
        case 1: _t->onViewDescendingButtonClicked((*reinterpret_cast< std::add_pointer_t<unordered_map<string,User>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStackedWidget&>>(_a[2]))); break;
        case 2: _t->onBackButtonclicked((*reinterpret_cast< std::add_pointer_t<unordered_map<string,User>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStackedWidget&>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *ViewUserByAgeGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewUserByAgeGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSViewUserByAgeGUIENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ViewUserByAgeGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
