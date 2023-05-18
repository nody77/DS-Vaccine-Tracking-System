#pragma once
#include <QMainWindow>
#include <unordered_map>
#include <string>
#include <QPushButton>
#include <QTableWidget>
#include <QStackedWidget>
#include "ui_ViewUserByAgeGUI.h"
#include "User.h"

using namespace std;


class ViewUserByAgeGUI : public QMainWindow
{
	Q_OBJECT

public:
	ViewUserByAgeGUI(unordered_map<string, User>& userData, QStackedWidget& stackedWidget, QWidget* parent = nullptr);
	~ViewUserByAgeGUI();
private slots:
	void onViewAscendingButtonClicked(unordered_map<string, User>& userData, QStackedWidget& stackedWidget);
	void onViewDescendingButtonClicked(unordered_map<string, User>& userData, QStackedWidget& stackedWidget);
	void onBackButtonclicked(unordered_map<string, User>& userData, QStackedWidget& stackedWidget);
private:
	Ui::ViewUserByAgeGUIClass ui;
	QPushButton* ViewAscendingButton;
	QPushButton* ViewDescendingButton;
	QTableWidget* viewUsersAscTable;
	QTableWidget* viewUsersDescTable;
	QPushButton* BackButton;




};

