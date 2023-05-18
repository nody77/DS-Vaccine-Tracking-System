#include "EditActionWindow.h"
#include <QStringList>
#include <QMessageBox>
#include <functional>

using namespace std;

EditActionWindow::EditActionWindow(unordered_map<string, User>& userdata, queue <User>& first_dose_waiting_list, queue <User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, string& id, int flag, QStackedWidget& stackedWidget, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QTableWidget* viewSingleUser, QWidget* parent) : QMainWindow(parent)
{
	ui.setupUi(this);
	setFixedSize(1000, 631);
	setStyleSheet("background-color: #CBE5FA;");

	submit_Button = new QPushButton("Submit", this);
	submit_Button->move(400, 430);
	submit_Button->setFixedWidth(161);
	submit_Button->setFixedHeight(61);
	submit_Button->setStyleSheet("font :bold 24px");

	backButton = new QPushButton("Back", this);
	backButton->move(400, 530);
	backButton->setFixedSize(100, 50);

	if (flag == 1)
	{
		label = new QLabel("Enter your new National ID", this);
		label->move(20, 230);
		label->setFixedHeight(61);
		label->setFixedWidth(371);
		label->setStyleSheet("font: bold 24px");
		textbox = new QLineEdit(this);
		textbox->move(400, 240);
		textbox->setFixedHeight(41);
		textbox->setFixedWidth(361);
	}
	else if (flag == 2)
	{
		label = new QLabel("Enter your new Name", this);
		label->move(20, 230);
		label->setFixedHeight(61);
		label->setFixedWidth(371);
		label->setStyleSheet("font: bold 24px");
		textbox = new QLineEdit(this);
		textbox->move(430, 240);
		textbox->setFixedHeight(41);
		textbox->setFixedWidth(361);
	}
	else if (flag == 3)
	{
		label = new QLabel("Enter your new Password", this);
		label->move(20, 230);
		label->setFixedHeight(61);
		label->setFixedWidth(371);
		label->setStyleSheet("font: bold 24px");
		textbox = new QLineEdit(this);
		textbox->move(430, 240);
		textbox->setFixedHeight(41);
		textbox->setFixedWidth(361);

	}
	else if (flag == 4)
	{
		QStringList doses_list;
		doses_list << "0" << "1" << "2";
		label = new QLabel("Choose the correct number of Doses", this);
		label->move(20, 230);
		label->setFixedHeight(61);
		label->setFixedWidth(450);
		label->setStyleSheet("font: bold 24px");
		doses_Governorate_combobox = new QComboBox(this);
		doses_Governorate_combobox->move(480, 240);
		doses_Governorate_combobox->setFixedHeight(31);
		doses_Governorate_combobox->setFixedWidth(141);
		doses_Governorate_combobox->addItems(doses_list);
	}
	else if (flag == 5)
	{
		label = new QLabel("Choose your correct age", this);
		label->move(20, 230);
		label->setFixedHeight(61);
		label->setFixedWidth(371);
		label->setStyleSheet("font: bold 24px");
		age_spinbox = new QSpinBox(this);
		age_spinbox->move(430, 240);
		age_spinbox->setFixedHeight(31);
		age_spinbox->setFixedWidth(101);
		age_spinbox->setMinimum(5);
		age_spinbox->setMaximum(100);
		age_spinbox->setSingleStep(1);

	}
	else if (flag == 6)
	{
		QStringList gender_list;
		gender_list << "Male" << "Female";
		label = new QLabel("Choose your gender", this);
		label->move(20, 230);
		label->setFixedHeight(61);
		label->setFixedWidth(371);
		label->setStyleSheet("font: bold 24px");
		doses_Governorate_combobox = new QComboBox(this);
		doses_Governorate_combobox->move(430, 240);
		doses_Governorate_combobox->setFixedHeight(31);
		doses_Governorate_combobox->setFixedWidth(141);
		doses_Governorate_combobox->addItems(gender_list);
	}
	else if (flag == 7)
	{
		QStringList governorate_list;
		governorate_list << "Alexandria" << "Aswan" << "Asyut" << "Beheira" << "Beni Suef" << "Cairo" << "Dakahlia" << "Damietta" << "Faiyum" << "Gharbia" << "Giza" << "Ismailia" << "Kafr El Sheikh" << "Luxor" << "Matruh" << "Minya" << "Monufia" << "New Valley" << "North Sinai" << "Port Said" << "Qalyubia" << "Qena" << "Red Sea" << "Sharqia" << "Sohag" << "South Sinai" << "Suez";
		label = new QLabel("Choose your correct governorate", this);
		label->move(20, 230);
		label->setFixedHeight(61);
		label->setFixedWidth(371);
		label->setStyleSheet("font: bold 24px");
		doses_Governorate_combobox = new QComboBox(this);
		doses_Governorate_combobox->move(430, 240);
		doses_Governorate_combobox->setFixedHeight(31);
		doses_Governorate_combobox->setFixedWidth(141);
		doses_Governorate_combobox->addItems(governorate_list);
	}
	connect(submit_Button, &QPushButton::clicked, [this, &stackedWidget, &userdata, &first_dose_waiting_list, &second_dose_waiting_list, &full_vaccinated_users, flag, &id, viewSingleUser]()
		{
			// use lambda function to capture value
			on_submit_button_clicked(ref(userdata), ref(first_dose_waiting_list), ref(second_dose_waiting_list), ref(full_vaccinated_users), ref(stackedWidget), flag, ref(id), ref(viewSingleUser));
			// call slot function with value as argument
		});

	connect(backButton, &QPushButton::clicked, [this, &stackedWidget, &userdata, &full_vaccinated_users, &waitForFirstConfirm, &waitForSecondConfirm, &first_dose_waiting_list, &second_dose_waiting_list, &id]()
		{
			// use lambda function to capture value
			on_backButton_Clicked(ref(userdata), ref(first_dose_waiting_list), ref(second_dose_waiting_list), ref(full_vaccinated_users), ref(id), ref(waitForFirstConfirm), ref(waitForSecondConfirm), ref(stackedWidget));
			// call slot function with value as argument
		});

}

