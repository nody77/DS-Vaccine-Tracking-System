#include "EditUserWindow.h"
#include <functional>

using namespace std;

EditUserWindow::EditUserWindow(unordered_map<string, User>& userdata, queue <User>& first_dose_waiting_list, queue <User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, string& id, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QStackedWidget& stackedWidget, QTableWidget* viewSingleUser, QWidget* parent) : QMainWindow(parent)
{
	ui.setupUi(this);
	setFixedSize(1000, 631);
	setStyleSheet("background-color: #CBE5FA;");

	edit_Age_Button = new QPushButton("Edit Age", this);
	edit_Gender_Button = new QPushButton("Edit Gender", this);
	edit_Governorate_Button = new QPushButton("Edit Governorate", this);
	edit_ID_Button = new QPushButton("Edit National Id", this);
	edit_Name_Button = new QPushButton("Edit Name", this);
	edit_numberOfDoses_Button = new QPushButton("Edit Number of Doses", this);
	edit_Password_Button = new QPushButton("Edit Password", this);

	edit_ID_Label = new QLabel("To Edit Your National Id Press Here ->", this);
	edit_ID_Label->move(10, 20);
	edit_ID_Label->setFixedWidth(450);
	edit_ID_Label->setFixedHeight(41);
	edit_ID_Label->setStyleSheet("font : bold 24px");

	edit_Password_Label = new QLabel("To Edit Your Password Press Here ->", this);
	edit_Password_Label->move(10, 100);
	edit_Password_Label->setFixedWidth(420);
	edit_Password_Label->setFixedHeight(41);
	edit_Password_Label->setStyleSheet("font : bold 24px");


	edit_Name_Label = new QLabel("To Edit Your Name Press Here ->", this);
	edit_Name_Label->move(10, 180);
	edit_Name_Label->setFixedWidth(400);
	edit_Name_Label->setFixedHeight(41);
	edit_Name_Label->setStyleSheet("font : bold 24px");

	edit_Age_Label = new QLabel("To Edit Your Age Press Here ->", this);
	edit_Age_Label->move(10, 250);
	edit_Age_Label->setFixedWidth(400);
	edit_Age_Label->setFixedHeight(41);
	edit_Age_Label->setStyleSheet("font : bold 24px");

	edit_Gender_Label = new QLabel("To Edit Your Gender Press Here ->", this);
	edit_Gender_Label->move(10, 320);
	edit_Gender_Label->setFixedWidth(400);
	edit_Gender_Label->setFixedHeight(41);
	edit_Gender_Label->setStyleSheet("font : bold 24px");

	edit_Governorate_Label = new QLabel("To Edit Your Governorate Press Here ->", this);
	edit_Governorate_Label->move(10, 400);
	edit_Governorate_Label->setFixedWidth(450);
	edit_Governorate_Label->setFixedHeight(41);
	edit_Governorate_Label->setStyleSheet("font : bold 24px");

	edit_numberofDoses_Label = new QLabel("To Edit Your Numer Of Doses Press Here ->", this);
	edit_numberofDoses_Label->move(10, 480);
	edit_numberofDoses_Label->setFixedWidth(500);
	edit_numberofDoses_Label->setFixedHeight(41);
	edit_numberofDoses_Label->setStyleSheet("font : bold 24px");

	edit_ID_Button->move(700, 20);
	edit_ID_Button->setFixedHeight(50);
	edit_ID_Button->setFixedWidth(250);
	edit_ID_Button->setStyleSheet("font : bold 20px");


	edit_Password_Button->move(700, 100);
	edit_Password_Button->setFixedHeight(50);
	edit_Password_Button->setFixedWidth(250);
	edit_Password_Button->setStyleSheet("font : bold 20px");

	edit_Name_Button->move(700, 180);
	edit_Name_Button->setFixedHeight(50);
	edit_Name_Button->setFixedWidth(250);
	edit_Name_Button->setStyleSheet("font : bold 20px");

	edit_Age_Button->move(700, 250);
	edit_Age_Button->setFixedHeight(50);
	edit_Age_Button->setFixedWidth(250);
	edit_Age_Button->setStyleSheet("font : bold 20px");

	edit_Gender_Button->move(700, 330);
	edit_Gender_Button->setFixedHeight(50);
	edit_Gender_Button->setFixedWidth(250);
	edit_Gender_Button->setStyleSheet("font : bold 20px");

	edit_Governorate_Button->move(700, 410);
	edit_Governorate_Button->setFixedHeight(50);
	edit_Governorate_Button->setFixedWidth(250);
	edit_Governorate_Button->setStyleSheet("font : bold 20px");

	edit_numberOfDoses_Button->move(700, 490);
	edit_numberOfDoses_Button->setFixedHeight(50);
	edit_numberOfDoses_Button->setFixedWidth(250);
	edit_numberOfDoses_Button->setStyleSheet("font : bold 20px");

	backButton = new QPushButton("Back", this);
	backButton->move(350, 550);
	backButton->setFixedSize(100, 50);

	connect(edit_Age_Button, &QPushButton::clicked, [this, &stackedWidget, &userdata, &first_dose_waiting_list, &second_dose_waiting_list, &full_vaccinated_users, &waitForFirstConfirm, &waitForSecondConfirm, viewSingleUser, &id]()
		{
			// use lambda function to capture value
			on_edit_Age_Button_Clicked(ref(userdata), ref(first_dose_waiting_list), ref(second_dose_waiting_list), ref(full_vaccinated_users), ref(waitForFirstConfirm), ref(waitForSecondConfirm), ref(stackedWidget), ref(id), ref(viewSingleUser));
			// call slot function with value as argument
		});
	connect(edit_Name_Button, &QPushButton::clicked, [this, &stackedWidget, &userdata, &first_dose_waiting_list, &second_dose_waiting_list, &full_vaccinated_users, &waitForFirstConfirm, &waitForSecondConfirm, viewSingleUser, &id]()
		{
			// use lambda function to capture value
			on_edit_Name_Button_Clicked(ref(userdata), ref(first_dose_waiting_list), ref(second_dose_waiting_list), ref(full_vaccinated_users), ref(waitForFirstConfirm), ref(waitForSecondConfirm), ref(stackedWidget), ref(id), ref(viewSingleUser));
			// call slot function with value as argument
		});
	connect(edit_ID_Button, &QPushButton::clicked, [this, &stackedWidget, &userdata, &first_dose_waiting_list, &second_dose_waiting_list, &full_vaccinated_users, &waitForFirstConfirm, &waitForSecondConfirm, viewSingleUser, &id]()
		{
			// use lambda function to capture value
			on_edit_ID_Button_Clicked(ref(userdata), ref(first_dose_waiting_list), ref(second_dose_waiting_list), ref(full_vaccinated_users), ref(waitForFirstConfirm), ref(waitForSecondConfirm), ref(stackedWidget), ref(id), ref(viewSingleUser));
			// call slot function with value as argument
		});
	connect(edit_Gender_Button, &QPushButton::clicked, [this, &stackedWidget, &userdata, &first_dose_waiting_list, &second_dose_waiting_list, &full_vaccinated_users, &waitForFirstConfirm, &waitForSecondConfirm, viewSingleUser, &id]()
		{
			// use lambda function to capture value
			on_edit_Gender_Button_Clicked(ref(userdata), ref(first_dose_waiting_list), ref(second_dose_waiting_list), ref(full_vaccinated_users), ref(waitForFirstConfirm), ref(waitForSecondConfirm), ref(stackedWidget), ref(id), ref(viewSingleUser));
			// call slot function with value as argument
		});
	connect(edit_Governorate_Button, &QPushButton::clicked, [this, &stackedWidget, &userdata, &first_dose_waiting_list, &second_dose_waiting_list, &full_vaccinated_users, &waitForFirstConfirm, &waitForSecondConfirm, viewSingleUser, &id]()
		{
			// use lambda function to capture value
			on_edit_Governorate_Button_Clicked(ref(userdata), ref(first_dose_waiting_list), ref(second_dose_waiting_list), ref(full_vaccinated_users), ref(waitForFirstConfirm), ref(waitForSecondConfirm), ref(stackedWidget), ref(id), ref(viewSingleUser));
			// call slot function with value as argument
		});
	connect(edit_Password_Button, &QPushButton::clicked, [this, &stackedWidget, &userdata, &first_dose_waiting_list, &second_dose_waiting_list, &full_vaccinated_users, &waitForFirstConfirm, &waitForSecondConfirm, viewSingleUser, &id]()
		{
			// use lambda function to capture value
			on_edit_Password_Button_Clicked(ref(userdata), ref(first_dose_waiting_list), ref(second_dose_waiting_list), ref(full_vaccinated_users), ref(waitForFirstConfirm), ref(waitForSecondConfirm), ref(stackedWidget), ref(id), ref(viewSingleUser));
			// call slot function with value as argument
		});
	connect(edit_numberOfDoses_Button, &QPushButton::clicked, [this, &stackedWidget, &userdata, &first_dose_waiting_list, &second_dose_waiting_list, &full_vaccinated_users, &waitForFirstConfirm, &waitForSecondConfirm, viewSingleUser, &id]()
		{
			// use lambda function to capture value
			on_numberOfDoses_Button_Clicked(ref(userdata), ref(first_dose_waiting_list), ref(second_dose_waiting_list), ref(full_vaccinated_users), ref(waitForFirstConfirm), ref(waitForSecondConfirm), ref(stackedWidget), ref(id), ref(viewSingleUser));
			// call slot function with value as argument
		});

	connect(backButton, &QPushButton::clicked, [this, &stackedWidget, &userdata, &full_vaccinated_users, &waitForFirstConfirm, &waitForSecondConfirm, &first_dose_waiting_list, &second_dose_waiting_list]()
		{
			// use lambda function to capture value
			on_backButton_Clicked(ref(userdata), ref(full_vaccinated_users), ref(waitForFirstConfirm), ref(waitForSecondConfirm), ref(first_dose_waiting_list), ref(second_dose_waiting_list), ref(stackedWidget));
			// call slot function with value as argument
		});

}

