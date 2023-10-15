#pragma once
#include "SignUp.h"
#include "WelcomePage.h"
#include "User.h"
#include <iostream>
#include <string>
#include <queue>
#include <sstream>
#include <fstream>
#include <vector>
#include <QtWidgets/QApplication>
#include <unordered_map>
#include <QStackedWidget>
#include <QWidget>

using namespace std;

void readfromfile(unordered_map<string, User>& userdata, queue <User>& first_dose_waiting_list, queue <User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, vector<User>& wait_for_first_confirm, vector<User>& wait_for_second_confirm);

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);

    unordered_map<string, User> userdata;
    queue<User> firstDoseQueue, secondDoseQueue;
    vector<User> waitForFirstConfirm, waitForSecondConfirm, fullyVaccinated;


    readfromfile(userdata, firstDoseQueue, secondDoseQueue, fullyVaccinated, waitForFirstConfirm, waitForSecondConfirm);

    QStackedWidget stackedWidget;
    QPalette palette = stackedWidget.palette();
    palette.setColor(QPalette::Window, QColor("#CBE5FA"));
    stackedWidget.setPalette(palette);
    WelcomePage w(userdata, fullyVaccinated, waitForFirstConfirm, waitForSecondConfirm, firstDoseQueue, secondDoseQueue, stackedWidget);
    //w.show();
    stackedWidget.addWidget(&w);  // index 0
    stackedWidget.resize(1000, 631);
    stackedWidget.show();
    
    return a.exec();
}
void readfromfile(unordered_map<string, User>& userdata, queue <User>& first_dose_waiting_list, queue <User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, vector<User>& wait_for_first_confirm, vector<User>& wait_for_second_confirm)
{
    ifstream all_user_data;
    ifstream users_took_no_doses;
    ifstream users_took_one_dose;
    ifstream users_took_two_doses;
    ifstream wait_for_first_confirm_users;
    ifstream wait_for_second_confirm_users;

    string line;
    string delimiter = ",";
    string substring[9];

    int pos = 0;

    all_user_data.open("all_user_data.txt", ios::in);
    users_took_no_doses.open("users_took_no_doses.txt", ios::in);
    users_took_one_dose.open("users_took_one_dose.txt", ios::in);
    users_took_two_doses.open("users_took_two_doses.txt", ios::in);
    wait_for_first_confirm_users.open("wait _for_first_confirm.txt", ios::in);
    wait_for_second_confirm_users.open("wait _for_second_confirm.txt", ios::in);

    if (all_user_data.is_open())
    {
        while (getline(all_user_data, line, '\n'))
        {
            for (int i = 0; i < 9; i++)
            {
                pos = line.find(delimiter);
                substring[i] = line.substr(0, pos);
                line.erase(0, pos + delimiter.length());
            }
            User user1(substring[0], substring[1], substring[2], substring[3], substring[4], substring[5], substring[7], substring[8]);
            userdata.insert(make_pair(user1.getId(), user1));
        }
        all_user_data.close();
    }

    if (users_took_no_doses.is_open())
    {
        while (getline(users_took_no_doses, line, '\n'))
        {
            for (int i = 0; i < 9; i++)
            {
                pos = line.find(delimiter);
                substring[i] = line.substr(0, pos);
                line.erase(0, pos + delimiter.length());
            }
            User user2(substring[0], substring[1], substring[2], substring[3], substring[4], substring[5], substring[7], substring[8]);
            first_dose_waiting_list.push(user2);
        }
        users_took_no_doses.close();
    }

    if (users_took_one_dose.is_open())
    {
        while (getline(users_took_one_dose, line, '\n'))
        {
            for (int i = 0; i < 9; i++)
            {
                pos = line.find(delimiter);
                substring[i] = line.substr(0, pos);
                line.erase(0, pos + delimiter.length());
            }
            User user3(substring[0], substring[1], substring[2], substring[3], substring[4], substring[5], substring[7], substring[8]);
            second_dose_waiting_list.push(user3);

        }
        users_took_one_dose.close();
    }

    if (users_took_two_doses.is_open())
    {
        while (getline(users_took_two_doses, line, '\n'))
        {
            for (int i = 0; i < 9; i++)
            {
                pos = line.find(delimiter);
                substring[i] = line.substr(0, pos);
                line.erase(0, pos + delimiter.length());
            }
            User user4(substring[0], substring[1], substring[2], substring[3], substring[4], substring[5], substring[7], substring[8]);
            full_vaccinated_users.push_back(user4);
        }
        users_took_two_doses.close();
    }

    if (wait_for_first_confirm_users.is_open())
    {
        while (getline(wait_for_first_confirm_users, line, '\n'))
        {
            for (int i = 0; i < 9; i++)
            {
                pos = line.find(delimiter);
                substring[i] = line.substr(0, pos);
                line.erase(0, pos + delimiter.length());
            }
            User user4(substring[0], substring[1], substring[2], substring[3], substring[4], substring[5], substring[7], substring[8]);
            wait_for_first_confirm.push_back(user4);
        }
        wait_for_first_confirm_users.close();
    }

    if (wait_for_second_confirm_users.is_open())
    {
        while (getline(wait_for_second_confirm_users, line, '\n'))
        {
            for (int i = 0; i < 9; i++)
            {
                pos = line.find(delimiter);
                substring[i] = line.substr(0, pos);
                line.erase(0, pos + delimiter.length());
            }
            User user4(substring[0], substring[1], substring[2], substring[3], substring[4], substring[5], substring[7], substring[8]);
            wait_for_second_confirm.push_back(user4);
        }
        wait_for_second_confirm_users.close();
    }
}
