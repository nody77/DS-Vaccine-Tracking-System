#pragma once
#include <QStackedWidget>
#include <QtWidgets/QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <string>
#include <unordered_map>
#include <vector>
#include <queue>
#include "ui_AdminLoginPage.h"
#include "User.h"
#include "Admin.h"

class AdminLoginPage : public QMainWindow
{
    Q_OBJECT

public:
    AdminLoginPage(unordered_map<string, User>& userMap, queue<User>& waitingList, queue<User>& firstDoseList, vector<User>& secondDoseList, QStackedWidget& stackedWidget, QWidget* parent = nullptr);
    ~AdminLoginPage();
private slots:

    void onLoginButtonClicked(unordered_map<string, User>& userMap, queue<User>& waitingList, queue<User>& firstDoseList, vector<User>& secondDoseList, QStackedWidget& stackedWidget);
    void on_backButton_Clicked(unordered_map<string, User>& userdata, vector<User>& fullyVaccinated, queue<User>& firstDoseQueue, queue<User>& seconDoseQueue, QStackedWidget& stackedWidget);

private:
    Ui::AdminLoginPageClass ui;
    QLabel* AdminLoginPageLabel;

    QLabel* AdminIDLabel;
    QLabel* AdminPasswordLabel;


    QLineEdit* AdminIDLineEdit;
    QLineEdit* AdminPasswordLineEdit;

    QPushButton* AdminLoginButton;
    QPushButton* BackButton;
};
