/********************************************************************************
** Form generated from reading UI file 'ShowStatistics.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWSTATISTICS_H
#define UI_SHOWSTATISTICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowStatisticsClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ShowStatisticsClass)
    {
        if (ShowStatisticsClass->objectName().isEmpty())
            ShowStatisticsClass->setObjectName("ShowStatisticsClass");
        ShowStatisticsClass->resize(600, 400);
        menuBar = new QMenuBar(ShowStatisticsClass);
        menuBar->setObjectName("menuBar");
        ShowStatisticsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ShowStatisticsClass);
        mainToolBar->setObjectName("mainToolBar");
        ShowStatisticsClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ShowStatisticsClass);
        centralWidget->setObjectName("centralWidget");
        ShowStatisticsClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ShowStatisticsClass);
        statusBar->setObjectName("statusBar");
        ShowStatisticsClass->setStatusBar(statusBar);

        retranslateUi(ShowStatisticsClass);

        QMetaObject::connectSlotsByName(ShowStatisticsClass);
    } // setupUi

    void retranslateUi(QMainWindow *ShowStatisticsClass)
    {
        ShowStatisticsClass->setWindowTitle(QCoreApplication::translate("ShowStatisticsClass", "ShowStatistics", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowStatisticsClass: public Ui_ShowStatisticsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWSTATISTICS_H
