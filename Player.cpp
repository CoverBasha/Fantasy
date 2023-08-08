#include <iostream>
#include <string>
#include "Player.h"
#include <cstdlib>
#include <time.h>
#include "Global.h"

//using namespace std;

Player::Player()
{

}

Player::Player(std::string name, std::string position, float price, Club* club)
{
	this->name = name;
	this->position = position;
	this->price = price;
	this->club = club;
}

void Player::setPoints()
{
	srand(time(NULL));
	points += rand() % 10;
}

void Player::resetPoints()
{
	points = 0;
}

int Player::getPoints()
{
	return points;

}

void Player::countTotal()
{

	totalpoints += points;
}