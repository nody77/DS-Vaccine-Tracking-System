#include "Admin.h"
#include <iostream>
#include <unordered_map>

using namespace std;

string Admin::getAdmin_ID()
{
    return Admin_ID;
}

string Admin::getAdmin_Password()
{
    return Admin_Password;
}

bool Admin::AdminLoginPage(string ID, string Password)
{

    if (ID == Admin_ID && Password == Admin_Password)
    {


        return true;

    }
    else
    {
        cout << "wrong password";
        return false;

    }


}

void Admin::viewUsersByDose(unordered_map<string, User>& userMap, int dose)
{
    bool found = false;


    unordered_map<string, User>::iterator it;
    for (it = userMap.begin(); it != userMap.end(); it++)
    {

        if (it->second.getDoses() == dose)
        {
            cout << "Users with " << dose << " doses:\n";
            cout << "User ID: " << it->second.getId() << endl;
            cout << "Name: " << it->second.getFullName() << endl;
            cout << "Age: " << it->second.getAge() << endl;
            cout << "Governorate: " << it->second.getGovernorate() << endl;
            cout << "--------------" << endl;

            found = true;
        }
    }

    if (!found) {
        cout << "No users found with " << dose << " doses." << endl;
    }


}



int Admin::NoOf1stDoseUsers(unordered_map<string, User>& userMap)
{
    int counter = 0;
    unordered_map<string, User>::iterator it;
    for (it = userMap.begin(); it != userMap.end(); it++)
    {

        if (it->second.getDoses() == 1)
        {
            counter++;
        }

    }
    return counter;

}
int Admin::NoOf2ndDoseUsers(unordered_map<string, User>& userMap)
{
    int counter = 0;
    for (auto& pair : userMap)
    {
        User& user = pair.second;
        if (user.getDoses() == 2)
        {
            counter++;
        }

    }
    return counter;
}

vector<User> Admin::viewUserWaiting(queue<User>& firstDose)
{
    queue<User> temp = firstDose;
    vector<User> userWaitingVector;
    while (!temp.empty())
    {
        userWaitingVector.emplace_back(temp.front());
        temp.pop();
    }
    return userWaitingVector;


}

//delete element at Queue function
void Admin::deleteAtQueue(queue<User>& Queue, string id)
{
    queue<User> temp;
    while (!Queue.empty()) {
        if (id == Queue.front().getId()) {
            Queue.pop();
        }
        else {
            temp.push(Queue.front());
            Queue.pop();
        }
    }
    while (!temp.empty())
    {
        Queue.push(temp.front());
        temp.pop();
    }
}

void Admin::deleteUser(unordered_map<string, User>& userMap, queue<User>& waitingList, queue<User>& listOfFirstDose, vector<User>& listOfSecondDose, string id)
{
    unordered_map<string, User>::iterator it;

    if (userMap[id].getDoses() == 0) {
        deleteAtQueue(waitingList, id);
    }
    else if (userMap[id].getDoses() == 1) {

        deleteAtQueue(listOfFirstDose, id);
    }
    else if (userMap[id].getDoses() == 2) {
        vector<User>::iterator it = listOfSecondDose.begin();
        int indx = 0;
        for (it; it != listOfSecondDose.end(); it++) {
            if (id == it->getId()) {
                listOfSecondDose.erase(it);
                break;
            }
            indx++;
        }
    }
    userMap.erase(id);
}

void Admin::deleteAllUsers(unordered_map<string, User>& userMap, queue<User>& waitingList, queue<User>& listOfFirstDose, vector<User>& listOfSecondDose)
{
    userMap.clear();
    listOfSecondDose.clear();
    while (!waitingList.empty()) {
        waitingList.pop();
    }
    while (!listOfFirstDose.empty()) {
        listOfFirstDose.pop();
    }
}



vector<User> Admin::viewUsersOrderedByAgeAsc(vector<User> vaccinatedUsers)
{
    vector<User> sortByAge;
    vector<User>::iterator it;
    while (!vaccinatedUsers.empty()) {
        vector<User>::iterator min = vaccinatedUsers.begin();
        it = vaccinatedUsers.begin();
        while (it != vaccinatedUsers.end()) {
            if (it->getAge() < min->getAge()) {
                min = it;
                it++;
            }
            else {
                it++;
            }
        }
        sortByAge.push_back(*min);
        vaccinatedUsers.erase(min);
    }
    return sortByAge;
}

