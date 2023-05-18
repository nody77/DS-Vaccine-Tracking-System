#pragma once
#include <QMainWindow>
#include <QtWidgets/QMainWindow>
#include <QObject>
#include <unordered_map>
#include <queue>
#include <vector>
#include <string>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QSpinBox>
#include <QComboBox>
#include <QStackedWidget>
#include <QWidget>
#include <QTableWidget>
#include <QTableWidgetItem>
#include "ui_EditActionWindow.h"
#include "User.h"

class EditActionWindow : public QMainWindow
{
	Q_OBJECT

public:

	EditActionWindow(unordered_map<string, User>&, queue <User>&, queue <User>&, vector<User>&, string&, int, QStackedWidget& stackedWidget, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QTableWidget* viewSingleUser, QWidget* parent = nullptr);
	~EditActionWindow();

private:
	Ui::EditActionWindowClass ui;
	QPushButton* submit_Button;
	QPushButton* backButton;
	QLabel* label;
	QSpinBox* age_spinbox;
	QComboBox* doses_Governorate_combobox;
	QLineEdit* textbox;
	
private slots:
	void on_submit_button_clicked(unordered_map<string, User>&, queue<User>&, queue<User>&, vector<User>&, QStackedWidget&, int, string&, QTableWidget* viewSingleUser);
	void on_backButton_Clicked(unordered_map<string, User>&, queue <User>&, queue <User>&, vector<User>&, string, vector<User>&, vector<User>&, QStackedWidget&);
};
