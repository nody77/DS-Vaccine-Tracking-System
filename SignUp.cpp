#include "SignUp.h"
#include <QString>
#include <QPushButton>
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QButtonGroup>
#include <QVBoxLayout>
#include "UserView.h"

SignUp::SignUp(unordered_map<string, User>& userdata, vector<User>& fullyVaccinated, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, queue<User>& firstDoseQueue, queue<User>& seconDoseQueue, QStackedWidget& stackedWidget, QWidget* parent): QMainWindow(parent)
{
    ui.setupUi(this);

    QFont font("Arial", 12);

    QPushButton* submitButton = new QPushButton("Submit", this);
    submitButton->move(520, 450);
    submitButton->setFixedSize(100, 50);
    submitButton->setFont(font);

    ui.passField->setEchoMode(QLineEdit::EchoMode::Password);

    backButton = new QPushButton("Back", this);
    backButton->move(320, 450);
    backButton->setFixedSize(100, 50);
    backButton->setFont(font);

    connect(submitButton, &QPushButton::clicked, [this, &stackedWidget, &userdata, &fullyVaccinated, &waitForFirstConfirm, &waitForSecondConfirm, &firstDoseQueue, &seconDoseQueue]()
        {
            // use lambda function to capture value
            on_submitButton_Clicked(ref(userdata), ref(fullyVaccinated), ref(waitForFirstConfirm), ref(waitForSecondConfirm), ref(firstDoseQueue), ref(seconDoseQueue), ref(stackedWidget));
            // call slot function with value as argument
        });

    connect(backButton, &QPushButton::clicked, [this, &stackedWidget, &userdata, &fullyVaccinated, &waitForFirstConfirm, &waitForSecondConfirm, &firstDoseQueue, &seconDoseQueue]()
        {
            // use lambda function to capture value
            on_backButton_Clicked(ref(userdata), ref(fullyVaccinated), ref(waitForFirstConfirm), ref(waitForSecondConfirm), ref(firstDoseQueue), ref(seconDoseQueue), ref(stackedWidget));
            // call slot function with value as argument
        });

}



SignUp::~SignUp()
{

}

bool SignUp::isIDValid(QLineEdit* inputField)
{
    QString inputText = inputField->text();
    // Check if the input is 13 digits
    QRegularExpression regex("\\d{13}");
    QRegularExpressionMatch match = regex.match(inputText);

    return match.hasMatch();
}


// Function to check if all the submitted data is valid in order to submit it

void SignUp::on_submitButton_Clicked(unordered_map<string, User>& userMap, vector<User>& fullyVaccinated, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, queue<User>& firstDoseQueue, queue<User>& secondDoseQueue, QStackedWidget& stackedWidget)
{
    // Get the text from the input field
    bool IDValid = isIDValid(ui.idField);

    inputs[0] = ui.nameField;   // Name Field
    inputs[1] = ui.passField;   // Password
    ID = ui.idField->text().toStdString();
    int numInputs = 2;
    bool areFieldsFilled = isInputFilled(inputs, numInputs);
    bool idUnique = isIdDuplicate(userMap, ID);

    if (IDValid && areFieldsFilled && idUnique) {

        FULLNAME = ui.nameField->text().toStdString();
        PASSWORD = ui.passField->text().toStdString();
        GENDER = ui.genderCombo->currentText().toStdString();

        if (GENDER == "Male") {
            MALE = true;
            FEMALE = false;
        }
        else {
            MALE = false;
            FEMALE = true;
        }
        AGE = ui.ageBox->value();
        GOVERNORATE = ui.govCombo->currentText().toStdString();
        DOSES = ui.dosageBox->value();
        if (DOSES == 2) {
            isVACCINATED = true;
            APPOINTMENT = QDate();
        }
        else {
            isVACCINATED = false;
            APPOINTMENT = User::assignAppointment();
        }
        User user = User::UserSignUpPage(userMap, firstDoseQueue, secondDoseQueue, fullyVaccinated, FULLNAME, ID, PASSWORD, MALE, FEMALE, AGE, GOVERNORATE, isVACCINATED, DOSES, APPOINTMENT);
        userViewWindow = new UserView(userMap, fullyVaccinated, waitForFirstConfirm, waitForSecondConfirm, firstDoseQueue, secondDoseQueue, stackedWidget, user, false, ID);  // index 1
        stackedWidget.addWidget(userViewWindow);
        stackedWidget.setCurrentWidget(userViewWindow);
        stackedWidget.show();
        hide();
    }
    else {
        // Input is invalid, show an error message to the user
        if (IDValid && areFieldsFilled && !idUnique) { //done
            QMessageBox::warning(this, "Invalid Input", "Please enter a valid Id in the National ID field.");
        }
        else if (IDValid && !areFieldsFilled && idUnique) { //done
            QMessageBox::warning(this, "Invalid Input", "Please enter the missing field(s).");
        }
        else if (IDValid && !areFieldsFilled && !idUnique) { //done
            QMessageBox::warning(this, "Invalid Input", "Please enter the missing field(s) and a valid Id in the National ID field.");
        }
        else if (!IDValid && areFieldsFilled && idUnique) { //done
            QMessageBox::warning(this, "Invalid Input", "Please enter 13 digits in the National ID field.");
        }
        else if (!IDValid && areFieldsFilled && !idUnique) { //done
            QMessageBox::warning(this, "Invalid Input", "Please enter 13 valid digits in the National ID field.");
        }
        else if (!IDValid && !areFieldsFilled && idUnique) { //done
            QMessageBox::warning(this, "Invalid Input", "Please enter 13 valid digits in the National ID field and enter the missing field(s).");
        }
        else {
            QMessageBox::warning(this, "Invalid Input", "Please enter 13 valid digits in the National ID field and enter the missing field(s).");
        }
    }
}

// Function to check that the text input fields are filled

bool SignUp::isInputFilled(QLineEdit* inputs[], int numInputs) {

    bool allInputsFilled = true;
    for (int i = 0; i < numInputs; i++) {
        if (inputs[i]->text().isEmpty()) {
            allInputsFilled = false;
            break;
        }
    }
    return allInputsFilled;
}

// Function to check that the ID is not already registered

bool SignUp::isIdDuplicate(unordered_map <string, User>& userMap, string id) {

    bool idUnique;
    unordered_map <string, User> ::iterator it;
    it = userMap.find(id);
    if (it == userMap.end()) {
        idUnique = true;
    }
    else {
        idUnique = false;
    }
    return idUnique;
}

void SignUp::on_backButton_Clicked(unordered_map<string, User>&, vector<User>&, vector<User>&, vector<User>&, queue<User>&, queue<User>&, QStackedWidget& stackedWidget)
{
    hide();
    stackedWidget.setCurrentIndex(0);
    stackedWidget.show();
}
