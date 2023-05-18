#pragma once
#include "WelcomePage.h"
#include <string>
#include <unordered_map>
#include <queue>
#include <functional>

using namespace std;

WelcomePage::WelcomePage(unordered_map<string, User>& userMap, vector<User>& fullyVaccinated, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, queue<User>& firstDoseQueue, queue<User>& seconDoseQueue, QStackedWidget& stackedWidget, QWidget* parent) : QMainWindow(parent) 
{
    ui.setupUi(this);

    welcomeMsg = new QLabel("Welcome to our Vaccine Tracking System", this);
    welcomeMsg->move(200, 50);
    welcomeMsg->setFixedWidth(700);
    welcomeMsg->setFixedHeight(50);
    welcomeMsg->setStyleSheet("font: bold 30px;");

    loginButton = new QPushButton("Login", this);
    loginButton->move(420, 300);
    loginButton->setFixedSize(150, 50);
    loginButton->setStyleSheet("font: bold 25px");

    signUpButton = new QPushButton("Sign Up", this);
    signUpButton->move(420, 400);
    signUpButton->setFixedSize(150, 50);
    signUpButton->setStyleSheet("font: bold 25px");

    adminLoginButton = new QPushButton("Admin", this);
    adminLoginButton->move(420, 200);
    adminLoginButton->setFixedSize(150, 50);
    adminLoginButton->setStyleSheet("font: bold 25px");

    exitButton = new QPushButton("Exit", this);
    exitButton->move(420, 500);
    exitButton->setFixedSize(150, 50);
    exitButton->setStyleSheet("font: bold 25px");


    QFont font("Arial", 12);

    loginButton->setFont(font);
    signUpButton->setFont(font);
    adminLoginButton->setFont(font);

    connect(loginButton, &QPushButton::clicked, [this, &stackedWidget, &userMap, &fullyVaccinated, &waitForFirstConfirm, &waitForSecondConfirm, &firstDoseQueue, &seconDoseQueue]() 
    {
        WelcomePage::openLoginPage(ref(userMap), ref(fullyVaccinated), ref(waitForFirstConfirm), ref(waitForSecondConfirm), ref(firstDoseQueue), ref(seconDoseQueue), ref(stackedWidget));
    });

    connect(signUpButton, &QPushButton::clicked, [this, &stackedWidget, &userMap, &fullyVaccinated, &waitForFirstConfirm, &waitForSecondConfirm, &firstDoseQueue, &seconDoseQueue]() 
    {
        WelcomePage::openSignUpPage(ref(userMap), ref(fullyVaccinated), ref(waitForFirstConfirm), ref(waitForSecondConfirm), ref(firstDoseQueue), ref(seconDoseQueue), ref(stackedWidget));
    });

    connect(adminLoginButton, &QPushButton::clicked, [this, &stackedWidget, &userMap, &fullyVaccinated, &firstDoseQueue, &seconDoseQueue]()
    {
        WelcomePage::openAdminLogin(ref(userMap), ref(fullyVaccinated), ref(firstDoseQueue), ref(seconDoseQueue), ref(stackedWidget));
    });

    connect(exitButton, &QPushButton::clicked, [this, &stackedWidget, &userMap, &fullyVaccinated, &firstDoseQueue, &seconDoseQueue, &waitForFirstConfirm, &waitForSecondConfirm]()
    {
        WelcomePage::on_exit_Button(ref(userMap), ref(firstDoseQueue), ref(seconDoseQueue), ref(fullyVaccinated), ref(waitForFirstConfirm), ref(waitForSecondConfirm), ref(stackedWidget));
    });

}

WelcomePage::~WelcomePage()
{

}

void WelcomePage::openLoginPage(unordered_map<string, User>& userMap, vector<User>& fullyVaccinated, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, queue<User>& firstDoseQueue, queue<User>& seconDoseQueue, QStackedWidget& stackedWidget)
{
    Login* loginWindow = new Login(userMap, fullyVaccinated, waitForFirstConfirm, waitForSecondConfirm, firstDoseQueue, seconDoseQueue, stackedWidget);
    loginWindow->show();
    stackedWidget.hide();
}

