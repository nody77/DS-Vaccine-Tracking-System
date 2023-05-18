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

    //QDate date1(2023, 5, 6);
    //QDate date2(2023, 5, 5);
    //QDate date3(2023, 5, 7);
    //User u1("Manar Mohamed El-Gamal", "1234567891011", "123", false, true , 19, "Cairo", false , 0 , date1);
    //User u2("Nada Ahmed", "1234567891012", "456", false, true, 21, "Cairo", false , 1 , date2);
    //User u3("Raneem Mohamed", "1234567891013", "789", false, true, 21, "Cairo", true, 2 , date3);
    //User u4("Mennatoullah Mostafa", "1234567891014", "147", false, true, 20, "Cairo", false, 0, date1);
    //User u5("Sama Anwar", "1234567891015", "258", false, true, 21, "Cairo", false, 1, date2);
    //userdata[u1.getId()] = u1;
    //userdata[u2.getId()] = u2;
    //userdata[u3.getId()] = u3;
    //userdata[u4.getId()] = u4;
    //userdata[u5.getId()] = u5;
    //firstDoseQueue.push(u1);
    //firstDoseQueue.push(u4);
    //secondDoseQueue.push(u2);
    //secondDoseQueue.push(u5);
    //fullyVaccinated.push_back(u3);

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