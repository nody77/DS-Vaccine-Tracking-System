#pragma once
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QStackedWidget>
#include <qtablewidget.h>
#include <string>
#include <unordered_map>
#include "ui_viewUserData.h"
#include "User.h"

class viewUserData : public QMainWindow
{
    Q_OBJECT

public:
    viewUserData(unordered_map<string, User>& userData, QStackedWidget& stackedWidget, QWidget* parent = nullptr);
    ~viewUserData();

private slots:
    void onviewOneUserButtonClicked(unordered_map<string, User>& userData, QStackedWidget& stackedWidget);
    void onviewAllUsersButtonClicked(unordered_map<string, User>& userData, QStackedWidget& stackedWidget);
    void onBackButtonclicked(unordered_map<string, User>& userData, QStackedWidget& stackedWidget);

private:
    Ui::viewUserDataClass ui;
    QPushButton* viewOneUserButton;
    QPushButton* viewAllUsersButton;
    QLabel* viewIDLabel;
    QLineEdit* viewIDlineEdit;
    QTableWidget* viewUserTable;
    QTableWidget* viewAllUsersTable;
    QPushButton* BackButton;
};
