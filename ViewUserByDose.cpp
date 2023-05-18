#include "ViewUserByDose.h"
#include <QScrollBar>

ViewUserByDose::ViewUserByDose(unordered_map<string, User>& userMap, QStackedWidget& stackedWidget, QWidget* parent): QMainWindow(parent)
{
    ui.setupUi(this);
    whoRecieved1stDoseButton = new QPushButton("who Recieved 1st Dose", this);
    whoRecieved1stDoseButton->move(350, 100);
    whoRecieved1stDoseButton->setFixedWidth(300);
    whoRecieved1stDoseButton->setFixedHeight(50);
    whoRecieved1stDoseButton->setStyleSheet("font-size:16px;");

    whoRecieved2ndDoseButton = new QPushButton("who Recieved 2nd Dose", this);
    whoRecieved2ndDoseButton->move(350, 180);
    whoRecieved2ndDoseButton->setFixedWidth(300);
    whoRecieved2ndDoseButton->setFixedHeight(50);
    whoRecieved2ndDoseButton->setStyleSheet("font-size:16px;");
    BackButton = new QPushButton("Back", this);
    BackButton->move(480, 580);
    BackButton->setStyleSheet("font-size:16px;");

    connect(whoRecieved1stDoseButton, &QPushButton::clicked, [this, &userMap, &stackedWidget]()
        {

            onwhoRecieved1stDoseButtonClicked(ref(userMap), ref(stackedWidget));

        });
    connect(whoRecieved2ndDoseButton, &QPushButton::clicked, [this, &userMap, &stackedWidget]()
        {

            onwhoRecieved2ndDoseButtonClicked(ref(userMap), ref(stackedWidget));

        });
    connect(BackButton, &QPushButton::clicked, [this, &userMap, &stackedWidget]()
        {

            onBackButtonClicked(ref(userMap), ref(stackedWidget));

        });



}

ViewUserByDose::~ViewUserByDose()
{}

void ViewUserByDose::onwhoRecieved1stDoseButtonClicked(unordered_map<string, User>& userMap, QStackedWidget& stackedWidget)
{

    Admin a;
    QScrollBar* scrollbar = new QScrollBar();
    whoRecieved1stDoseTable = new QTableWidget(this);
    whoRecieved1stDoseTable->setColumnCount(6);
    whoRecieved1stDoseTable->setRowCount(a.NoOf1stDoseUsers(userMap));
    QStringList headerLabels;
    headerLabels << "Name" << "ID" << "Age" << "Governorate" << "Gender" << "Date";
    whoRecieved1stDoseTable->setHorizontalHeaderLabels(headerLabels);
    whoRecieved1stDoseTable->setVerticalScrollBar(scrollbar);
    whoRecieved1stDoseTable->setGeometry(40, 270, 890, 200);
    for (int i = 0; i < whoRecieved1stDoseTable->columnCount(); i++)
    {
        whoRecieved1stDoseTable->setColumnWidth(i, 145);

    }
    QString text;
    unordered_map<string, User>::iterator it;
    int row = 0;
    for (it = userMap.begin(); it != userMap.end(); it++)
    {
        QTableWidgetItem* item;
        if (it->second.getDoses() == 1)

        {
            for (int j = 0; j < whoRecieved1stDoseTable->columnCount(); j++)
            {

                item = new  QTableWidgetItem;

                if (j == 0)
                {
                    text = QString::fromStdString(it->second.getFullName());
                    item->setText(text);


                }
                if (j == 1)
                {
                    text = QString::fromStdString(it->second.getId());
                    item->setText(text);
                }
                if (j == 2)
                {
                    text = QString::number(it->second.getAge());
                    item->setText(text);
                }
                if (j == 3)
                {
                    text = QString::fromStdString(it->second.getGovernorate());
                    item->setText(text);

                }
                if (j == 4)
                {
                    if (it->second.getMale() == true)
                    {
                        item->setText("Male");
                    }
                    else
                    {
                        item->setText("Female");
                    }
                }
                if (j == 5) 
                {
                    text = it->second.getAppointmentQdate().toString();
                    item->setText(text);
                }
                whoRecieved1stDoseTable->setItem(row, j, item);

            }
            row++;
        }


    }
    whoRecieved1stDoseTable->show();
}

void ViewUserByDose::onwhoRecieved2ndDoseButtonClicked(unordered_map<string, User>& userMap, QStackedWidget& stackedWidget)
{
    Admin a;
    QScrollBar* scrollbar = new QScrollBar();
    whoRecieved2ndDoseTable = new QTableWidget(this);
    whoRecieved2ndDoseTable->setColumnCount(6);
    whoRecieved2ndDoseTable->setRowCount(a.NoOf2ndDoseUsers(userMap));
    QStringList headerLabels;
    headerLabels << "Name" << "ID" << "Age" << "Governorate" << "Gender" << "Date";
    whoRecieved2ndDoseTable->setHorizontalHeaderLabels(headerLabels);
    whoRecieved2ndDoseTable->setVerticalScrollBar(scrollbar);
    whoRecieved2ndDoseTable->setGeometry(40, 270, 890, 200);
    for (int i = 0; i < whoRecieved2ndDoseTable->columnCount(); i++)
    {
        whoRecieved2ndDoseTable->setColumnWidth(i, 145);

    }
    QString text;
    unordered_map<string, User>::iterator it;
    int row = 0;
    for (it = userMap.begin(); it != userMap.end(); it++)
    {
        QTableWidgetItem* item;
        if (it->second.getDoses() == 2)

        {
            for (int j = 0; j < whoRecieved2ndDoseTable->columnCount(); j++)
            {

                item = new  QTableWidgetItem;

                if (j == 0)
                {
                    text = QString::fromStdString(it->second.getFullName());
                    item->setText(text);


                }
                if (j == 1)
                {
                    text = QString::fromStdString(it->second.getId());
                    item->setText(text);
                }
                if (j == 2)
                {
                    text = QString::number(it->second.getAge());
                    item->setText(text);
                }
                if (j == 3)
                {
                    text = QString::fromStdString(it->second.getGovernorate());
                    item->setText(text);

                }
                if (j == 4)
                {
                    if (it->second.getMale() == true)
                    {
                        item->setText("Male");
                    }
                    else
                    {
                        item->setText("Female");
                    }
                }
                if (j == 5)
                {
                    text = it->second.getAppointmentQdate().toString();
                    item->setText(text);
                }
                whoRecieved2ndDoseTable->setItem(row, j, item);

            }
            row++;
        }


    }
    whoRecieved2ndDoseTable->show();
}

void ViewUserByDose::onBackButtonClicked(unordered_map<string, User>& userMap, QStackedWidget& stackedWidget)
{
    hide();
    stackedWidget.setCurrentIndex(1);
    stackedWidget.show();

}
