#include "AdminControls.h"
#include <functional>
#include<QMessageBox>
#include"Admin.h"
#include<String>
#include<Qstring>
#include"ViewUserByDose.h"
#include"viewWaitingList.h"
#include"ViewUserByAgeGUI.h"
#include"DeleteUserGUI.h"
#include"viewUserData.h"
#include"ShowStatistics.h"

AdminControls::AdminControls(unordered_map<string, User>& userMap, queue<User>& waitingList, queue<User>& firstDoseList, vector<User>& secondDoseList, QStackedWidget& stackedWidget, QWidget* parent): QMainWindow(parent)
{
	ui.setupUi(this);
	ViewUserButton = new QPushButton("View User Data", this);
	ViewUserButton->move(200, 150);
	ViewUserButton->setStyleSheet("color:royalblue;font:bold 17px;");
	ViewUserButton->setFixedWidth(200);
	ViewUserButton->setFixedHeight(50);


	deleteUserButton = new QPushButton("delete User", this);
	deleteUserButton->move(600, 150);
	deleteUserButton->setStyleSheet("color:royalblue;font:bold 17px;");
	deleteUserButton->setFixedWidth(200);
	deleteUserButton->setFixedHeight(50);

	WaitingListButton = new QPushButton("Waiting List", this);
	WaitingListButton->move(200, 300);
	WaitingListButton->setStyleSheet("color:royalblue;font:bold 17px;");
	WaitingListButton->setFixedWidth(200);
	WaitingListButton->setFixedHeight(50);

	ViewWhoRecivedByDoseButton = new QPushButton("View By Doses", this);
	ViewWhoRecivedByDoseButton->move(600, 300);
	ViewWhoRecivedByDoseButton->setStyleSheet("color:royalblue;font:bold 17px;");
	ViewWhoRecivedByDoseButton->setFixedWidth(200);
	ViewWhoRecivedByDoseButton->setFixedHeight(50);

	showStatisticsButton = new QPushButton("show Statistics", this);
	showStatisticsButton->move(200, 450);
	showStatisticsButton->setStyleSheet("color:royalblue;font:bold 17px;");
	showStatisticsButton->setFixedWidth(200);
	showStatisticsButton->setFixedHeight(50);

	ViewByAgeButton = new QPushButton("View By Age ", this);
	ViewByAgeButton->move(600, 450);
	ViewByAgeButton->setStyleSheet("color:royalblue;font:bold 17px;");
	ViewByAgeButton->setFixedWidth(200);
	ViewByAgeButton->setFixedHeight(50);


	LogOut = new QPushButton("Logout", this);
	LogOut->move(450, 550);
	LogOut->setStyleSheet("color:royalblue;font:bold 17px;");
	connect(ViewUserButton, &QPushButton::clicked, [this, &userMap, &stackedWidget]()
		{

			onViewUserButtonClicked(ref(userMap), ref(stackedWidget));

		});


	connect(deleteUserButton, &QPushButton::clicked, [this, &userMap, &waitingList, &firstDoseList, &secondDoseList, &stackedWidget]()
		{

			onDeleteUserButtonButtonClicked(ref(userMap), ref(waitingList), ref(firstDoseList), ref(secondDoseList), ref(stackedWidget));

		});
	connect(ViewWhoRecivedByDoseButton, &QPushButton::clicked, [this, &userMap, &stackedWidget]()
		{

			onViewWhoRecivedByDoseButtonClicked(ref(userMap), ref(stackedWidget));

		});
	connect(WaitingListButton, &QPushButton::clicked, [this, &waitingList, &stackedWidget]()
		{

			onWaitingListButtonButtonClicked(ref(waitingList), ref(stackedWidget));

		});


	connect(showStatisticsButton, &QPushButton::clicked, [this, &userMap, &stackedWidget]()
		{

			onshowStatisticsButtonClicked(ref(userMap), ref(stackedWidget));

		});
	connect(ViewByAgeButton, &QPushButton::clicked, [this, &userMap, &stackedWidget]()
		{

			onViewByAgeButtonClicked(ref(userMap), ref(stackedWidget));

		});
	connect(LogOut, &QPushButton::clicked, [this, &stackedWidget, &userMap, &secondDoseList, &waitingList, &firstDoseList]()
		{
			// use lambda function to capture value
			onlogoutButtonClicked(ref(userMap), ref(waitingList), ref(firstDoseList), ref(secondDoseList), ref(stackedWidget));
			// call slot function with value as argument
		});

}

AdminControls::~AdminControls()
{}

void AdminControls::onViewUserButtonClicked(unordered_map<string, User>& userMap, QStackedWidget& stackedWidget)
{
	stackedWidget.hide();

	viewUserData* viewUser = new viewUserData(userMap, stackedWidget);
	viewUser->resize(1000, 631);
	viewUser->show();

}

void AdminControls::onDeleteUserButtonButtonClicked(unordered_map<string, User>& userMap, queue<User>& waitingList, queue<User>& firstDoseList, vector<User>& secondDoseList, QStackedWidget& stackedWidget)
{
	stackedWidget.hide();
	DeleteUserGUI* DeleteUser = new DeleteUserGUI(userMap, waitingList, firstDoseList, secondDoseList, stackedWidget);
	DeleteUser->resize(1000, 631);
	DeleteUser->show();
}

void AdminControls::onWaitingListButtonButtonClicked(queue<User>& waitingList, QStackedWidget& stackedWidget)
{
	stackedWidget.hide();
	viewWaitingList* viewWaitingListwindow = new viewWaitingList(waitingList, stackedWidget);
	viewWaitingListwindow->show();
}

void AdminControls::onshowStatisticsButtonClicked(unordered_map<string, User>& userMap, QStackedWidget& stackedWidget)
{
	stackedWidget.hide();

	ShowStatistics* ShowStatisticsWindow = new ShowStatistics(userMap, stackedWidget);
	ShowStatisticsWindow->resize(1000, 631);
	ShowStatisticsWindow->show();

}

void AdminControls::onViewWhoRecivedByDoseButtonClicked(unordered_map<string, User>& userMap, QStackedWidget& stackedWidget)
{
	stackedWidget.hide();
	ViewUserByDose* ViewWhoRecivedByDoseWindow = new ViewUserByDose(userMap, stackedWidget);

	ViewWhoRecivedByDoseWindow->resize(1000, 631);
	ViewWhoRecivedByDoseWindow->show();
}

void AdminControls::onViewByAgeButtonClicked(unordered_map<string, User>& userMap, QStackedWidget& stackedWidget)
{
	stackedWidget.hide();

	ViewUserByAgeGUI* ViewUserByAge = new ViewUserByAgeGUI(userMap, stackedWidget);
	ViewUserByAge->resize(1000, 631);
	ViewUserByAge->show();
}

void AdminControls::onlogoutButtonClicked(unordered_map<string, User>& userMap, queue<User>& waitingList, queue<User>& firstDoseList, vector<User>& secondDoseList, QStackedWidget& stackedWidget)
{
	close();
	stackedWidget.removeWidget(this);
	stackedWidget.setCurrentIndex(0);
	stackedWidget.show();
}
