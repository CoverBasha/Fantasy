#pragma once
#include "Club.h"

//using namespace std;

class Player
{
public:
	std::string name;
	std::string position;
	float price;
	int points = 0;
	int totalpoints = 0;
	Club* club;

	Player();
	Player(std::string name, std::string position, float price,Club* club);
	void resetPoints();
	void setPoints();
	int getPoints();
	void countTotal();
};