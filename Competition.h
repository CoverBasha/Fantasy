#pragma once
#include "User.h"
#include "Global.h"
class Competition
{
public:
	std::string name = "Premier_League";

	Competition();
	void calcPoint();
	void top3();
	void sort(std::vector<User>& u);
	void top1();

};