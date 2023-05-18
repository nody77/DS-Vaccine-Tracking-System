/********************************************************************************
** Form generated from reading UI file 'ViewUserByDose.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWUSERBYDOSE_H
#define UI_VIEWUSERBYDOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewUserByDoseClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ViewUserByDoseClass)
    {
        if (ViewUserByDoseClass->objectName().isEmpty())
            ViewUserByDoseClass->setObjectName("ViewUserByDoseClass");
        ViewUserByDoseClass->resize(600, 400);
        menuBar = new QMenuBar(ViewUserByDoseClass);
        menuBar->setObjectName("menuBar");
        ViewUserByDoseClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ViewUserByDoseClass);
        mainToolBar->setObjectName("mainToolBar");
        ViewUserByDoseClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ViewUserByDoseClass);
        centralWidget->setObjectName("centralWidget");
        ViewUserByDoseClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ViewUserByDoseClass);
        statusBar->setObjectName("statusBar");
        ViewUserByDoseClass->setStatusBar(statusBar);

        retranslateUi(ViewUserByDoseClass);

        QMetaObject::connectSlotsByName(ViewUserByDoseClass);
    } // setupUi

    void retranslateUi(QMainWindow *ViewUserByDoseClass)
    {
        ViewUserByDoseClass->setWindowTitle(QCoreApplication::translate("ViewUserByDoseClass", "ViewUserByDose", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewUserByDoseClass: public Ui_ViewUserByDoseClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWUSERBYDOSE_H
