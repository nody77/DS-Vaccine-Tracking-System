#pragma once
#include <QtWidgets/QMainWindow>
#include <string>
#include <QPushButton>
#include <QHash>
#include "ui_Login.h"
#include "User.h"
#include <queue>
#include "UserView.h"
#include <QStackedWidget>
#include <QWidget>

using namespace std;

class Login : public QMainWindow
{
    Q_OBJECT

public:
    string ID;
    string PASSWORD;
    QPushButton* backButton;
    Login(unordered_map<string, User>&, vector<User>&, vector<User>&, vector<User>&, queue<User>&, queue<User>&, QStackedWidget& stackedWidget, QWidget* parent = nullptr);
    ~Login();

private slots:
    void on_Login_Button_clicked(unordered_map<string, User>&, vector<User>&, vector<User>&, vector<User>&, queue<User>&, queue<User>&, QStackedWidget&);
    void on_backButton_Clicked(unordered_map<string, User>&, vector<User>&, vector<User>&, vector<User>&, queue<User>&, queue<User>&, QStackedWidget& stackedWidget);
private:
    Ui::LoginClass ui;
    QPushButton* Login_Button;
    UserView* userViewWindow;
};

