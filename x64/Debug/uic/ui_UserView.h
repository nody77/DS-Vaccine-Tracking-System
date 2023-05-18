/********************************************************************************
** Form generated from reading UI file 'UserView.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERVIEW_H
#define UI_USERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserViewClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *UserViewClass)
    {
        if (UserViewClass->objectName().isEmpty())
            UserViewClass->setObjectName("UserViewClass");
        UserViewClass->resize(600, 400);
        menuBar = new QMenuBar(UserViewClass);
        menuBar->setObjectName("menuBar");
        UserViewClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(UserViewClass);
        mainToolBar->setObjectName("mainToolBar");
        UserViewClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(UserViewClass);
        centralWidget->setObjectName("centralWidget");
        UserViewClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(UserViewClass);
        statusBar->setObjectName("statusBar");
        UserViewClass->setStatusBar(statusBar);

        retranslateUi(UserViewClass);

        QMetaObject::connectSlotsByName(UserViewClass);
    } // setupUi

    void retranslateUi(QMainWindow *UserViewClass)
    {
        UserViewClass->setWindowTitle(QCoreApplication::translate("UserViewClass", "UserView", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserViewClass: public Ui_UserViewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERVIEW_H
