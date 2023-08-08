#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
//using namespace std;
class Admin
{
public:
	std::string adminName;
	std::string password;

	Admin();
	std::string getAdminName();
	void getPassword();
	void removeFootballer();
	void addFootballer();
	void addTeam();
	void removeTeam();
	void adminMenu();
};