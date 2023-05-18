#include "ViewUserByAgeGUI.h"
#include "Admin.h"
#include <qmessagebox.h>
#include <unordered_map>
#include <functional>

using namespace std;

bool flagA, flagD;
Admin admin;
vector<User>::iterator it;

ViewUserByAgeGUI::ViewUserByAgeGUI(unordered_map<string, User>& userData, QStackedWidget& stackedWidget, QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ViewAscendingButton = new QPushButton("View Vaccinated Users Ascending", this);
    ViewAscendingButton->move(350, 100);
    ViewAscendingButton->setFixedWidth(300);
    ViewAscendingButton->setFixedHeight(50);
    ViewAscendingButton->setStyleSheet("font-size:16px;");

    ViewDescendingButton = new QPushButton("View Vaccinated Users Descending", this);
    ViewDescendingButton->move(350, 180);
    ViewDescendingButton->setFixedWidth(300);
    ViewDescendingButton->setFixedHeight(50);
    ViewDescendingButton->setStyleSheet("font-size:16px;");

    BackButton = new QPushButton("Back", this);
    BackButton->move(480, 580);
    BackButton->setStyleSheet("font-size:16px;");


    connect(ViewAscendingButton, &QPushButton::clicked, [this, &userData, &stackedWidget]() {
        onViewAscendingButtonClicked(ref(userData), ref(stackedWidget));
        });
    connect(ViewDescendingButton, &QPushButton::clicked, [this, &userData, &stackedWidget]() {
        onViewDescendingButtonClicked(ref(userData), ref(stackedWidget));
        });
    connect(BackButton, &QPushButton::clicked, [this, &userData, &stackedWidget]()
        {

            onBackButtonclicked(ref(userData), ref(stackedWidget));

        });
}



ViewUserByAgeGUI::~ViewUserByAgeGUI()
{
}


void ViewUserByAgeGUI::onViewAscendingButtonClicked(unordered_map<string, User>& userData, QStackedWidget& stackedWidget)
{
    vector<User> sorted;
    sorted = admin.ViewAscendingly(userData);
    QString text;

    viewUsersAscTable = new QTableWidget(this);
    viewUsersAscTable->setRowCount(sorted.size());
    viewUsersAscTable->setColumnCount(7);
    QStringList hLables;
    hLables << "Name" << "ID" << "Age" << "Governorate" << "Gender" << "No. of Doses" << "Date";
    viewUsersAscTable->setHorizontalHeaderLabels(hLables);

    viewUsersAscTable->setStyleSheet("font-size:16px;");
    viewUsersAscTable->verticalScrollBar();
    viewUsersAscTable->setGeometry(15, 270, 970, 200);



    /* for (int i = 0; i < viewUsersAscTable->columnCount(); i++) {
         viewUsersAscTable->setColumnWidth(i, 155);
     }*/


    for (int i = 0; i < viewUsersAscTable->rowCount(); i++) {
        QTableWidgetItem* item;
        for (int j = 0; j < viewUsersAscTable->columnCount(); j++) {
            item = new QTableWidgetItem;
            if (j == 0) {
                viewUsersAscTable->setColumnWidth(j, 155);
                text = QString::fromStdString(sorted[i].getFullName());
                item->setText(text);
            }
            if (j == 1) {
                viewUsersAscTable->setColumnWidth(j, 150);
                text = QString::fromStdString(sorted[i].getId());
                item->setText(text);
            }
            if (j == 2) {
                viewUsersAscTable->setColumnWidth(j, 120);
                text = QString::number(sorted[i].getAge());
                item->setText(text);
            }
            if (j == 3) {
                viewUsersAscTable->setColumnWidth(j, 140);
                text = QString::fromStdString(sorted[i].getGovernorate());
                item->setText(text);
            }
            if (j == 4) {
                viewUsersAscTable->setColumnWidth(j, 120);
                if (sorted[i].getMale() == true) {
                    item->setText("Male");
                }
                else {
                    item->setText("Female");
                }
            }
            if (j == 5) {
                text = QString::number(sorted[i].getDoses());
                viewUsersAscTable->setColumnWidth(j, 120);

                item->setText(text);

            }
            if (j == 6) {
                viewUsersAscTable->setColumnWidth(j, 145);
                text = sorted[i].getAppointmentQdate().toString();
                item->setText(text);

            }

            viewUsersAscTable->setItem(i, j, item);
            item->setFlags(item->flags() & ~(Qt::ItemIsEditable));

        }
    }
    if (flagD == true) {
        viewUsersDescTable->close();
        flagD = false;
    }
    viewUsersAscTable->show();
    flagA = true;

}

void ViewUserByAgeGUI::onViewDescendingButtonClicked(unordered_map<string, User>& userData, QStackedWidget& stackedWidget)
{
    vector<User> sorted;
    sorted = admin.ViewaDescendingly(userData);
    QString text;

    viewUsersDescTable = new QTableWidget(this);
    viewUsersDescTable->setRowCount(sorted.size());
    viewUsersDescTable->setColumnCount(7);
    viewUsersDescTable->setStyleSheet("font-size:16px;");
    QStringList hLables;
    hLables << "Name" << "ID" << "Age" << "Governorate" << "Gender" << "No. of Doses" << "Date";
    viewUsersDescTable->setHorizontalHeaderLabels(hLables);

    viewUsersDescTable->verticalScrollBar();
    viewUsersDescTable->setGeometry(15, 270, 970, 200);
    //viewUsersTable->move(50, 150);

    for (int i = 0; i < viewUsersDescTable->rowCount(); i++) {
        QTableWidgetItem* item;
        for (int j = 0; j < viewUsersDescTable->columnCount(); j++) {
            item = new QTableWidgetItem;
            if (j == 0) {
                viewUsersDescTable->setColumnWidth(j, 155);
                text = QString::fromStdString(sorted[i].getFullName());
                item->setText(text);
            }
            if (j == 1) {
                viewUsersDescTable->setColumnWidth(j, 150);
                text = QString::fromStdString(sorted[i].getId());
                item->setText(text);
            }
            if (j == 2) {
                viewUsersDescTable->setColumnWidth(j, 120);
                text = QString::number(sorted[i].getAge());
                item->setText(text);
            }
            if (j == 3) {
                viewUsersDescTable->setColumnWidth(j, 140);
                text = QString::fromStdString(sorted[i].getGovernorate());
                item->setText(text);
            }
            if (j == 4) {
                viewUsersDescTable->setColumnWidth(j, 120);
                if (sorted[i].getMale() == true) {
                    item->setText("Male");
                }
                else {
                    item->setText("Female");
                }
            }
            if (j == 5) {
                text = QString::number(sorted[i].getDoses());
                viewUsersDescTable->setColumnWidth(j, 120);

                item->setText(text);

            }
            if (j == 6) {
                viewUsersDescTable->setColumnWidth(j, 145);
                text = sorted[i].getAppointmentQdate().toString();
                item->setText(text);

            }
            viewUsersDescTable->setItem(i, j, item);
            item->setFlags(item->flags() & ~(Qt::ItemIsEditable));

        }
    }
    if (flagA == true) {
        viewUsersAscTable->close();
        flagA = false;
    }
    viewUsersDescTable->show();
    flagD = true;

}

void ViewUserByAgeGUI::onBackButtonclicked(unordered_map<string, User>& userData, QStackedWidget& stackedWidget)
{
    hide();
    stackedWidget.setCurrentIndex(1);
    stackedWidget.show();
}
