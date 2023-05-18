#pragma once
#include "ui_DeleteUserGUI.h"
#include "User.h"
#include <QMainWindow>
#include <unordered_map>
#include <vector>
#include <queue>
#include <string>
#include <queue>
#include <vector>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QStackedWidget>

using namespace std;

class DeleteUserGUI : public QMainWindow
{
    Q_OBJECT

private slots:
    void ondeleteOneUserButtonClicked(unordered_map<string, User>& userData, queue<User>& waitingList, queue<User>& firstDoseList, vector<User>& secondDoseList, QStackedWidget& stackedWidget);
    void ondeleteAllUsersButtonClicked(unordered_map<string, User>& userData, queue<User>& waitingList, queue<User>& firstDoseList, vector<User>& secondDoseList, QStackedWidget& stackedWidget);
    void onBackButtonclicked(vector<User>& secondDoseList, QStackedWidget& stackedWidget);


public:
    DeleteUserGUI(unordered_map<string, User>& userData, queue<User>& waitingList, queue<User>& firstDoseList, vector<User>& secondDoseList, QStackedWidget& stackedWidget, QWidget* parent = nullptr);
    ~DeleteUserGUI();

private:
    Ui::DeleteUserGUIClass ui;
    QPushButton* deleteOneUserButton;
    QPushButton* deleteAllUsersButton;
    QLabel* deleteIDLabel;
    QLineEdit* deleteIDlineEdit;
    QPushButton* BackButton;

};