EditUserWindow::~EditUserWindow()
{

}

void EditUserWindow::on_edit_Age_Button_Clicked(unordered_map<string, User>& userdata, queue <User>& first_dose_waiting_list, queue <User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QStackedWidget& stackedWidget, string& id, QTableWidget* viewSingleUser)
{
	editactionwindow = new EditActionWindow(userdata, first_dose_waiting_list, second_dose_waiting_list, full_vaccinated_users, id, 5, stackedWidget, waitForFirstConfirm, waitForSecondConfirm, viewSingleUser, this);
	stackedWidget.hide();
	editactionwindow->show();
}

void EditUserWindow::on_edit_Password_Button_Clicked(unordered_map<string, User>& userdata, queue <User>& first_dose_waiting_list, queue <User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QStackedWidget& stackedWidget, string& id, QTableWidget* viewSingleUser)
{
	editactionwindow = new EditActionWindow(userdata, first_dose_waiting_list, second_dose_waiting_list, full_vaccinated_users, id, 3, stackedWidget, waitForFirstConfirm, waitForSecondConfirm, viewSingleUser, this);
	stackedWidget.hide();
	editactionwindow->show();
}

void EditUserWindow::on_edit_ID_Button_Clicked(unordered_map<string, User>& userdata, queue <User>& first_dose_waiting_list, queue <User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QStackedWidget& stackedWidget, string& id, QTableWidget* viewSingleUser)
{
	editactionwindow = new EditActionWindow(userdata, first_dose_waiting_list, second_dose_waiting_list, full_vaccinated_users, id, 1, stackedWidget, waitForFirstConfirm, waitForSecondConfirm, viewSingleUser, this);
	stackedWidget.hide();
	editactionwindow->show();
}