EditActionWindow::~EditActionWindow()
{

}


void EditActionWindow::on_submit_button_clicked(unordered_map<string, User>& userdata, queue<User>& first_dose_waiting_list, queue<User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, QStackedWidget& stackedWidget, int flag, string& id, QTableWidget* viewSingleUser)
{
	unordered_map<string, User> ::iterator it;
	it = userdata.find(id);
	User editeduser = it->second;
	QString changeditem;
	int iscorrect = 8;
	if (flag == 1 || flag == 2 || flag == 3)
	{
		changeditem = textbox->text();
	}
	else if (flag == 4 || flag == 6 || flag == 7)
	{
		changeditem = doses_Governorate_combobox->currentText();
	}
	else if (flag == 5)
	{
		int selectedValue = age_spinbox->value();
		changeditem = QString::number(selectedValue);
	}
	if (changeditem != "")
	{
		iscorrect = editeduser.editUserInfo(userdata, first_dose_waiting_list, second_dose_waiting_list, full_vaccinated_users, flag, id, changeditem);
		//string s = changeditem.toStdString();
		//it = userdata.find(id);
	}
	else
	{
		QMessageBox::warning(this, "Wrong information", "Please enter the empty field.");
	}
	if (iscorrect == 0)
	{
		QMessageBox::information(this, "Edit data", "Edited successfully.");
		QTableWidgetItem* item = viewSingleUser->currentItem();
		if (item != nullptr) {
			int row = item->row();
			if (flag == 1) {

				QTableWidgetItem* cell = viewSingleUser->item(row, 1);
				cell->setData(Qt::DisplayRole, changeditem);

			}
			if (flag == 2) {

				QTableWidgetItem* cell = viewSingleUser->item(row, 0);
				cell->setData(Qt::DisplayRole, changeditem);

			}
			if (flag == 6) {

				QTableWidgetItem* cell = viewSingleUser->item(row, 2);
				cell->setData(Qt::DisplayRole, changeditem);

			}
			if (flag == 5) {

				QTableWidgetItem* cell = viewSingleUser->item(row, 3);
				cell->setData(Qt::DisplayRole, changeditem);

			}
			if (flag == 7) {

				QTableWidgetItem* cell = viewSingleUser->item(row, 4);
				cell->setData(Qt::DisplayRole, changeditem);

			}
			if (flag == 4) {

				QTableWidgetItem* cell = viewSingleUser->item(row, 5);
				cell->setData(Qt::DisplayRole, changeditem);
				cell = viewSingleUser->item(row, 6);
				cell->setData(Qt::DisplayRole, editeduser.getAppointmentQdate());
			}
			viewSingleUser->update();
		}

		this->hide();
		stackedWidget.setCurrentIndex(2);
		stackedWidget.show();
	}
	else if (iscorrect == 1)
	{
		QMessageBox::warning(this, "Wrong information", "This id is already exist.");
	}
	else if (iscorrect == 2)
	{
		QMessageBox::warning(this, "Wrong Edit", "This field did not change.");
	}
}

void EditActionWindow::on_backButton_Clicked(unordered_map<string, User>& userdata, queue <User>& first_dose_waiting_list, queue <User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, string id, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, QStackedWidget& stackedWidget)
{
	hide();
	stackedWidget.setCurrentIndex(2);
	stackedWidget.show();
}
