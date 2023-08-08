#include "Global.h"
#include "Club.h"
#include "Player.h"
#include "League.h"
#include <string>

Club::Club()
{

}

Club::Club(std::string name, League* league)
{
	this->name = name;
	this->league = league;
}

Club::Club(std::string name, int id, League* league)
{

	this->name = name;
	this->id = id;
	this->league = league;

}