#pragma once
#include <string>
#include <unordered_map>
#include <queue>
#include <QDate>
#include <vector>

using namespace std;

class User
{
	string fullName;
	string id;
	string password;
	bool male;
	bool female;
	int age;
	string governorate;
	bool isVaccinated;
	int doses;
	QDate appointment;

public:

	User();
	User(string, string, string, string, string, string, string, string);
	User(string fullName, string id, string password, bool male, bool female, int age, string governorate, bool isVaccinated, int doses, QDate appointment);
	void setFullName(string);
	void setPassword(string);
	void setGovernorate(string);
	void setAppointment(string);
	void setAppointmentQDate(QDate);
	void setDoses(string);
	void setIsVaccinated(bool);
	void setAge(string);
	void setID(string);
	void setGender(string male);
	bool operator!=(const User& other) const;
	bool operator==(const User& other) const;
	string getFullName();
	string getId();
	string getPassword();
	bool getMale();
	bool getFemale();
	int getAge();
	string getAppointment();
	QDate getAppointmentQdate();
	string getGovernorate();
	bool getIsVaccinated();
	int getDoses();
	bool static waitForConfirmation(queue<User>&, User);
	int static UserLoginPage(unordered_map<string, User>&, string, string);
	User static UserSignUpPage(unordered_map<string, User>&, queue<User>&, queue<User>&, vector<User>&, string, string, string, bool, bool, int, string, bool, int, QDate);
	QDate static assignAppointment();
	void static addInFirstQueue(queue<User>&, User);
	void  static addInSecondQueue(queue<User>&, User);
	void static addInFullyVaccinated(vector<User>&, User);
	bool static checkAppointmentDate(User, vector<User>&, vector<User>&, queue<User>&, queue<User>&);
	//void viewUser();
	int editUserInfo(unordered_map<string, User>&, queue<User>&, queue<User>&, vector<User>&, int, string&, QString);
	void static deleteUserInfo(unordered_map <string, User>&, queue<User>&, queue<User>&, vector<User>&, User);

	~User();
};

