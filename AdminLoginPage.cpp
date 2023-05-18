#include "AdminLoginPage.h"
#include "AdminControls.h"
#include <QMessageBox>
#include <functional>

AdminLoginPage::AdminLoginPage(unordered_map<string, User>& userMap, queue<User>& waitingList, queue<User>& firstDoseList, vector<User>& secondDoseList, QStackedWidget& stackedWidget, QWidget* parent): QMainWindow(parent)
{
    ui.setupUi(this);
    setFixedSize(1000, 631);

    AdminLoginPageLabel = new QLabel("Admin Login", this);
    AdminLoginPageLabel->move(200, 25);
    AdminLoginPageLabel->setStyleSheet("color :darkblue ; font : bold 30px;");
    AdminLoginPageLabel->setFixedWidth(350);
    AdminLoginPageLabel->setFixedHeight(100);


    AdminIDLabel = new QLabel("Admin ID : ", this);
    AdminIDLabel->move(100, 150);
    AdminIDLabel->setStyleSheet("color : darkblue; font : bold 15px;");


    AdminPasswordLabel = new QLabel("Admin Password : ", this);
    AdminPasswordLabel->move(60, 200);
    AdminPasswordLabel->setStyleSheet("color : darkblue; font : bold 15px;");
    AdminPasswordLabel->setFixedWidth(150);



    AdminIDLineEdit = new QLineEdit(this);
    AdminIDLineEdit->move(200, 150);
    AdminIDLineEdit->setStyleSheet(" font : bold 15px;");



    AdminPasswordLineEdit = new QLineEdit(this);
    AdminPasswordLineEdit->move(200, 200);
    AdminPasswordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);
    AdminPasswordLineEdit->setStyleSheet(" font : bold 15px;");



    AdminLoginButton = new QPushButton("LOGIN", this);
    AdminLoginButton->move(390, 300);
    AdminLoginButton->setStyleSheet("background-color: 	skyblue; color :darkbue; font : bold 15px;");

    BackButton = new QPushButton("BACK", this);
    BackButton->move(130, 300);
    BackButton->setStyleSheet("background-color: 	skyblue; color :darkbue; font : bold 15px;");

    connect(AdminLoginButton, &QPushButton::clicked, [this, &userMap, &waitingList, &firstDoseList, &secondDoseList, &stackedWidget]()
        {

            onLoginButtonClicked(ref(userMap), ref(waitingList), ref(firstDoseList), ref(secondDoseList), ref(stackedWidget));

        });

    connect(BackButton, &QPushButton::clicked, [this, &stackedWidget, &userMap, &secondDoseList, &waitingList, &firstDoseList]()
        {
            // use lambda function to capture value
            on_backButton_Clicked(ref(userMap), ref(secondDoseList), ref(waitingList), ref(firstDoseList), ref(stackedWidget));
            // call slot function with value as argument
        });


}

AdminLoginPage::~AdminLoginPage()
{}
void AdminLoginPage::onLoginButtonClicked(unordered_map<string, User>& userMap, queue<User>& waitingList, queue<User>& firstDoseList, vector<User>& secondDoseList, QStackedWidget& stackedWidget)
{
    Admin admin;
    QString id = AdminIDLineEdit->text();
    QString password = AdminPasswordLineEdit->text();
    string admin_id = id.toStdString();
    string admin_password = password.toStdString();
    bool check = admin.AdminLoginPage(admin_id, admin_password);
    if (check == true)
    {
        hide();
        AdminControls* C = new AdminControls(userMap, waitingList, firstDoseList, secondDoseList, stackedWidget);
        C->resize(1000, 631);
        stackedWidget.addWidget(C); //index 1
        stackedWidget.setCurrentWidget(C);
        stackedWidget.show();
    }
    else
    {
        QMessageBox::warning(this, "LOGIN", "incorrect id or password");
    }
}

void AdminLoginPage::on_backButton_Clicked(unordered_map<string, User>& userdata, vector<User>& fullyVaccinated, queue<User>& firstDoseQueue, queue<User>& seconDoseQueue, QStackedWidget& stackedWidget)
{
    hide();
    stackedWidget.setCurrentIndex(0);
    stackedWidget.show();
}
