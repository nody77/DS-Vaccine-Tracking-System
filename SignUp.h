#pragma once
#include <QtWidgets/QMainWindow>
#include <QLineEdit>
#include <QMainWindow>
#include <QValidator>
#include <QPushButton>
#include <QMessageBox>
#include <string>
#include <QString>
#include <unordered_map>
#include <queue>
#include <QDate>
#include <QStackedWidget>
#include <QWidget>
#include "ui_SignUp.h"
#include "User.h"
#include "UserView.h"


class SignUp : public QMainWindow
{
    Q_OBJECT
    QLineEdit* inputs[2];
    string FULLNAME;
    string ID;
    string PASSWORD;
    string GENDER;
    bool MALE;
    bool FEMALE;
    int AGE;
    string GOVERNORATE;
    bool isVACCINATED;
    int DOSES;
    QDate APPOINTMENT;

public:
    SignUp(unordered_map<string, User>&, vector<User>&, vector<User>&, vector<User>&, queue<User>&, queue<User>&, QStackedWidget& stackedWidget, QWidget* parent = nullptr);
    ~SignUp();
    static bool isIDValid(QLineEdit* inputField);
    bool isInputFilled(QLineEdit* inputs[], int numInputs);
    bool isIdDuplicate(unordered_map <string, User>& userMap, string);
    QPushButton* backButton;

public slots:
    void on_submitButton_Clicked(unordered_map<string, User>&, vector<User>&, vector<User>&, vector<User>&, queue<User>&, queue<User>&, QStackedWidget&);
    void on_backButton_Clicked(unordered_map<string, User>&, vector<User>&, vector<User>&, vector<User>&, queue<User>&, queue<User>&, QStackedWidget& stackedWidget);

private:
    Ui::SignUpClass ui;
    UserView* userViewWindow;
};
