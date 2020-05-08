/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BlackJack/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[25];
    char stringdata0[336];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "on_DealNow_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "on_Exit_clicked"
QT_MOC_LITERAL(4, 47, 39), // "on_comboBoxCurrency_currentIn..."
QT_MOC_LITERAL(5, 87, 5), // "index"
QT_MOC_LITERAL(6, 93, 16), // "valueChangedSlot"
QT_MOC_LITERAL(7, 110, 8), // "newValue"
QT_MOC_LITERAL(8, 119, 22), // "ValueChangedByUserSlot"
QT_MOC_LITERAL(9, 142, 9), // "QSpinBox*"
QT_MOC_LITERAL(10, 152, 7), // "SpinBox"
QT_MOC_LITERAL(11, 160, 13), // "NextColorSlot"
QT_MOC_LITERAL(12, 174, 7), // "HitNext"
QT_MOC_LITERAL(13, 182, 23), // "on_RepeatButton_clicked"
QT_MOC_LITERAL(14, 206, 23), // "on_DoubleButton_clicked"
QT_MOC_LITERAL(15, 230, 3), // "Hit"
QT_MOC_LITERAL(16, 234, 1), // "i"
QT_MOC_LITERAL(17, 236, 5), // "Stand"
QT_MOC_LITERAL(18, 242, 9), // "closeFunc"
QT_MOC_LITERAL(19, 252, 13), // "multiSeatFunc"
QT_MOC_LITERAL(20, 266, 10), // "NextSecond"
QT_MOC_LITERAL(21, 277, 10), // "DoubleDown"
QT_MOC_LITERAL(22, 288, 5), // "Split"
QT_MOC_LITERAL(23, 294, 22), // "OpenDealerCardsProcess"
QT_MOC_LITERAL(24, 317, 18) // "NewGamePreparation"

    },
    "MainWindow\0on_DealNow_clicked\0\0"
    "on_Exit_clicked\0on_comboBoxCurrency_currentIndexChanged\0"
    "index\0valueChangedSlot\0newValue\0"
    "ValueChangedByUserSlot\0QSpinBox*\0"
    "SpinBox\0NextColorSlot\0HitNext\0"
    "on_RepeatButton_clicked\0on_DoubleButton_clicked\0"
    "Hit\0i\0Stand\0closeFunc\0multiSeatFunc\0"
    "NextSecond\0DoubleDown\0Split\0"
    "OpenDealerCardsProcess\0NewGamePreparation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  139,    2, 0x0a /* Public */,
       3,    0,  140,    2, 0x08 /* Private */,
       4,    1,  141,    2, 0x08 /* Private */,
       6,    1,  144,    2, 0x08 /* Private */,
       8,    1,  147,    2, 0x08 /* Private */,
       8,    0,  150,    2, 0x28 /* Private | MethodCloned */,
      11,    0,  151,    2, 0x08 /* Private */,
      12,    0,  152,    2, 0x08 /* Private */,
      13,    0,  153,    2, 0x08 /* Private */,
      14,    0,  154,    2, 0x08 /* Private */,
      15,    1,  155,    2, 0x08 /* Private */,
      15,    0,  158,    2, 0x28 /* Private | MethodCloned */,
      17,    1,  159,    2, 0x08 /* Private */,
      17,    0,  162,    2, 0x28 /* Private | MethodCloned */,
      18,    1,  163,    2, 0x08 /* Private */,
      18,    0,  166,    2, 0x28 /* Private | MethodCloned */,
      19,    1,  167,    2, 0x08 /* Private */,
      19,    0,  170,    2, 0x28 /* Private | MethodCloned */,
      20,    0,  171,    2, 0x08 /* Private */,
      21,    1,  172,    2, 0x08 /* Private */,
      21,    0,  175,    2, 0x28 /* Private | MethodCloned */,
      22,    1,  176,    2, 0x08 /* Private */,
      22,    0,  179,    2, 0x28 /* Private | MethodCloned */,
      23,    0,  180,    2, 0x08 /* Private */,
      24,    0,  181,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Bool, 0x80000000 | 9,   10,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_DealNow_clicked(); break;
        case 1: _t->on_Exit_clicked(); break;
        case 2: _t->on_comboBoxCurrency_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->valueChangedSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: { bool _r = _t->ValueChangedByUserSlot((*reinterpret_cast< QSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->ValueChangedByUserSlot();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->NextColorSlot(); break;
        case 7: _t->HitNext(); break;
        case 8: _t->on_RepeatButton_clicked(); break;
        case 9: _t->on_DoubleButton_clicked(); break;
        case 10: _t->Hit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->Hit(); break;
        case 12: _t->Stand((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->Stand(); break;
        case 14: _t->closeFunc((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->closeFunc(); break;
        case 16: _t->multiSeatFunc((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->multiSeatFunc(); break;
        case 18: _t->NextSecond(); break;
        case 19: _t->DoubleDown((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->DoubleDown(); break;
        case 21: _t->Split((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->Split(); break;
        case 23: _t->OpenDealerCardsProcess(); break;
        case 24: _t->NewGamePreparation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
