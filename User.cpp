#include "User.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>
#include <regex>
#include <algorithm>
#include <sstream>
using namespace std;

User::User()
{
	this->fullName = "";
	this->id = "";
	this->password = "";
	this->male = false;
	this->female = false;
	this->age = 0;
	this->governorate = "";
	this->doses = 0;
}

bool User::operator!=(const User& other) const {
	return this->fullName != other.fullName ||
		this->id != other.id ||
		this->password != other.password ||
		this->male != other.male ||
		this->female != other.female ||
		this->age != other.age ||
		this->governorate != other.governorate ||
		this->isVaccinated != other.isVaccinated ||
		this->doses != other.doses ||
		this->appointment != other.appointment;
}

bool User::operator==(const User& other) const {
	return this->fullName == other.fullName &&
		this->id == other.id &&
		this->password == other.password &&
		this->male == other.male &&
		this->female == other.female &&
		this->age == other.age &&
		this->governorate == other.governorate &&
		this->isVaccinated == other.isVaccinated &&
		this->doses == other.doses &&
		this->appointment == other.appointment;
}


User::User(string fullName, string id, string password, bool male, bool female, int age, string governorate, bool isVaccinated, int doses, QDate appointment)
{
	this->fullName = fullName;
	this->id = id;
	this->password = password;
	this->male = male;
	this->female = female;
	this->age = age;
	this->governorate = governorate;
	this->isVaccinated = isVaccinated;
	this->doses = doses;
	this->appointment = appointment;
}

User::User(string fullName, string id, string password, string male, string age, string governorate, string doses, string date)
{
	this->fullName = fullName;
	this->id = id;
	this->password = password;
	if (male == "male")
	{
		this->female = false;
		this->male = true;
	}
	else
	{
		this->female = true;
		this->male = false;
	}
	stringstream age2(age);
	stringstream doses2(doses);
	age2 >> this->age;
	this->governorate = governorate;
	doses2 >> this->doses;
	if (this->doses == 2)
	{
		setIsVaccinated("true");
	}
	else
	{
		setIsVaccinated("false");
	}
	QString fulldate2 = QString::fromStdString(date);
	appointment = QDate::fromString(fulldate2, "dd/MM/yyyy");
}


void User::setFullName(string fullName)
{
	this->fullName = fullName;
}

void User::setDoses(string doses)
{
	stringstream doses2(doses);
	doses2 >> this->doses;
}

void User::setAge(string age)
{
	stringstream age2(age);
	age2 >> this->age;
}

void User::setGender(string male)
{
	if (male == "male" || male == "true" || male == "Male" || male == "True")
	{
		this->female = false;
		this->male = true;
	}
	else
	{
		this->female = true;
		this->male = false;
	}
}

void User::setAppointment(string fulldate)
{
	QString fulldate2 = QString::fromStdString(fulldate);
	appointment = QDate::fromString(fulldate2, "dd/MM/yyyy");
}

void User::setAppointmentQDate(QDate appointment) {
	this->appointment = appointment;
}

void User::setPassword(string password)
{
	this->password = password;
}

void User::setGovernorate(string governorate)
{
	this->governorate = governorate;
}

void User::setIsVaccinated(bool isVaccinated) {
	this->isVaccinated = isVaccinated;
}

void User::setID(string id)
{
	this->id = id;
}

string User::getFullName()
{
	return fullName;
}

string User::getId()
{
	return id;
}

string User::getPassword()
{
	return password;
}

bool User::getMale()
{
	return male;
}

bool User::getFemale()
{
	return female;
}

int User::getAge()
{
	return age;
}

string User::getGovernorate()
{
	return governorate;
}

bool User::getIsVaccinated()
{
	return isVaccinated;
}

int User::getDoses()
{
	return doses;
}

QDate User::getAppointmentQdate()
{

	return appointment;
}

