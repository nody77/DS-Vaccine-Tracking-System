#pragma once
#include "ui_UserView.h"
#include "User.h"
#include "EditUserWindow.h"
#include <QMainWindow>
#include <QtWidgets/QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>
#include <QPushButton>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QFont>
#include <QStackedWidget>
#include <QWidget>
#include <unordered_map>
#include <string>


using namespace std;

class UserView : public QMainWindow
{
    Q_OBJECT

public:
    UserView(unordered_map<string, User>&, vector<User>&, vector<User>&, vector<User>&, queue<User>&, queue<User>&, QStackedWidget&, User, bool, string&, QWidget* parent = nullptr);
    ~UserView();
    QTableWidget* viewSingleUser;
    QTableWidgetItem* item;

private:
    Ui::UserViewClass ui;
    QPushButton* showUsers;
    QLabel* deleteMSG;
    QLabel* editMSG;
    QPushButton* deleteUserAccount;
    QPushButton* editUserInfo;
    QPushButton* logOut;
    QFont fnt;
    EditUserWindow* edituserwindow;

private slots:
    void onDeleteButtonPressed(unordered_map <string, User>&, queue<User>&, queue<User>&, vector<User>&, vector<User>& , vector<User>& , QStackedWidget& , User);
    void onLogOutButtonPressed(unordered_map<string, User>&, vector<User>&, vector<User>&, vector<User>&, queue<User>&, queue<User>&, QStackedWidget&);
    void on_Edit_Button_clicked(unordered_map<string, User>& userMap, vector<User>& fullyVaccinated, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, queue<User>& firstDoseQueue, queue<User>& seconDoseQueue, QStackedWidget& stackedWidget);

};
