/********************************************************************************
** Form generated from reading UI file 'SignUp.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUpClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_6;
    QSpinBox *dosageBox;
    QSpinBox *ageBox;
    QLabel *label_2;
    QComboBox *genderCombo;
    QLineEdit *idField;
    QLineEdit *nameField;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_3;
    QComboBox *govCombo;
    QLabel *label_7;
    QLineEdit *passField;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SignUpClass)
    {
        if (SignUpClass->objectName().isEmpty())
            SignUpClass->setObjectName("SignUpClass");
        SignUpClass->resize(1150, 669);
        centralWidget = new QWidget(SignUpClass);
        centralWidget->setObjectName("centralWidget");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 70, 111, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(11, 45, 57);\n"
"font: 12pt \"Segoe UI\";"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 310, 111, 31));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(11, 45, 57);\n"
"font: 12pt \"Segoe UI\";"));
        dosageBox = new QSpinBox(centralWidget);
        dosageBox->setObjectName("dosageBox");
        dosageBox->setGeometry(QRect(590, 250, 131, 31));
        dosageBox->setMaximum(2);
        ageBox = new QSpinBox(centralWidget);
        ageBox->setObjectName("ageBox");
        ageBox->setGeometry(QRect(130, 310, 131, 31));
        ageBox->setMinimum(5);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 130, 111, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(11, 45, 57);\n"
"font: 12pt \"Segoe UI\";"));
        genderCombo = new QComboBox(centralWidget);
        genderCombo->addItem(QString());
        genderCombo->addItem(QString());
        genderCombo->setObjectName("genderCombo");
        genderCombo->setGeometry(QRect(130, 250, 141, 31));
        idField = new QLineEdit(centralWidget);
        idField->setObjectName("idField");
        idField->setGeometry(QRect(110, 130, 421, 31));
        nameField = new QLineEdit(centralWidget);
        nameField->setObjectName("nameField");
        nameField->setGeometry(QRect(110, 70, 421, 31));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 10, 871, 51));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(11, 45, 57);\n"
"font: 16pt \"Segoe UI\";"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(330, 310, 111, 31));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(11, 45, 57);\n"
"font: 12pt \"Segoe UI\";"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 250, 111, 31));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(11, 45, 57);\n"
"font: 12pt \"Segoe UI\";"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 190, 111, 31));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(11, 45, 57);\n"
"font: 12pt \"Segoe UI\";"));
        govCombo = new QComboBox(centralWidget);
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->addItem(QString());
        govCombo->setObjectName("govCombo");
        govCombo->setGeometry(QRect(450, 310, 141, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(330, 250, 301, 31));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(11, 45, 57);\n"
"font: 12pt \"Segoe UI\";"));
        passField = new QLineEdit(centralWidget);
        passField->setObjectName("passField");
        passField->setGeometry(QRect(110, 190, 421, 31));
        SignUpClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SignUpClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1150, 22));
        SignUpClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SignUpClass);
        mainToolBar->setObjectName("mainToolBar");
        SignUpClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SignUpClass);
        statusBar->setObjectName("statusBar");
        SignUpClass->setStatusBar(statusBar);

        retranslateUi(SignUpClass);

        QMetaObject::connectSlotsByName(SignUpClass);
    } // setupUi

    void retranslateUi(QMainWindow *SignUpClass)
    {
        SignUpClass->setWindowTitle(QCoreApplication::translate("SignUpClass", "SignUp", nullptr));
        label->setText(QCoreApplication::translate("SignUpClass", "Full Name :", nullptr));
        label_6->setText(QCoreApplication::translate("SignUpClass", "Age :", nullptr));
        label_2->setText(QCoreApplication::translate("SignUpClass", "National ID :", nullptr));
        genderCombo->setItemText(0, QCoreApplication::translate("SignUpClass", "Male", nullptr));
        genderCombo->setItemText(1, QCoreApplication::translate("SignUpClass", "Female", nullptr));

        genderCombo->setCurrentText(QCoreApplication::translate("SignUpClass", "Male", nullptr));
        genderCombo->setPlaceholderText(QString());
        label_5->setText(QCoreApplication::translate("SignUpClass", "Please fill in the following data to create your account :", nullptr));
        label_8->setText(QCoreApplication::translate("SignUpClass", "Governorate :", nullptr));
        label_4->setText(QCoreApplication::translate("SignUpClass", "Gender :", nullptr));
        label_3->setText(QCoreApplication::translate("SignUpClass", "Password :", nullptr));
        govCombo->setItemText(0, QCoreApplication::translate("SignUpClass", "Alexandria", nullptr));
        govCombo->setItemText(1, QCoreApplication::translate("SignUpClass", "Aswan", nullptr));
        govCombo->setItemText(2, QCoreApplication::translate("SignUpClass", "Asyut", nullptr));
        govCombo->setItemText(3, QCoreApplication::translate("SignUpClass", "Beheira", nullptr));
        govCombo->setItemText(4, QCoreApplication::translate("SignUpClass", "Beni Suef", nullptr));
        govCombo->setItemText(5, QCoreApplication::translate("SignUpClass", "Cairo", nullptr));
        govCombo->setItemText(6, QCoreApplication::translate("SignUpClass", "Dakahlia", nullptr));
        govCombo->setItemText(7, QCoreApplication::translate("SignUpClass", "Damietta", nullptr));
        govCombo->setItemText(8, QCoreApplication::translate("SignUpClass", "Fayoum", nullptr));
        govCombo->setItemText(9, QCoreApplication::translate("SignUpClass", "Gharbia", nullptr));
        govCombo->setItemText(10, QCoreApplication::translate("SignUpClass", "Giza", nullptr));
        govCombo->setItemText(11, QCoreApplication::translate("SignUpClass", "Ismailia", nullptr));
        govCombo->setItemText(12, QCoreApplication::translate("SignUpClass", "Kafr El Sheikh", nullptr));
        govCombo->setItemText(13, QCoreApplication::translate("SignUpClass", "Luxor", nullptr));
        govCombo->setItemText(14, QCoreApplication::translate("SignUpClass", "Matrouh", nullptr));
        govCombo->setItemText(15, QCoreApplication::translate("SignUpClass", "Minya", nullptr));
        govCombo->setItemText(16, QCoreApplication::translate("SignUpClass", "Monufia", nullptr));
        govCombo->setItemText(17, QCoreApplication::translate("SignUpClass", "New Valley", nullptr));
        govCombo->setItemText(18, QCoreApplication::translate("SignUpClass", "North Sinai", nullptr));
        govCombo->setItemText(19, QCoreApplication::translate("SignUpClass", "Port Said", nullptr));
        govCombo->setItemText(20, QCoreApplication::translate("SignUpClass", "Qalyubia", nullptr));
        govCombo->setItemText(21, QCoreApplication::translate("SignUpClass", "Qena", nullptr));
        govCombo->setItemText(22, QCoreApplication::translate("SignUpClass", "Red Sea", nullptr));
        govCombo->setItemText(23, QCoreApplication::translate("SignUpClass", "Sharqia", nullptr));
        govCombo->setItemText(24, QCoreApplication::translate("SignUpClass", "Sohag", nullptr));
        govCombo->setItemText(25, QCoreApplication::translate("SignUpClass", "South Sinai", nullptr));
        govCombo->setItemText(26, QCoreApplication::translate("SignUpClass", "Suez", nullptr));

        govCombo->setCurrentText(QCoreApplication::translate("SignUpClass", "Alexandria", nullptr));
        govCombo->setPlaceholderText(QString());
        label_7->setText(QCoreApplication::translate("SignUpClass", "Number of doses already taken :", nullptr));
        passField->setInputMask(QString());
    } // retranslateUi

};

namespace Ui {
    class SignUpClass: public Ui_SignUpClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