string User::getAppointment()
{
	string fulldate;
	QString fulldate2 = appointment.toString("dd/MM/yyyy");
	fulldate = fulldate2.toStdString();
	return fulldate;
}


bool User::waitForConfirmation(queue<User>&, User)
{

	return false;
}

int User::UserLoginPage(unordered_map<string, User>& userdata, string id, string password)
{
	unordered_map <string, User> ::iterator it;
	regex re("\\d+");
	bool id_is_number = regex_match(id, re);
	if (id_is_number && id.size() == 13)
	{
		it = userdata.find(id);
		if (it != userdata.end())
		{
			if (it->second.password == password)
			{
				// Correct login
				return 1;
			}
			else
			{
				//password is wrong
				return 2;
			}
		}
		else
		{
			//id doesn't exist
			return 3;
		}
	}
	else
	{
		//id is less than 13 digit
		return 0;
	}
}

User User::UserSignUpPage(unordered_map <string, User>& userMap, queue<User>& firstDoseQueue, queue<User>& secondDoseQueue, vector<User>& fullyVaccinated, string fullName, string id, string password, bool male, bool female, int age, string governorate, bool isVaccinated, int doses, QDate appointment)
{
	User user(fullName, id, password, male, female, age, governorate, isVaccinated, doses, appointment);
	userMap.insert(make_pair(user.getId(), user));
	if (doses == 0) {
		addInFirstQueue(firstDoseQueue, user);
	}
	else if (doses == 1) {
		addInSecondQueue(secondDoseQueue, user);
	}
	else {
		user.isVaccinated = true;
		addInFullyVaccinated(fullyVaccinated, user);
	}

	return user;
}

QDate User::assignAppointment()
{
	QDate currentDate = QDate::currentDate();
	QDate tomorrowDate = currentDate.addDays(1);
	return tomorrowDate;
}

void User::addInFirstQueue(queue<User>& firstDoseQueue, User user)
{
	firstDoseQueue.push(user);
}

void User::addInSecondQueue(queue<User>& secondDoseQueue, User user)
{
	secondDoseQueue.push(user);
}

bool User::checkAppointmentDate(User user, vector<User>& waitForFirstConfirm, vector<User>& waitForSecondConfirm, queue<User>& firstDoseQueue, queue<User>& secondDoseQueue)
{
	QDate currentdate = QDate::currentDate();
	QDate assignedDate = user.appointment;


	if (user.doses == 0 && assignedDate <= currentdate) {

		if (!waitForFirstConfirm.empty()) {

			auto it = find_if(waitForFirstConfirm.begin(), waitForFirstConfirm.end(), [&user](User& user1) {
				return user1.getId() == user.getId();
				});

			if (it != waitForFirstConfirm.end()) {
				return true;
			}
		}
		else {
			while (firstDoseQueue.front() != user) {

				waitForFirstConfirm.push_back(firstDoseQueue.front());
				firstDoseQueue.pop();
			}
			waitForFirstConfirm.push_back(firstDoseQueue.front());
			firstDoseQueue.pop();
			return true;
		}
	}
	else if (user.doses == 1 && assignedDate <= currentdate) {

		if (!waitForSecondConfirm.empty()) {

			auto it = find_if(waitForSecondConfirm.begin(), waitForSecondConfirm.end(), [&user](User& user1) {
				return user1.getId() == user.getId();
				});

			if (it != waitForSecondConfirm.end()) {
				return true;
			}
		}
		else {
			
			while (secondDoseQueue.front() != user) {

				waitForSecondConfirm.push_back(secondDoseQueue.front());
				secondDoseQueue.pop();
			}
			waitForSecondConfirm.push_back(secondDoseQueue.front());
			secondDoseQueue.pop();
			return true;
		}

	}
	return false;
}

