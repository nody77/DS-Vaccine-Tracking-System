/********************************************************************************
** Form generated from reading UI file 'WelcomePage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEPAGE_H
#define UI_WELCOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomePageClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WelcomePageClass)
    {
        if (WelcomePageClass->objectName().isEmpty())
            WelcomePageClass->setObjectName("WelcomePageClass");
        WelcomePageClass->resize(600, 400);
        menuBar = new QMenuBar(WelcomePageClass);
        menuBar->setObjectName("menuBar");
        WelcomePageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WelcomePageClass);
        mainToolBar->setObjectName("mainToolBar");
        WelcomePageClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(WelcomePageClass);
        centralWidget->setObjectName("centralWidget");
        WelcomePageClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(WelcomePageClass);
        statusBar->setObjectName("statusBar");
        WelcomePageClass->setStatusBar(statusBar);

        retranslateUi(WelcomePageClass);

        QMetaObject::connectSlotsByName(WelcomePageClass);
    } // setupUi

    void retranslateUi(QMainWindow *WelcomePageClass)
    {
        WelcomePageClass->setWindowTitle(QCoreApplication::translate("WelcomePageClass", "WelcomePage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomePageClass: public Ui_WelcomePageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEPAGE_H
