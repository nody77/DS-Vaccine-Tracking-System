/********************************************************************************
** Form generated from reading UI file 'ViewUserByAgeGUI.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWUSERBYAGEGUI_H
#define UI_VIEWUSERBYAGEGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewUserByAgeGUIClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ViewUserByAgeGUIClass)
    {
        if (ViewUserByAgeGUIClass->objectName().isEmpty())
            ViewUserByAgeGUIClass->setObjectName("ViewUserByAgeGUIClass");
        ViewUserByAgeGUIClass->resize(600, 400);
        menuBar = new QMenuBar(ViewUserByAgeGUIClass);
        menuBar->setObjectName("menuBar");
        ViewUserByAgeGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ViewUserByAgeGUIClass);
        mainToolBar->setObjectName("mainToolBar");
        ViewUserByAgeGUIClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ViewUserByAgeGUIClass);
        centralWidget->setObjectName("centralWidget");
        ViewUserByAgeGUIClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ViewUserByAgeGUIClass);
        statusBar->setObjectName("statusBar");
        ViewUserByAgeGUIClass->setStatusBar(statusBar);

        retranslateUi(ViewUserByAgeGUIClass);

        QMetaObject::connectSlotsByName(ViewUserByAgeGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *ViewUserByAgeGUIClass)
    {
        ViewUserByAgeGUIClass->setWindowTitle(QCoreApplication::translate("ViewUserByAgeGUIClass", "ViewUserByAgeGUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewUserByAgeGUIClass: public Ui_ViewUserByAgeGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWUSERBYAGEGUI_H
