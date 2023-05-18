#pragma once
#include <QMainWindow>
#include <QtWidgets/QMainWindow>
#include <unordered_map>
#include <queue>
#include <vector>
#include <string>
#include <QPushButton>
#include <QStackedWidget>
#include <QWidget>
#include <QTableWidget>
#include <QTableWidgetItem>
#include "ui_EditUserWindow.h"
#include "User.h"
#include "EditActionWindow.h"


class EditUserWindow : public QMainWindow
{
    Q_OBJECT

public:
    int flag = 0;
    EditUserWindow(unordered_map<string, User>&, queue <User>&, queue <User>&, vector<User>&, string&, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QStackedWidget&, QTableWidget* viewSingleUser, QWidget* parent = nullptr);
    ~EditUserWindow();
private:
    Ui::EditUserWindowClass ui;
    EditActionWindow* editactionwindow;
    QPushButton* edit_ID_Button;
    QPushButton* edit_Name_Button;
    QPushButton* edit_Password_Button;
    QPushButton* edit_Age_Button;
    QPushButton* edit_Governorate_Button;
    QPushButton* edit_Gender_Button;
    QPushButton* edit_numberOfDoses_Button;
    QPushButton* backButton;
    QLabel* edit_ID_Label;
    QLabel* edit_Age_Label;
    QLabel* edit_Password_Label;
    QLabel* edit_Name_Label;
    QLabel* edit_Governorate_Label;
    QLabel* edit_Gender_Label;
    QLabel* edit_numberofDoses_Label;

private slots:
    void on_edit_ID_Button_Clicked(unordered_map<string, User>&, queue <User>&, queue <User>&, vector<User>&, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QStackedWidget&, string&, QTableWidget*);
    void on_edit_Name_Button_Clicked(unordered_map<string, User>&, queue <User>&, queue <User>&, vector<User>&, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QStackedWidget&, string&, QTableWidget*);
    void on_edit_Password_Button_Clicked(unordered_map<string, User>&, queue <User>&, queue <User>&, vector<User>&, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QStackedWidget&, string&, QTableWidget*);
    void on_edit_Age_Button_Clicked(unordered_map<string, User>&, queue <User>&, queue <User>&, vector<User>&, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QStackedWidget&, string&, QTableWidget*);
    void on_edit_Governorate_Button_Clicked(unordered_map<string, User>&, queue <User>&, queue <User>&, vector<User>&, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QStackedWidget&, string&, QTableWidget*);
    void on_edit_Gender_Button_Clicked(unordered_map<string, User>&, queue <User>&, queue <User>&, vector<User>&, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QStackedWidget&, string&, QTableWidget*);
    void on_numberOfDoses_Button_Clicked(unordered_map<string, User>&, queue <User>&, queue <User>&, vector<User>&, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QStackedWidget&, string&, QTableWidget*);
    void on_backButton_Clicked(unordered_map<string, User>&, vector<User>&, vector<User>&, vector<User>&, queue<User>&, queue<User>&, QStackedWidget& stackedWidget);
};