#include "viewWaitingList.h"
#include <unordered_map>
#include <QDate>
#include <QTableWidget>
#include <QHeaderView>

viewWaitingList::viewWaitingList(queue<User>& waitingList, QStackedWidget& stackedWidget, QWidget* parent): QMainWindow(parent)
{
    ui.setupUi(this);
    setFixedSize(1000, 631);
    button = new QPushButton("The waiting list", this);
    button->setGeometry(390, 100, 200, 40);
    button->setStyleSheet("font : bold ; font-size : 15px ; hieght : 1500px ; width 200px;");
    backButton = new  QPushButton("Back", this);
    backButton->move(480, 580);
    backButton->setStyleSheet("font-size:16px;");

    connect(button, &QPushButton::clicked, [this, &waitingList, &stackedWidget]()
        {
            tableDisplay(ref(waitingList), ref(stackedWidget));
        });



}

inline void viewWaitingList::tableDisplay(queue<User>& waitingList, QStackedWidget& stackedWidget)

{
    QString qstr;
    QDate date;
    vector<User> userWaitingVector = Admin::viewUserWaiting(waitingList);

    QTableWidget* waitingListTable = new QTableWidget(this);
    waitingListTable->setRowCount(userWaitingVector.size());
    waitingListTable->setColumnCount(6);
    waitingListTable->verticalScrollBar();

    QStringList hLables;
    hLables << "Name" << "ID" << "Age" << "Goverenorate" << "Gender" << "Deadline";
    waitingListTable->setHorizontalHeaderLabels(hLables);

    waitingListTable->setGeometry(50, 210, 906, 200);

    for (int i = 0; i < 2/*waitingListTable->columnCount()*/; i++)
    {
        waitingListTable->setColumnWidth(i, 200);
    }
    for (int i = 2; i < waitingListTable->columnCount(); i++)
    {
        waitingListTable->setColumnWidth(i, 118);
    }

    for (int i = 0; i < waitingListTable->rowCount(); i++)
    {
        QTableWidgetItem* item;
        for (int j = 0; j < waitingListTable->columnCount(); j++)
        {
            item = new QTableWidgetItem;
            if (j == 0)
            {
                qstr = QString::fromStdString(userWaitingVector[i].getFullName());
                item->setText(qstr);
            }
            if (j == 1)
            {
                qstr = QString::fromStdString(userWaitingVector[i].getId());
                item->setText(qstr);
            }
            if (j == 2)
            {
                qstr = QString::number(userWaitingVector[i].getAge());
                item->setText(qstr);

            }
            if (j == 3)
            {
                qstr = QString::fromStdString(userWaitingVector[i].getGovernorate());
                item->setText(qstr);
            }
            if (j == 4)
            {
                if (userWaitingVector[i].getFemale() == true)
                    item->setText("Female");
                else
                    item->setText("Male");
            }
            if (j == 5)
            {
                qstr = QString::fromStdString(userWaitingVector[i].getAppointment());
                item->setText(qstr);

            }
            QFont font("Arial", 10);
            item->setFont(font);
            waitingListTable->setItem(i, j, item);
            item->setFlags(item->flags() & ~Qt::ItemIsEditable);
        }
    }

    waitingListTable->setShowGrid(true);

    font = waitingListTable->horizontalHeader()->font();
    font.setBold(true);
    waitingListTable->horizontalHeader()->setFont(font);
    font = waitingListTable->horizontalHeader()->font();
    font.setPointSize(12);
    waitingListTable->horizontalHeader()->setFont(font);

    waitingListTable->show();
    connect(backButton, &QPushButton::clicked, [this, &waitingList, &stackedWidget]()
        {
            // use lambda function to capture value
            onbackButtonclicked(ref(waitingList), ref(stackedWidget));
            // call slot function with value as argument
        });
}

viewWaitingList::~viewWaitingList()
{}

void viewWaitingList::onbackButtonclicked(queue<User>& waitingList, QStackedWidget& stackedWidget)
{
    hide();
    stackedWidget.setCurrentIndex(1);
    stackedWidget.show();

}

