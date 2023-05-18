/********************************************************************************
** Form generated from reading UI file 'AdminControls.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCONTROLS_H
#define UI_ADMINCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminControlsClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AdminControlsClass)
    {
        if (AdminControlsClass->objectName().isEmpty())
            AdminControlsClass->setObjectName("AdminControlsClass");
        AdminControlsClass->resize(600, 400);
        menuBar = new QMenuBar(AdminControlsClass);
        menuBar->setObjectName("menuBar");
        AdminControlsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AdminControlsClass);
        mainToolBar->setObjectName("mainToolBar");
        AdminControlsClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(AdminControlsClass);
        centralWidget->setObjectName("centralWidget");
        AdminControlsClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AdminControlsClass);
        statusBar->setObjectName("statusBar");
        AdminControlsClass->setStatusBar(statusBar);

        retranslateUi(AdminControlsClass);

        QMetaObject::connectSlotsByName(AdminControlsClass);
    } // setupUi

    void retranslateUi(QMainWindow *AdminControlsClass)
    {
        AdminControlsClass->setWindowTitle(QCoreApplication::translate("AdminControlsClass", "AdminControls", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminControlsClass: public Ui_AdminControlsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCONTROLS_H
