#pragma once
#include <iostream>
#include <string>
#include "Player.h"
#include "Club.h"
#include "User.h"
#include "League.h"
#include <unordered_map>
#include "Admin.h"
//using namespace std;

extern std::unordered_map <std::string, Player> Players;
extern std::vector<League> Leagues;
extern std::vector<Club> Clubs;
extern std::vector<User> Users;
extern std::vector<Admin> Admins;

extern int current_user;
extern int auto_id_user;
extern int auto_id_team;

//inline Footballer fb;