vector<User> Admin::viewUsersOrderedByAgeDesc(vector<User>vaccinatedUsers)
{
    vector<User> sortedAsc = viewUsersOrderedByAgeAsc(vaccinatedUsers);
    vector<User> sortedDesc;
    vector<User>::iterator it;

    for (auto it = sortedAsc.rbegin(); it != sortedAsc.rend(); ++it) {
        sortedDesc.push_back(*it);

    }
    return sortedDesc;
}

double Admin::calculateFirstDosePercentage(unordered_map<string, User>& userMap)
{
    float FirstDosePercentage = 0.0;
    int totalUsers = userMap.size();
    FirstDosePercentage = (float)NoOf1stDoseUsers(userMap) / totalUsers * 100;
    return FirstDosePercentage;

}

double Admin::calculateSecondDosePercentage(unordered_map<string, User>& userMap)
{
    int counter = 0;
    if (userMap.empty())
    {
        return 0;
    }
    else
    {
        for (auto it = userMap.begin(); it != userMap.end(); it++)
        {
            if (it->second.getDoses() == 2)
            {
                counter++;
            }
        }
        return static_cast<double>(counter) / static_cast<double>(userMap.size()) * 100;
    }
}

PercentageOfGenders Admin::PercentageOfMaleAndFemaleRegisters(unordered_map<string, User>& userMap)
{
    int NoOfFemales = 0;
    int NoOfMales = 0;
    for (auto it = userMap.begin(); it != userMap.end(); it++)
    {
        if (it->second.getFemale() == true)
        {
            NoOfFemales++;
        }
        if (it->second.getMale() == true) {
            NoOfMales++;
        }
    }
    PercentageOfGenders PercentageOfGendersRegestered;
    PercentageOfGendersRegestered.PercentageOfFemales = ((float)NoOfFemales / userMap.size()) * 100;
    PercentageOfGendersRegestered.PercentageOfMales = ((float)NoOfMales / userMap.size()) * 100;
    return PercentageOfGendersRegestered;
}

User Admin::viewData(unordered_map<string, User>& userMap, string id)
{
    User UserWithId(userMap[id].getFullName(), id, userMap[id].getPassword(), userMap[id].getMale(), userMap[id].getFemale(), userMap[id].getAge(), userMap[id].getGovernorate(), userMap[id].getIsVaccinated(), userMap[id].getDoses(), userMap[id].getAppointmentQdate());
    return UserWithId;

}

unordered_map<string, User> Admin::viewAllUsersData(unordered_map<string, User>& userMap)
{

    return userMap;
}

//view vaccinated users sort in ascending order function
vector<User> Admin::ViewAscendingly(unordered_map<string, User>& map)

{
    vector<User> vaccinatedUsers;
    vector<User> sortByAge;
    unordered_map<string, User>::iterator itMap;

    for (itMap = map.begin(); itMap != map.end(); itMap++) {
        if (itMap->second.getDoses() == 1 || itMap->second.getDoses() == 2) {
            vaccinatedUsers.push_back(itMap->second);
        }
    }

    while (!vaccinatedUsers.empty()) {
        vector<User>::iterator	it = vaccinatedUsers.begin();
        vector<User>::iterator min = vaccinatedUsers.begin();
        while (it != vaccinatedUsers.end()) {
            if (it->getAge() < min->getAge()) {
                min = it;
                it++;
            }
            else {
                it++;
            }
        }
        sortByAge.push_back(*min);
        vaccinatedUsers.erase(min);
    }

    return sortByAge;
}

//view vaccinated users sort in descending order function
vector<User> Admin::ViewaDescendingly(unordered_map<string, User>& map)
{
    vector<User> sortedAsc = ViewAscendingly(map);
    vector<User> sortedDesc;
    vector<User>::iterator it;
    for (auto it = sortedAsc.rbegin(); it != sortedAsc.rend(); ++it) {
        sortedDesc.push_back(*it);
    }
    return sortedDesc;
}


