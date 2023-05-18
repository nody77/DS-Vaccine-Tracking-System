/********************************************************************************
** Form generated from reading UI file 'EditUserWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITUSERWINDOW_H
#define UI_EDITUSERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditUserWindowClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *EditUserWindowClass)
    {
        if (EditUserWindowClass->objectName().isEmpty())
            EditUserWindowClass->setObjectName("EditUserWindowClass");
        EditUserWindowClass->resize(600, 400);
        menuBar = new QMenuBar(EditUserWindowClass);
        menuBar->setObjectName("menuBar");
        EditUserWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(EditUserWindowClass);
        mainToolBar->setObjectName("mainToolBar");
        EditUserWindowClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(EditUserWindowClass);
        centralWidget->setObjectName("centralWidget");
        EditUserWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(EditUserWindowClass);
        statusBar->setObjectName("statusBar");
        EditUserWindowClass->setStatusBar(statusBar);

        retranslateUi(EditUserWindowClass);

        QMetaObject::connectSlotsByName(EditUserWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *EditUserWindowClass)
    {
        EditUserWindowClass->setWindowTitle(QCoreApplication::translate("EditUserWindowClass", "EditUserWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditUserWindowClass: public Ui_EditUserWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITUSERWINDOW_H