int User::editUserInfo(unordered_map<string, User>& userdata, queue<User>& first_dose_waiting_list, queue<User>& second_dose_waiting_list, vector<User>& full_vaccinated_users, int flag, string& id, QString changed_item)
{
	unordered_map <string, User> ::iterator it;
	vector <User>::iterator it2;
	it = userdata.find(id);
	if (flag == 1)
	{
		//change id
		regex re("\\d+");
		string newID = changed_item.toStdString();
		if (newID == id)
		{
			return 2;
		}
		unordered_map <string, User> ::iterator itnewid;
		bool id_is_number = regex_match(newID, re);
		if (id_is_number && id.size() == 13)
		{
			itnewid = userdata.find(newID);
			if (itnewid == userdata.end())
			{
				string gender;
				if (it->second.male == true)
				{
					gender = "true";
				}
				else
				{
					gender = "false";
				}
				string age = to_string(it->second.age);
				string doses = to_string(it->second.doses);
				User usertemp(it->second.fullName, newID, it->second.password, gender, age, it->second.governorate, doses, it->second.getAppointment());
				userdata.erase(id);
				userdata.insert(make_pair(newID, usertemp));
				if (usertemp.doses == 0)
				{
					queue <User> temp;
					while (!first_dose_waiting_list.empty())
					{
						if (first_dose_waiting_list.front().getId() == id)
						{
							first_dose_waiting_list.front().setID(newID);
							temp.push(first_dose_waiting_list.front());
							first_dose_waiting_list.pop();
						}
						else
						{
							temp.push(first_dose_waiting_list.front());
							first_dose_waiting_list.pop();
						}
					}
					while (!temp.empty())
					{
						first_dose_waiting_list.push(temp.front());
						temp.pop();
					}
				}
				else if (usertemp.doses == 1)
				{
					queue <User> temp;
					while (!second_dose_waiting_list.empty())
					{
						if (second_dose_waiting_list.front().getId() == id)
						{
							second_dose_waiting_list.front().setID(newID);
							temp.push(second_dose_waiting_list.front());
							second_dose_waiting_list.pop();
						}
						else
						{
							temp.push(second_dose_waiting_list.front());
							second_dose_waiting_list.pop();
						}
					}
					while (!temp.empty())
					{
						second_dose_waiting_list.push(temp.front());
						temp.pop();
					}

				}
				else
				{
					for (it2 = full_vaccinated_users.begin(); it2 != full_vaccinated_users.end(); it2++)
					{
						if (id == it2->getId())
						{
							break;
						}
					}
					it2->setID(newID);
				}
				id = newID;
				return 0;
			}
			else
			{
				// id already exist
				return 1;
			}
		}
	}
	else if (flag == 2)
	{
		// change name
		string newName = changed_item.toStdString();
		if (newName == it->second.fullName)
		{
			return 2;
		}
		it->second.fullName = newName;
		if (it->second.doses == 0)
		{
			queue <User> temp;
			while (!first_dose_waiting_list.empty())
			{
				if (first_dose_waiting_list.front().getId() == id)
				{
					first_dose_waiting_list.front().setFullName(newName);
					temp.push(first_dose_waiting_list.front());
					first_dose_waiting_list.pop();
				}
				else
				{
					temp.push(first_dose_waiting_list.front());
					first_dose_waiting_list.pop();
				}
			}
			while (!temp.empty())
			{
				first_dose_waiting_list.push(temp.front());
				temp.pop();
			}
		}
		else if (it->second.doses == 1)
		{
			queue <User> temp;
			while (!second_dose_waiting_list.empty())
			{
				if (second_dose_waiting_list.front().getId() == id)
				{
					second_dose_waiting_list.front().setFullName(newName);
					temp.push(second_dose_waiting_list.front());
					second_dose_waiting_list.pop();
				}
				else
				{
					temp.push(second_dose_waiting_list.front());
					second_dose_waiting_list.pop();
				}
			}
			while (!temp.empty())
			{
				second_dose_waiting_list.push(temp.front());
				temp.pop();
			}
		}
		else
		{
			for (it2 = full_vaccinated_users.begin(); it2 != full_vaccinated_users.end(); it2++)
			{
				if (id == it2->getId())
				{
					break;
				}
			}
			it2->fullName = newName;
		}
		return 0;

	}
	else if (flag == 3)
	{
		// change password
		string newPassword = changed_item.toStdString();
		if (newPassword == it->second.getPassword())
		{
			return 2;
		}
		it->second.password = newPassword;
		if (it->second.doses == 0)
		{
			queue <User> temp;
			while (!first_dose_waiting_list.empty())
			{
				if (first_dose_waiting_list.front().getId() == id)
				{
					first_dose_waiting_list.front().setPassword(newPassword);
					temp.push(first_dose_waiting_list.front());
					first_dose_waiting_list.pop();
				}
				else
				{
					temp.push(first_dose_waiting_list.front());
					first_dose_waiting_list.pop();
				}
			}
			while (!temp.empty())
			{
				first_dose_waiting_list.push(temp.front());
				temp.pop();
			}
		}
		else if (it->second.doses == 1)
		{
			queue <User> temp;
			while (!second_dose_waiting_list.empty())
			{
				if (second_dose_waiting_list.front().getId() == id)
				{
					second_dose_waiting_list.front().setPassword(newPassword);
					temp.push(second_dose_waiting_list.front());
					second_dose_waiting_list.pop();
				}
				else
				{
					temp.push(second_dose_waiting_list.front());
					second_dose_waiting_list.pop();
				}
			}
			while (!temp.empty())
			{
				second_dose_waiting_list.push(temp.front());
				temp.pop();
			}

		}
		else
		{
			for (it2 = full_vaccinated_users.begin(); it2 != full_vaccinated_users.end(); it2++)
			{
				if (id == it2->getId())
				{
					break;
				}
			}
			it2->password = newPassword;
		}
		return 0;

	}
	else if (flag == 4)
	{
		// change doses
		string newnumberofdoses = changed_item.toStdString();
		if ((doses == 0 && newnumberofdoses == "0") || (doses == 1 && newnumberofdoses == "1") || (doses == 2 && newnumberofdoses == "2"))
		{
			//number of doses did not change
			return 2;
		}
		else if (doses == 0)
		{
			queue <User> temp;
			while (!first_dose_waiting_list.empty())
			{
				if (first_dose_waiting_list.front().getId() == id)
				{
					first_dose_waiting_list.pop();
				}
				else
				{
					temp.push(first_dose_waiting_list.front());
					first_dose_waiting_list.pop();
				}
			}
			while (!temp.empty())
			{
				first_dose_waiting_list.push(temp.front());
				temp.pop();
			}
			if (newnumberofdoses == "1")
			{
				it->second.setDoses(newnumberofdoses);
				QDate newdate = assignAppointment();
				it->second.appointment = newdate;
				second_dose_waiting_list.push(it->second);
			}
			else if (newnumberofdoses == "2")
			{
				it->second.setDoses(newnumberofdoses);
				it->second.isVaccinated = true;
				it->second.setAppointment(" ");
				full_vaccinated_users.push_back(it->second);
			}
			return 0;
		}
		else if (doses == 1)
		{
			queue <User> temp;
			while (!second_dose_waiting_list.empty())
			{
				if (second_dose_waiting_list.front().getId() == id)
				{
					second_dose_waiting_list.pop();
				}
				else
				{
					temp.push(second_dose_waiting_list.front());
					second_dose_waiting_list.pop();
				}
			}
			while (!temp.empty())
			{
				second_dose_waiting_list.push(temp.front());
				temp.pop();
			}
			if (newnumberofdoses == "0")
			{
				it->second.setDoses(newnumberofdoses);
				QDate newdate = assignAppointment();
				it->second.appointment = newdate;
				first_dose_waiting_list.push(it->second);
			}
			else if (newnumberofdoses == "2")
			{
				it->second.setDoses(newnumberofdoses);
				it->second.isVaccinated = true;
				it->second.setAppointment(" ");
				full_vaccinated_users.push_back(it->second);
			}
			return 0;
		}
		else if (doses == 2)
		{
			for (it2 = full_vaccinated_users.begin(); it2 != full_vaccinated_users.end(); it2++)
			{
				if (id == it2->getId())
				{
					full_vaccinated_users.erase(it2);
					break;
				}
			}
			if (newnumberofdoses == "1")
			{
				it->second.setDoses(newnumberofdoses);
				QDate newdate = assignAppointment();
				it->second.appointment = newdate;
				it->second.isVaccinated = false;
				second_dose_waiting_list.push(it->second);

			}
			else if (newnumberofdoses == "0")
			{
				it->second.setDoses(newnumberofdoses);
				QDate newdate = assignAppointment();
				it->second.appointment = newdate;
				it->second.isVaccinated = false;
				first_dose_waiting_list.push(it->second);

			}
			return 0;
		}
	}
	else if (flag == 5)
	{
		// change age
		string newAge = changed_item.toStdString();
		stringstream newage2(newAge);
		int newage3;
		newage2 >> newage3;
		if (newage3 == it->second.getAge())
		{
			return 2;
		}
		it->second.setAge(newAge);
		if (it->second.doses == 0)
		{
			queue <User> temp;
			while (!first_dose_waiting_list.empty())
			{
				if (first_dose_waiting_list.front().getId() == id)
				{
					first_dose_waiting_list.front().setAge(newAge);
					temp.push(first_dose_waiting_list.front());
					first_dose_waiting_list.pop();
				}
				else
				{
					temp.push(first_dose_waiting_list.front());
					first_dose_waiting_list.pop();
				}
			}
			while (!temp.empty())
			{
				first_dose_waiting_list.push(temp.front());
				temp.pop();
			}
		}
		else if (it->second.doses == 1)
		{
			queue <User> temp;
			while (!second_dose_waiting_list.empty())
			{
				if (second_dose_waiting_list.front().getId() == id)
				{
					second_dose_waiting_list.front().setAge(newAge);
					temp.push(second_dose_waiting_list.front());
					second_dose_waiting_list.pop();
				}
				else
				{
					temp.push(second_dose_waiting_list.front());
					second_dose_waiting_list.pop();
				}
			}
			while (!temp.empty())
			{
				second_dose_waiting_list.push(temp.front());
				temp.pop();
			}

		}
		else
		{
			for (it2 = full_vaccinated_users.begin(); it2 != full_vaccinated_users.end(); it2++)
			{
				if (id == it2->getId())
				{
					break;
				}
			}
			it2->setAge(newAge);
		}
		return 0;

	}
	else if (flag == 6)
	{
		// change gender
		string newGender = changed_item.toStdString();
		string oldgender;
		if (it->second.getMale())
		{
			oldgender = "Male";
		}
		else
		{
			oldgender = "Female";
		}
		if (oldgender == newGender)
		{
			return 2;
		}
		it->second.setGender(newGender);
		if (it->second.doses == 0)
		{
			queue <User> temp;
			while (!first_dose_waiting_list.empty())
			{
				if (first_dose_waiting_list.front().getId() == id)
				{
					first_dose_waiting_list.front().setGender(newGender);
					temp.push(first_dose_waiting_list.front());
					first_dose_waiting_list.pop();
				}
				else
				{
					temp.push(first_dose_waiting_list.front());
					first_dose_waiting_list.pop();
				}
			}
			while (!temp.empty())
			{
				first_dose_waiting_list.push(temp.front());
				temp.pop();
			}
		}
		else if (it->second.doses == 1)
		{
			queue <User> temp;
			while (!second_dose_waiting_list.empty())
			{
				if (second_dose_waiting_list.front().getId() == id)
				{
					second_dose_waiting_list.front().setGender(newGender);
					temp.push(second_dose_waiting_list.front());
					second_dose_waiting_list.pop();
				}
				else
				{
					temp.push(second_dose_waiting_list.front());
					second_dose_waiting_list.pop();
				}
			}
			while (!temp.empty())
			{
				second_dose_waiting_list.push(temp.front());
				temp.pop();
			}

		}
		else
		{
			for (it2 = full_vaccinated_users.begin(); it2 != full_vaccinated_users.end(); it2++)
			{
				if (id == it2->getId())
				{
					break;
				}
			}
			it2->setGender(newGender);
		}
		return 0;

	}
	else
	{
		// change governorate
		string newGovernorate = changed_item.toStdString();
		if (newGovernorate == it->second.getGovernorate())
		{
			return 2;
		}
		it->second.governorate = newGovernorate;
		if (it->second.doses == 0)
		{
			queue <User> temp;
			while (!first_dose_waiting_list.empty())
			{
				if (first_dose_waiting_list.front().getId() == id)
				{
					first_dose_waiting_list.front().setGovernorate(newGovernorate);
					temp.push(first_dose_waiting_list.front());
					first_dose_waiting_list.pop();
				}
				else
				{
					temp.push(first_dose_waiting_list.front());
					first_dose_waiting_list.pop();
				}
			}
			while (!temp.empty())
			{
				first_dose_waiting_list.push(temp.front());
				temp.pop();
			}
		}
		else if (it->second.doses == 1)
		{
			queue <User> temp;
			while (!second_dose_waiting_list.empty())
			{
				if (second_dose_waiting_list.front().getId() == id)
				{
					second_dose_waiting_list.front().setGovernorate(newGovernorate);
					temp.push(second_dose_waiting_list.front());
					second_dose_waiting_list.pop();
				}
				else
				{
					temp.push(second_dose_waiting_list.front());
					second_dose_waiting_list.pop();
				}
			}
			while (!temp.empty())
			{
				second_dose_waiting_list.push(temp.front());
				temp.pop();
			}

		}
		else
		{
			for (it2 = full_vaccinated_users.begin(); it2 != full_vaccinated_users.end(); it2++)
			{
				if (id == it2->getId())
				{
					break;
				}
			}
			it2->governorate = newGovernorate;
		}

	}
	return 0;

}

