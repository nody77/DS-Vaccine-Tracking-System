/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *ID_Label;
    QLabel *Password_Label;
    QLineEdit *ID_TextBox;
    QLineEdit *Password_TextBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LoginClass)
    {
        if (LoginClass->objectName().isEmpty())
            LoginClass->setObjectName("LoginClass");
        LoginClass->resize(1290, 643);
        centralWidget = new QWidget(LoginClass);
        centralWidget->setObjectName("centralWidget");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 10, 641, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 100, 951, 311));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(20);
        font1.setBold(true);
        groupBox->setFont(font1);
        ID_Label = new QLabel(groupBox);
        ID_Label->setObjectName("ID_Label");
        ID_Label->setGeometry(QRect(160, 70, 151, 41));
        Password_Label = new QLabel(groupBox);
        Password_Label->setObjectName("Password_Label");
        Password_Label->setGeometry(QRect(160, 120, 131, 41));
        ID_TextBox = new QLineEdit(groupBox);
        ID_TextBox->setObjectName("ID_TextBox");
        ID_TextBox->setGeometry(QRect(320, 70, 301, 31));
        Password_TextBox = new QLineEdit(groupBox);
        Password_TextBox->setObjectName("Password_TextBox");
        Password_TextBox->setGeometry(QRect(320, 120, 301, 31));
        LoginClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LoginClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1290, 22));
        LoginClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LoginClass);
        mainToolBar->setObjectName("mainToolBar");
        LoginClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LoginClass);
        statusBar->setObjectName("statusBar");
        LoginClass->setStatusBar(statusBar);

        retranslateUi(LoginClass);

        QMetaObject::connectSlotsByName(LoginClass);
    } // setupUi

    void retranslateUi(QMainWindow *LoginClass)
    {
        LoginClass->setWindowTitle(QCoreApplication::translate("LoginClass", "Login", nullptr));
        label->setText(QCoreApplication::translate("LoginClass", "Welcome To Vaccine Tracking System", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LoginClass", "Login", nullptr));
        ID_Label->setText(QCoreApplication::translate("LoginClass", "National ID", nullptr));
        Password_Label->setText(QCoreApplication::translate("LoginClass", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginClass: public Ui_LoginClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
