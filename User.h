#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Player.h"

//using namespace std;


class User
{
public:
	std::string userName;
	std::string password;
	int id;
	int totalPoint = 0;
	float budget = 100000;
	std::string customName;
	std::vector<std::string> members;


	User();
	std::string getUserName();
	void getPassword();
	void createTeam();
	void buy_footballer();
	Player* getFootballer(std::string name);
	void sell_footballer(std::string footballerName);
	void replace_footballer();
	void displayMyteam();
	void userMenu();

};
