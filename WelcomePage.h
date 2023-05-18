#pragma once
#include "AdminLoginPage.h"
#include "ui_WelcomePage.h"
#include "ui_SignUp.h"
#include "User.h"
#include "UserView.h"
#include "Login.h"
#include "SignUp.h"
#include <fstream>
#include <QMainWindow>
#include <QPushButton>
#include <unordered_map>
#include <queue>
#include <QtWidgets/QMainWindow>
#include <QLineEdit>
#include <QValidator>
#include <QPushButton>
#include <QMessageBox>
#include <QLabel>
#include <string>
#include <QString>
#include <unordered_map>
#include <queue>
#include <QDate>
#include <QStackedWidget>
#include <QWidget>

class WelcomePage : public QMainWindow
{
	Q_OBJECT

public:
	WelcomePage(unordered_map<string, User>&, vector<User>&, vector<User>&, vector<User>&, queue<User>&, queue<User>&, QStackedWidget& stackedWidget, QWidget* parent = nullptr);
	~WelcomePage();
	QLabel* welcomeMsg;
	QPushButton* loginButton;
	QPushButton* signUpButton;
	QPushButton* adminLoginButton;
	QPushButton* exitButton;
	void static openLoginPage(unordered_map<string, User>&, vector<User>&, vector<User>&, vector<User>&, queue<User>&, queue<User>&, QStackedWidget&);
	void static openSignUpPage(unordered_map<string, User>&, vector<User>&, vector<User>&, vector<User>&, queue<User>&, queue<User>&, QStackedWidget&);
	void static openAdminLogin(unordered_map<string, User>&, vector<User>&, queue<User>&, queue<User>&, QStackedWidget&);
	void  savetofile(unordered_map<string, User>& userdata, queue <User>& first_dose_waiting_list, queue <User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, vector<User>& wait_for_first_confirm, vector<User>& wait_for_second_confirm);
	void  on_exit_Button(unordered_map<string, User>& userdata, queue <User>& first_dose_waiting_list, queue <User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, vector<User>& wait_for_first_confirm, vector<User>& wait_for_second_confirm, QStackedWidget&);
private:
	Ui::WelcomePageClass ui;
	//QStackedWidget& stackedWidget;
};
