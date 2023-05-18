#include "viewUserData.h"
#include <qmessagebox.h>
#include <QString>
#include <string>
#include <functional>
#include "Admin.h"

bool flagAll, flagOne;

viewUserData::viewUserData(unordered_map<string, User>& userData, QStackedWidget& stackedWidget, QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    viewOneUserButton = new QPushButton("view user", this);
    viewOneUserButton->move(510, 160);
    viewOneUserButton->setFixedWidth(150);
    viewOneUserButton->setFixedHeight(32);
    viewOneUserButton->setStyleSheet("font-size:16px;");

    viewAllUsersButton = new QPushButton("view all users", this);
    viewAllUsersButton->move(370, 210);
    viewAllUsersButton->setFixedWidth(200);
    viewAllUsersButton->setFixedHeight(40);
    viewAllUsersButton->setStyleSheet("font-size:16px;");

    viewIDLabel = new QLabel("Enter Id:", this);
    viewIDLabel->move(260, 160);
    viewIDLabel->setStyleSheet("font-size:16px;");

    viewIDlineEdit = new QLineEdit(this);
    viewIDlineEdit->move(330, 160);
    viewIDlineEdit->setFixedWidth(170);
    viewIDlineEdit->setStyleSheet("font-size:15px;");

    BackButton = new QPushButton("Back", this);
    BackButton->move(480, 580);
    BackButton->setStyleSheet("font-size:16px;");

    connect(viewOneUserButton, &QPushButton::clicked, [this, &userData, &stackedWidget]() {
        onviewOneUserButtonClicked(ref(userData), ref(stackedWidget));
        });
    connect(viewAllUsersButton, &QPushButton::clicked, [this, &userData, &stackedWidget]() {
        onviewAllUsersButtonClicked(ref(userData), ref(stackedWidget));
        });
    connect(BackButton, &QPushButton::clicked, [this, &userData, &stackedWidget]()
        {

            onBackButtonclicked(ref(userData), ref(stackedWidget));

        });
}

viewUserData::~viewUserData()
{}

void viewUserData::onBackButtonclicked(unordered_map<string, User>& userData, QStackedWidget& stackedWidget)
{
    hide();
    stackedWidget.setCurrentIndex(1);
    stackedWidget.show();
}

void viewUserData::onviewOneUserButtonClicked(unordered_map<string, User>& userData, QStackedWidget& stackedWidget)
{
    Admin admin;
    QString id = viewIDlineEdit->text();
    string userId = id.toStdString();
    QString text;
    unordered_map<string, User>::iterator it;

    it = userData.find(userId);
    if (it == userData.end()) {
        QMessageBox::warning(this, "Wrong Information", "this National Id is not found.");
    }
    else {
        User u1 = admin.viewData(userData, userId);
        viewUserTable = new QTableWidget(this);
        viewUserTable->setStyleSheet("font-size:15px;");
        viewUserTable->setRowCount(1);
        viewUserTable->setColumnCount(7);
        QStringList hLables;
        hLables << "Name" << "ID" << "Age" << "Governorate" << "Gender" << "no. of doses" << "Date";
        viewUserTable->setHorizontalHeaderLabels(hLables);
        viewUserTable->setGeometry(20, 290, 940, 83);

        for (int i = 0; i < viewUserTable->columnCount(); i++) {
            viewUserTable->setColumnWidth(i, 131);
        }

        QTableWidgetItem* item;
        for (int j = 0; j < viewUserTable->columnCount(); j++) {
            item = new QTableWidgetItem;
            if (j == 0) {
                text = QString::fromStdString(u1.getFullName());
                item->setText(text);
            }
            if (j == 1) {
                text = QString::fromStdString(u1.getId());
                item->setText(text);
            }
            if (j == 2) {
                text = QString::number(u1.getAge());
                item->setText(text);
            }
            if (j == 3) {
                text = QString::fromStdString(u1.getGovernorate());
                item->setText(text);
            }
            if (j == 4) {
                if (u1.getMale() == true) {
                    item->setText("Male");
                }
                else {
                    item->setText("Female");
                }
            }
            if (j == 5) {
                text = QString::number(u1.getDoses());
                item->setText(text);
            }
            if (j == 6)
            {
                text = it->second.getAppointmentQdate().toString();
                item->setText(text);
            }
            viewUserTable->setItem(0, j, item);
            item->setFlags(item->flags() & ~(Qt::ItemIsEditable));
        }
        if (flagAll == true) {
            viewAllUsersTable->close();
            flagAll = false;
        }
        viewUserTable->show();
        flagOne = true;

    }
}

void viewUserData::onviewAllUsersButtonClicked(unordered_map<string, User>& userData, QStackedWidget& stackedWidget)
{
    Admin admin;
    QString id = viewIDlineEdit->text();
    string userId = id.toStdString();
    unordered_map<string, User> usersTable = admin.viewAllUsersData(userData);
    unordered_map<string, User>::iterator it = usersTable.begin();
    QString text;

    viewAllUsersTable = new QTableWidget(this);
    viewAllUsersTable->setRowCount(usersTable.size());
    viewAllUsersTable->setStyleSheet("font-size:15px;");
    viewAllUsersTable->setColumnCount(7);
    QStringList hLables;
    hLables << "Name" << "ID" << "Age" << "Governorate" << "Gender" << "no. of doses" << "Date";
    viewAllUsersTable->setHorizontalHeaderLabels(hLables);
    viewAllUsersTable->setGeometry(20, 290, 960, 200);

    for (int i = 0; i < viewAllUsersTable->columnCount(); i++) {
        viewAllUsersTable->setColumnWidth(i, 131);
    }


    int i = 0;
    for (it; it != usersTable.end(); it++) {
        QTableWidgetItem* item;
        for (int j = 0; j < viewAllUsersTable->columnCount(); j++) {
            item = new QTableWidgetItem;
            if (j == 0) {
                text = QString::fromStdString(it->second.getFullName());
                item->setText(text);
            }
            if (j == 1) {
                text = QString::fromStdString(it->second.getId());
                item->setText(text);
            }
            if (j == 2) {
                text = QString::number(it->second.getAge());
                item->setText(text);
            }
            if (j == 3) {
                text = QString::fromStdString(it->second.getGovernorate());
                item->setText(text);
            }
            if (j == 4) {
                if (it->second.getMale() == true) {
                    item->setText("Male");
                }
                else {
                    item->setText("Female");
                }
            }
            if (j == 5) {
                text = QString::number(it->second.getDoses());
                item->setText(text);
            }
            if (j == 6)
            {
                text = it->second.getAppointmentQdate().toString();
                item->setText(text);
            }
            viewAllUsersTable->setItem(i, j, item);
            item->setFlags(item->flags() & ~(Qt::ItemIsEditable));
        }
        i++;
    }
    if (flagOne == true) {
        viewUserTable->close();
        flagOne = false;
    }
    viewAllUsersTable->show();
    flagAll = true;
}