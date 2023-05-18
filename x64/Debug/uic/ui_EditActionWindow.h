/********************************************************************************
** Form generated from reading UI file 'EditActionWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITACTIONWINDOW_H
#define UI_EDITACTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditActionWindowClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *EditActionWindowClass)
    {
        if (EditActionWindowClass->objectName().isEmpty())
            EditActionWindowClass->setObjectName("EditActionWindowClass");
        EditActionWindowClass->resize(600, 400);
        menuBar = new QMenuBar(EditActionWindowClass);
        menuBar->setObjectName("menuBar");
        EditActionWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(EditActionWindowClass);
        mainToolBar->setObjectName("mainToolBar");
        EditActionWindowClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(EditActionWindowClass);
        centralWidget->setObjectName("centralWidget");
        EditActionWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(EditActionWindowClass);
        statusBar->setObjectName("statusBar");
        EditActionWindowClass->setStatusBar(statusBar);

        retranslateUi(EditActionWindowClass);

        QMetaObject::connectSlotsByName(EditActionWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *EditActionWindowClass)
    {
        EditActionWindowClass->setWindowTitle(QCoreApplication::translate("EditActionWindowClass", "EditActionWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditActionWindowClass: public Ui_EditActionWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITACTIONWINDOW_H