void EditUserWindow::on_edit_Gender_Button_Clicked(unordered_map<string, User>& userdata, queue <User>& first_dose_waiting_list, queue <User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QStackedWidget& stackedWidget, string& id, QTableWidget* viewSingleUser)
{
	editactionwindow = new EditActionWindow(userdata, first_dose_waiting_list, second_dose_waiting_list, full_vaccinated_users, id, 6, stackedWidget, waitForFirstConfirm, waitForSecondConfirm, viewSingleUser, this);
	stackedWidget.hide();
	editactionwindow->show();
}

void EditUserWindow::on_edit_Governorate_Button_Clicked(unordered_map<string, User>& userdata, queue <User>& first_dose_waiting_list, queue <User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QStackedWidget& stackedWidget, string& id, QTableWidget* viewSingleUser)
{
	editactionwindow = new EditActionWindow(userdata, first_dose_waiting_list, second_dose_waiting_list, full_vaccinated_users, id, 7, stackedWidget, waitForFirstConfirm, waitForSecondConfirm, viewSingleUser, this);
	stackedWidget.hide();
	editactionwindow->show();
}

void EditUserWindow::on_numberOfDoses_Button_Clicked(unordered_map<string, User>& userdata, queue <User>& first_dose_waiting_list, queue <User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QStackedWidget& stackedWidget, string& id, QTableWidget* viewSingleUser)
{
	editactionwindow = new EditActionWindow(userdata, first_dose_waiting_list, second_dose_waiting_list, full_vaccinated_users, id, 4, stackedWidget, waitForFirstConfirm, waitForSecondConfirm, viewSingleUser, this);
	stackedWidget.hide();
	editactionwindow->show();
}

void EditUserWindow::on_edit_Name_Button_Clicked(unordered_map<string, User>& userdata, queue <User>& first_dose_waiting_list, queue <User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QStackedWidget& stackedWidget, string& id, QTableWidget* viewSingleUser)
{
	editactionwindow = new EditActionWindow(userdata, first_dose_waiting_list, second_dose_waiting_list, full_vaccinated_users, id, 2, stackedWidget, waitForFirstConfirm, waitForSecondConfirm, viewSingleUser, this);
	stackedWidget.hide();
	editactionwindow->show();
}

void EditUserWindow::on_backButton_Clicked(unordered_map<string, User>&, vector<User>&, vector<User>&, vector<User>&, queue<User>&, queue<User>&, QStackedWidget& stackedWidget)
{
	hide();
	stackedWidget.setCurrentIndex(1);
	stackedWidget.show();
}
