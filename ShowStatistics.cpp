#include "ShowStatistics.h"
#include "Admin.h"
#include <string>

QString malesPercentage;
QString femalesPercentage;

ShowStatistics::ShowStatistics(unordered_map<string, User>& userMap, QStackedWidget& stackedWidget, QWidget* parent): QMainWindow(parent)
{
    ui.setupUi(this);
    PercentageOf1stDose = new QPushButton("Percentage Of 1st Dose", this);
    PercentageOf1stDose->move(60, 70);
    PercentageOf1stDose->setStyleSheet("color:royalblue;font:bold 17px;");
    PercentageOf1stDose->setFixedWidth(200);
    PercentageOf1stDose->setFixedHeight(40);

    PercentageOf2ndDose = new QPushButton("Percentage of 2nd Dose", this);
    PercentageOf2ndDose->setGeometry(60, 150, 275, 40);
    PercentageOf2ndDose->setStyleSheet("color:royalblue;font : bold ; font-size : 17px;");
    PercentageOf2ndDose->setFixedWidth(200);
    PercentageOf2ndDose->setFixedHeight(40);

    PercentageOf2ndDoseTextEdit = new QTextEdit(this); // Create a new QTextEdit object
    PercentageOf2ndDoseTextEdit->setGeometry(300, 150, 105, 40); // Set the position and size of the text edit
    PercentageOf2ndDoseTextEdit->setStyleSheet("font : bold ; font-size : 15px ; height : 1500px ; width 200px;");
    PercentageOf2ndDoseTextEdit->setReadOnly(true);
    PercentageOf2ndDoseTextEdit->hide();


    PercentageOfGender = new QPushButton("Percentage Of Gender", this);

    PercentageOfGender->move(60, 230);
    PercentageOfGender->setStyleSheet("color:royalblue;font:bold 17px;");
    PercentageOfGender->setFixedWidth(200);
    PercentageOfGender->setFixedHeight(40);



    PercentageOf1stDoseTextEdit = new QTextEdit(this);
    PercentageOf1stDoseTextEdit->move(300, 70);
    PercentageOf1stDoseTextEdit->setReadOnly(true);
    PercentageOf1stDoseTextEdit->hide();
    PercentageOf1stDoseTextEdit->setStyleSheet("font : bold ; font-size : 15px ; height : 1500px ; width 200px;");

    malesLabel = new QLabel("the percentage of Males = ", this);
    malesLabel->move(300, 230);
    malesLabel->setFixedWidth(160);
    malesLabel->hide();
    malesLabel->setStyleSheet("font : bold ;");
    viewMalesPercentageTextEdit = new QTextEdit(this);
    viewMalesPercentageTextEdit->move(450, 230);
    viewMalesPercentageTextEdit->setStyleSheet("font : bold ; font-size : 15px ; height : 1500px ; width 200px;");
    viewMalesPercentageTextEdit->setReadOnly(true);
    viewMalesPercentageTextEdit->hide();

    femalesLabel = new QLabel("the percentage of Females =", this);
    femalesLabel->move(295, 270);
    femalesLabel->setFixedWidth(160);
    femalesLabel->hide();
    femalesLabel->setStyleSheet("font : bold ;");

    viewFemalesPercentageTextEdit = new QTextEdit(this);
    viewFemalesPercentageTextEdit->move(450, 270);
    viewFemalesPercentageTextEdit->setStyleSheet("font : bold ; font-size : 15px ; height : 1500px ; width 200px;");
    viewFemalesPercentageTextEdit->setReadOnly(true);
    viewFemalesPercentageTextEdit->hide();

    BackButton = new QPushButton("Back", this);
    BackButton->move(500, 580);
    BackButton->setStyleSheet("font-size:16px;");

    connect(PercentageOf1stDose, &QPushButton::clicked, [this, &userMap, &stackedWidget]()
        {

            onPercentageOf1stDoseButtonClicked(ref(userMap), ref(stackedWidget));

        });

    connect(PercentageOfGender, &QPushButton::clicked, [this, &userMap, &stackedWidget]() {
        onviewMailAndFemailPercentageButtonClicked(ref(userMap), ref(stackedWidget));
        });


    connect(PercentageOf2ndDose, &QPushButton::clicked, [this, &userMap, &stackedWidget]()
        {
            onPercentageOf2ndDoseButtonClicked(ref(userMap), ref(stackedWidget));
        });

    connect(BackButton, &QPushButton::clicked, [this, &userMap, &stackedWidget]()
        {

            onBackButtonclicked(ref(userMap), ref(stackedWidget));

        });

}


ShowStatistics::~ShowStatistics()
{}
void ShowStatistics::onBackButtonclicked(unordered_map<string, User>& userMap, QStackedWidget& stackedWidget)
{
    hide();
    stackedWidget.setCurrentIndex(1);
    stackedWidget.show();
}
inline void ShowStatistics::onviewMailAndFemailPercentageButtonClicked(unordered_map<string, User>& userMap, QStackedWidget& stackedWidget)
{
    Admin admin;

    PercentageOfGenders num = admin.PercentageOfMaleAndFemaleRegisters(userMap);
    malesLabel->show();
    femalesLabel->show();
    viewMalesPercentageTextEdit->show();
    viewFemalesPercentageTextEdit->show();

    malesPercentage = QString::number(num.PercentageOfMales);
    femalesPercentage = QString::number(num.PercentageOfFemales);



    viewMalesPercentageTextEdit->setText(malesPercentage + " %");

    viewFemalesPercentageTextEdit->setText(femalesPercentage + " %");
}
inline void ShowStatistics::onPercentageOf2ndDoseButtonClicked(unordered_map<string, User>& userMap, QStackedWidget& stackedWidget)
{
    double result = Admin::calculateSecondDosePercentage(userMap);
    string str = to_string(result);
    QString qstr = QString::fromStdString(str);
    PercentageOf2ndDoseTextEdit->setText(qstr + " %");
    PercentageOf2ndDoseTextEdit->show();
}
inline void ShowStatistics::onPercentageOf1stDoseButtonClicked(unordered_map<string, User>& userMap, QStackedWidget& stackedWidget)
{
    Admin a;


    double perc_of_1st_dose = a.calculateFirstDosePercentage(userMap);

    QString myString = QString::number(perc_of_1st_dose) + "%";

    PercentageOf1stDoseTextEdit->setText(myString);
    PercentageOf1stDoseTextEdit->show();

}
