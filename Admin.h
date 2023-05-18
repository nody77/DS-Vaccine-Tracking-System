#pragma once
#include "User.h"
#include<string>
#include<unordered_map>
#include<queue>
#include<vector>
using namespace std;

struct PercentageOfGenders
{
	float PercentageOfMales;

	float PercentageOfFemales;
};
class Admin
{
	const string  Admin_ID = "admin01";
	const	string  Admin_Password = "admin";

public:


	string getAdmin_ID();
	string getAdmin_Password();
	bool  AdminLoginPage(string, string);

	void viewUsersByDose(unordered_map<string, User>&, int);




	int NoOf1stDoseUsers(unordered_map<string, User>&);
	int NoOf2ndDoseUsers(unordered_map<string, User>&);


	static vector< User> viewUserWaiting(queue<User>&);


	void deleteAtQueue(queue<User>&, string);
	void deleteUser(unordered_map<string, User>&, queue <User>&, queue <User>&, vector<User>&, string);
	void deleteAllUsers(unordered_map<string, User>&, queue <User>&, queue <User>&, vector<User>&);


	vector<User> viewUsersOrderedByAgeAsc(vector<User>);
	vector<User> viewUsersOrderedByAgeDesc(vector<User>);

	vector<User> ViewAscendingly(unordered_map<string, User>& map);
	vector<User> ViewaDescendingly(unordered_map<string, User>& map);


	double calculateFirstDosePercentage(unordered_map<string, User>&);
	double static calculateSecondDosePercentage(unordered_map<string, User>& userMap);

	PercentageOfGenders PercentageOfMaleAndFemaleRegisters(unordered_map<string, User>&);
	User viewData(unordered_map<string, User>&, string);
	unordered_map<string, User> viewAllUsersData(unordered_map<string, User>&);


};