void WelcomePage::openSignUpPage(unordered_map<string, User>& userMap, vector<User>& fullyVaccinated, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, queue<User>& firstDoseQueue, queue<User>& seconDoseQueue, QStackedWidget& stackedWidget)
{
    SignUp* signUpWindow = new SignUp(userMap, fullyVaccinated, waitForFirstConfirm, waitForSecondConfirm, firstDoseQueue, seconDoseQueue, stackedWidget);
    signUpWindow->show();
    stackedWidget.hide();
}

void WelcomePage::openAdminLogin(unordered_map<string, User>& userMap, vector<User>& fullyVaccinated, queue<User>& firstDoseQueue, queue<User>& seconDoseQueue, QStackedWidget& stackedWidget)
{
    AdminLoginPage* adminLoginWindow = new AdminLoginPage(userMap, firstDoseQueue, seconDoseQueue, fullyVaccinated, stackedWidget);
    adminLoginWindow->show();
    stackedWidget.hide();
}

void WelcomePage::savetofile(unordered_map<string, User>& userdata, queue<User>& first_dose_waiting_list, queue<User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, vector<User>& wait_for_first_confirm, vector<User>& wait_for_second_confirm)
{
    ofstream all_user_data;
    ofstream users_took_no_doses;
    ofstream users_took_one_dose;
    ofstream users_took_two_doses;
    ofstream wait_for_first_confirm_users;
    ofstream wait_for_second_confirm_users;

    string gender;
    string isVaccinated;

    all_user_data.open("all_user_data.txt", ios::trunc);
    users_took_no_doses.open("users_took_no_doses.txt", ios::trunc);
    users_took_one_dose.open("users_took_one_dose.txt", ios::trunc);
    users_took_two_doses.open("users_took_two_doses.txt", ios::trunc);
    wait_for_first_confirm_users.open("wait _for_first_confirm.txt", ios::trunc);
    wait_for_second_confirm_users.open("wait _for_second_confirm.txt", ios::trunc);

    unordered_map <string, User> ::iterator it;

    if (all_user_data.is_open())
    {
        for (it = userdata.begin(); it != userdata.end(); it++)
        {
            if (it->second.getMale() == true)
            {
                gender = "male";
            }
            else
            {
                gender = "female";
            }
            if (it->second.getIsVaccinated() == true)
            {
                isVaccinated = "true";
            }
            else
            {
                isVaccinated = "false";
            }
            all_user_data << it->second.getFullName() << "," << it->first << "," << it->second.getPassword() << "," << gender << "," << it->second.getAge() << "," << it->second.getGovernorate() << "," << isVaccinated << "," << it->second.getDoses() << "," << it->second.getAppointment() << ",\n";
        }
        userdata.clear();
        all_user_data.close();
    }

    if (users_took_no_doses.is_open())
    {
        while (!first_dose_waiting_list.empty())
        {
            if (first_dose_waiting_list.front().getMale() == true)
            {
                gender = "male";
            }
            else
            {
                gender = "female";
            }
            if (first_dose_waiting_list.front().getIsVaccinated() == true)
            {
                isVaccinated = "true";
            }
            else
            {
                isVaccinated = "false";
            }
            users_took_no_doses << first_dose_waiting_list.front().getFullName() << "," << first_dose_waiting_list.front().getId() << "," << first_dose_waiting_list.front().getPassword() << "," << gender << "," << first_dose_waiting_list.front().getAge() << "," << first_dose_waiting_list.front().getGovernorate() << "," << isVaccinated << "," << first_dose_waiting_list.front().getDoses() << "," << first_dose_waiting_list.front().getAppointment() << ",\n";
            first_dose_waiting_list.pop();
        }
        users_took_no_doses.close();
    }

    if (users_took_one_dose.is_open())
    {
        while (!second_dose_waiting_list.empty())
        {
            if (second_dose_waiting_list.front().getMale() == true)
            {
                gender = "male";
            }
            else
            {
                gender = "female";
            }
            if (second_dose_waiting_list.front().getIsVaccinated() == true)
            {
                isVaccinated = "true";
            }
            else
            {
                isVaccinated = "false";
            }
            users_took_one_dose << second_dose_waiting_list.front().getFullName() << "," << second_dose_waiting_list.front().getId() << "," << second_dose_waiting_list.front().getPassword() << "," << gender << "," << second_dose_waiting_list.front().getAge() << "," << second_dose_waiting_list.front().getGovernorate() << "," << isVaccinated << "," << second_dose_waiting_list.front().getDoses() << "," << second_dose_waiting_list.front().getAppointment() << ",\n";
            second_dose_waiting_list.pop();
        }
        users_took_one_dose.close();
    }

    if (users_took_two_doses.is_open())
    {
        if (!full_vaccinated_users.empty())
        {
            int size = full_vaccinated_users.size();
            for (int i = 0; i < size; i++)
            {
                if (full_vaccinated_users[i].getMale() == true)
                {
                    gender = "male";
                }
                else
                {
                    gender = "female";
                }
                if (full_vaccinated_users[i].getIsVaccinated() == true)
                {
                    isVaccinated = "true";
                }
                else
                {
                    isVaccinated = "false";
                }
                users_took_two_doses << full_vaccinated_users[i].getFullName() << "," << full_vaccinated_users[i].getId() << "," << full_vaccinated_users[i].getPassword() << "," << gender << "," << full_vaccinated_users[i].getAge() << "," << full_vaccinated_users[i].getGovernorate() << "," << isVaccinated << "," << full_vaccinated_users[i].getDoses() << "," << full_vaccinated_users[i].getAppointment() << ",\n";
            }
        }
        full_vaccinated_users.clear();
        users_took_two_doses.close();
    }

    if (wait_for_first_confirm_users.is_open())
    {
        if (!wait_for_first_confirm.empty())
        {
            int size = wait_for_first_confirm.size();
            for (int i = 0; i < size; i++)
            {
                if (wait_for_first_confirm[i].getMale() == true)
                {
                    gender = "male";
                }
                else
                {
                    gender = "female";
                }
                if (wait_for_first_confirm[i].getIsVaccinated() == true)
                {
                    isVaccinated = "true";
                }
                else
                {
                    isVaccinated = "false";
                }
                wait_for_first_confirm_users << wait_for_first_confirm[i].getFullName() << "," << wait_for_first_confirm[i].getId() << "," << wait_for_first_confirm[i].getPassword() << "," << gender << "," << wait_for_first_confirm[i].getAge() << "," << wait_for_first_confirm[i].getGovernorate() << "," << isVaccinated << "," << wait_for_first_confirm[i].getDoses() << "," << wait_for_first_confirm[i].getAppointment() << ",\n";
            }
        }
        wait_for_first_confirm.clear();
        wait_for_first_confirm_users.close();
    }

    if (wait_for_second_confirm_users.is_open())
    {
        if (!wait_for_second_confirm.empty())
        {
            int size = wait_for_second_confirm.size();
            for (int i = 0; i < size; i++)
            {
                if (wait_for_second_confirm[i].getMale() == true)
                {
                    gender = "male";
                }
                else
                {
                    gender = "female";
                }
                if (wait_for_second_confirm[i].getIsVaccinated() == true)
                {
                    isVaccinated = "true";
                }
                else
                {
                    isVaccinated = "false";
                }
                wait_for_second_confirm_users << wait_for_second_confirm[i].getFullName() << "," << wait_for_second_confirm[i].getId() << "," << wait_for_second_confirm[i].getPassword() << "," << gender << "," << wait_for_second_confirm[i].getAge() << "," << wait_for_second_confirm[i].getGovernorate() << "," << isVaccinated << "," << wait_for_second_confirm[i].getDoses() << "," << wait_for_second_confirm[i].getAppointment() << ",\n";
            }
        }
        wait_for_second_confirm.clear();
        wait_for_second_confirm_users.close();
    }
}

void WelcomePage::on_exit_Button(unordered_map<string, User>& userdata, queue<User>& first_dose_waiting_list, queue<User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, vector<User>& wait_for_first_confirm, vector<User>& wait_for_second_confirm, QStackedWidget& stackedWidget)
{
    savetofile(userdata, first_dose_waiting_list, second_dose_waiting_list, full_vaccinated_users, wait_for_first_confirm, wait_for_second_confirm);
    stackedWidget.close();
}