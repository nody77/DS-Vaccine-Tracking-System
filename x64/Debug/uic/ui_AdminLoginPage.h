/********************************************************************************
** Form generated from reading UI file 'AdminLoginPage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGINPAGE_H
#define UI_ADMINLOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminLoginPageClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AdminLoginPageClass)
    {
        if (AdminLoginPageClass->objectName().isEmpty())
            AdminLoginPageClass->setObjectName("AdminLoginPageClass");
        AdminLoginPageClass->resize(600, 400);
        menuBar = new QMenuBar(AdminLoginPageClass);
        menuBar->setObjectName("menuBar");
        AdminLoginPageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AdminLoginPageClass);
        mainToolBar->setObjectName("mainToolBar");
        AdminLoginPageClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(AdminLoginPageClass);
        centralWidget->setObjectName("centralWidget");
        AdminLoginPageClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AdminLoginPageClass);
        statusBar->setObjectName("statusBar");
        AdminLoginPageClass->setStatusBar(statusBar);

        retranslateUi(AdminLoginPageClass);

        QMetaObject::connectSlotsByName(AdminLoginPageClass);
    } // setupUi

    void retranslateUi(QMainWindow *AdminLoginPageClass)
    {
        AdminLoginPageClass->setWindowTitle(QCoreApplication::translate("AdminLoginPageClass", "AdminLoginPage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminLoginPageClass: public Ui_AdminLoginPageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGINPAGE_H
