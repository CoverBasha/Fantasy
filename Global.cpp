#include "Global.h"

std::unordered_map <std::string, Player> Players;
std::vector<League> Leagues;
std::vector<Club> Clubs;
std::vector<User> Users;
std::vector<Admin> Admins;

int current_user = 0;
int auto_id_user = 0;
int auto_id_team = 0;