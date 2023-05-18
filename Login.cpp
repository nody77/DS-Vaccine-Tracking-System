#pragma once
#include "Login.h"
#include "User.h"
#include <qstring.h>
#include <string>
#include <unordered_map>
#include <QMessageBox>
#include <QPushButton>
#include <functional>

using namespace std;

Login::Login(unordered_map<string, User>& userdata, vector<User>& fullyVaccinated, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, queue<User>& firstDoseQueue, queue<User>& seconDoseQueue, QStackedWidget& stackedWidget, QWidget* parent) : QMainWindow(parent)
{
    ui.setupUi(this);
    setFixedSize(1000, 631);
    setStyleSheet("background-color: #CBE5FA;");

    Login_Button = new QPushButton("Login", this);
    Login_Button->setGeometry(600, 350, 161, 41);
    Login_Button->setStyleSheet("font:bold 25px;");

    ui.Password_TextBox->setEchoMode(QLineEdit::EchoMode::Password);

    backButton = new QPushButton("Back", this);
    backButton->move(420, 550);
    backButton->setFixedSize(100, 50);

    connect(Login_Button, &QPushButton::clicked, [this, &stackedWidget, &userdata, &fullyVaccinated, &waitForFirstConfirm, &waitForSecondConfirm, &firstDoseQueue, &seconDoseQueue]()
        {
            // use lambda function to capture value
            on_Login_Button_clicked(ref(userdata), ref(fullyVaccinated), ref(waitForFirstConfirm), ref(waitForSecondConfirm), ref(firstDoseQueue), ref(seconDoseQueue), ref(stackedWidget));
            // call slot function with value as argument
        });

    connect(backButton, &QPushButton::clicked, [this, &stackedWidget, &userdata, &fullyVaccinated, &waitForFirstConfirm, &waitForSecondConfirm, &firstDoseQueue, &seconDoseQueue]()
        {
            // use lambda function to capture value
            on_backButton_Clicked(ref(userdata), ref(fullyVaccinated), ref(waitForFirstConfirm), ref(waitForSecondConfirm), ref(firstDoseQueue), ref(seconDoseQueue), ref(stackedWidget));
            // call slot function with value as argument
        });

}

Login::~Login()
{

}

void Login::on_backButton_Clicked(unordered_map<string, User>& userdata, vector<User>& fullyVaccinated, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, queue<User>& firstDoseQueue, queue<User>& seconDoseQueue, QStackedWidget& stackedWidget)
{
    hide();
    stackedWidget.setCurrentIndex(0);
    stackedWidget.show();
}

void Login::on_Login_Button_clicked(unordered_map<string, User>& userdata, vector<User>& fullyVaccinated, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, queue<User>& firstDoseQueue, queue<User>& seconDoseQueue, QStackedWidget& stackedWidget)
{
    QString id = ui.ID_TextBox->text();
    QString password = ui.Password_TextBox->text();
    ID = id.toStdString();
    PASSWORD = password.toStdString();
    int flag = User::UserLoginPage(userdata, ID, PASSWORD);
    bool getConfirmation;
    if (id != "" && password != "")
    {
        if (flag == 0)
        {
            QMessageBox::warning(this, "Login", "The National ID in incorrect please try again.");
        }
        else if (flag == 1)
        {
            QMessageBox::information(this, "Login", "Correct");  //
            User user = userdata.at(ID);
            getConfirmation = User::checkAppointmentDate(user, waitForFirstConfirm, waitForSecondConfirm, firstDoseQueue, seconDoseQueue);
            userViewWindow = new UserView(userdata, fullyVaccinated, waitForFirstConfirm, waitForSecondConfirm, firstDoseQueue, seconDoseQueue, stackedWidget, user, getConfirmation, ID);
            stackedWidget.addWidget(userViewWindow);  // index 1
            this->hide();
            stackedWidget.setCurrentWidget(userViewWindow);
            stackedWidget.show();
        }
        else if (flag == 2)
        {
            QMessageBox::warning(this, "Login", "The Password in incorrect please try again.");

        }
        else if (flag == 3)
        {
            QMessageBox::warning(this, "Login", "This National ID does not exsist please sign up.");
        }
    }
    else
    {
        QMessageBox::warning(this, "Login", "Please enter the empty fields.");
    }

}
