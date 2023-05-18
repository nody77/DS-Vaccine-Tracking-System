/********************************************************************************
** Form generated from reading UI file 'viewWaitingList.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWWAITINGLIST_H
#define UI_VIEWWAITINGLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewWaitingListClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *viewWaitingListClass)
    {
        if (viewWaitingListClass->objectName().isEmpty())
            viewWaitingListClass->setObjectName("viewWaitingListClass");
        viewWaitingListClass->resize(600, 400);
        menuBar = new QMenuBar(viewWaitingListClass);
        menuBar->setObjectName("menuBar");
        viewWaitingListClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(viewWaitingListClass);
        mainToolBar->setObjectName("mainToolBar");
        viewWaitingListClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(viewWaitingListClass);
        centralWidget->setObjectName("centralWidget");
        viewWaitingListClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(viewWaitingListClass);
        statusBar->setObjectName("statusBar");
        viewWaitingListClass->setStatusBar(statusBar);

        retranslateUi(viewWaitingListClass);

        QMetaObject::connectSlotsByName(viewWaitingListClass);
    } // setupUi

    void retranslateUi(QMainWindow *viewWaitingListClass)
    {
        viewWaitingListClass->setWindowTitle(QCoreApplication::translate("viewWaitingListClass", "viewWaitingList", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewWaitingListClass: public Ui_viewWaitingListClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWWAITINGLIST_H
