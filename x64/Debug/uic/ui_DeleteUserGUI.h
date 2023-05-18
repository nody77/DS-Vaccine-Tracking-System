/********************************************************************************
** Form generated from reading UI file 'DeleteUserGUI.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEUSERGUI_H
#define UI_DELETEUSERGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteUserGUIClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DeleteUserGUIClass)
    {
        if (DeleteUserGUIClass->objectName().isEmpty())
            DeleteUserGUIClass->setObjectName("DeleteUserGUIClass");
        DeleteUserGUIClass->resize(600, 400);
        menuBar = new QMenuBar(DeleteUserGUIClass);
        menuBar->setObjectName("menuBar");
        DeleteUserGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DeleteUserGUIClass);
        mainToolBar->setObjectName("mainToolBar");
        DeleteUserGUIClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(DeleteUserGUIClass);
        centralWidget->setObjectName("centralWidget");
        DeleteUserGUIClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DeleteUserGUIClass);
        statusBar->setObjectName("statusBar");
        DeleteUserGUIClass->setStatusBar(statusBar);

        retranslateUi(DeleteUserGUIClass);

        QMetaObject::connectSlotsByName(DeleteUserGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *DeleteUserGUIClass)
    {
        DeleteUserGUIClass->setWindowTitle(QCoreApplication::translate("DeleteUserGUIClass", "DeleteUserGUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteUserGUIClass: public Ui_DeleteUserGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEUSERGUI_H
