/********************************************************************************
** Form generated from reading UI file 'viewUserData.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWUSERDATA_H
#define UI_VIEWUSERDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewUserDataClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *viewUserDataClass)
    {
        if (viewUserDataClass->objectName().isEmpty())
            viewUserDataClass->setObjectName("viewUserDataClass");
        viewUserDataClass->resize(600, 400);
        menuBar = new QMenuBar(viewUserDataClass);
        menuBar->setObjectName("menuBar");
        viewUserDataClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(viewUserDataClass);
        mainToolBar->setObjectName("mainToolBar");
        viewUserDataClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(viewUserDataClass);
        centralWidget->setObjectName("centralWidget");
        viewUserDataClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(viewUserDataClass);
        statusBar->setObjectName("statusBar");
        viewUserDataClass->setStatusBar(statusBar);

        retranslateUi(viewUserDataClass);

        QMetaObject::connectSlotsByName(viewUserDataClass);
    } // setupUi

    void retranslateUi(QMainWindow *viewUserDataClass)
    {
        viewUserDataClass->setWindowTitle(QCoreApplication::translate("viewUserDataClass", "viewUserData", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewUserDataClass: public Ui_viewUserDataClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWUSERDATA_H
