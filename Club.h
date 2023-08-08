#pragma once
#include <iostream>
#include <string>
#include "League.h"
#include <vector>
#include <unordered_map>
//using namespace std;

class Club
{
public:
	std::string name;
	int id;
	League* league;


	Club();
	Club(std::string name, League* league);
	Club(std::string name, int id, League* league);
};