void  User::deleteUserInfo(unordered_map <string, User>& userMap, queue<User>& firstDoseQueue, queue<User>& secondDoseQueue, vector<User>& fullyVaccinated, User user)
{
	queue<User> temp;
	if (user.doses == 0) {
		//firstDoseQueue.
		while (!(firstDoseQueue.empty())) {
			if (firstDoseQueue.front().getId() != user.getId()) {

				temp.push(firstDoseQueue.front());
				firstDoseQueue.pop();
			}
			else {
				firstDoseQueue.pop();
			}
		}
		while (!temp.empty()) {
			firstDoseQueue.push(temp.front());
			temp.pop();
		}
	}
	else if (user.doses == 1) {

		while (!(secondDoseQueue.empty())) {
			if (secondDoseQueue.front().getId() != user.getId()) {

				temp.push(secondDoseQueue.front());
				secondDoseQueue.pop();
			}
			else {
				secondDoseQueue.pop();
			}
		}
		while (!temp.empty()) {
			secondDoseQueue.push(temp.front());
			temp.pop();
		}

	}
	else {
		auto newEnd = remove(fullyVaccinated.begin(), fullyVaccinated.end(), user);
		fullyVaccinated.erase(newEnd, fullyVaccinated.end());
	}

	userMap.erase(user.id);

}

void User::addInFullyVaccinated(vector<User>& fullyVaccinated, User user)
{
	user.setIsVaccinated(true);
	fullyVaccinated.push_back(user);
}

User::~User()
{
	
}
