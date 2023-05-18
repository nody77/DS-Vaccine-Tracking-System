#pragma once
#include "ui_viewWaitingList.h"
#include "User.h"
#include "Admin.h"
#include <QMainWindow>
#include <QPushButton>
#include <QTextEdit>
#include <QLabel>
#include <QDate>
#include <QTableWidget>
#include <QFont>
#include <QStackedWidget>
#include <unordered_map>
#include <queue>

class viewWaitingList : public QMainWindow
{
	Q_OBJECT

public:
	viewWaitingList(queue<User>& waitingList, QStackedWidget& stackedWidget, QWidget* parent = nullptr);
	~viewWaitingList();

private slots:
	inline void tableDisplay(queue<User>& waitingList, QStackedWidget& stackedWidget);
	void onbackButtonclicked(queue<User>& waitingList, QStackedWidget& stackedWidget);

private:
	Ui::viewWaitingListClass ui;
	Admin a;
	QPushButton* button;
	queue<User> firstDose;
	QFont font;
	QPushButton* backButton;
};
