#pragma once
#include <iostream>
#include <string>
#include "Global.h"
#include <vector>
#include"Player.h"
#include "User.h"
#include "Club.h"
#include "League.h"
#include "Competition.h"

//using namespace std;

User::User()
{
}

std::string User::getUserName()
{
	getline(std::cin, userName);
	return userName;
}
//
//void User::getPassword()
//{
//	getline(std::cin, password);
//}
//
//void User::createTeam() {
//
//	std::cout << "\t\t\t(Premier league)" << std::endl;
//	std::cout << "Enter the name of the team: ";
//	std::cin.ignore();
//	getline(std::cin, Users[current_user].customName);
//
//	std::cout << "You need to at least have 5 footballers to be able to join the competition." << std::endl;
//	buy_footballer();
//}
//
//Player* User::getFootballer(std::string name) 
//{
//	if (Players.find(name) == Players.end()) 
//	{
//		std::cout << "This player doesn't exist." << std::endl;
//		return NULL;
//	}
//
//
//	Player value = Players.find(name)->second;
//	std::cout << "Name: " << value.Name << "\t\t Team: " << value.leagueTeam_name << std::endl;
//	std::cout << "Position: " << value.Position << "\t\t TeamId: " << value.leagueTeam_id << std::endl;
//	std::cout << "Price: " << value.price << std::endl;
//	std::cout << "Total Points: " << value.totalPoint << std::endl;
//	return &Players.find(name)->second;
//}
//
//void User::buy_footballer() {
//	std::string name;
//	char answer;
//	while (true) {
//		for (auto& fb : Players) {
//			std::cout << "Player name: " << fb.first << std::endl;
//		}
//		std::cout << "Your budget is: $" << Users[current_user].budget << std::endl;
//		std::cout << "Enter player name: ";
//		std::cin >> name;
//
//		Player* fb = getFootballer(name);
//		if (fb == NULL) {
//
//			std::cout << "Try again!" << std::endl;
//
//			continue;
//		}
//
//		std::cout << "Add him to your team (Y/N)" << std::endl;
//
//		std::cin >> answer;
//
//
//		if (answer == 'y' || answer == 'Y') {
//			//Checking budget before buying
//			if (budget < fb->price) { //if condition true means budget not enough.
//				std::cout << "You don't have enough credit to buy this player." << std::endl;
//				continue;
//			}
//
//			Users[current_user].members.push_back(fb->Name);
//			Users[current_user].budget -= fb->price;
//		}
//
//		std::cout << "Do you want to do another operation?" << std::endl;
//		std::cin >> answer;
//		if (answer == 'y' || answer == 'Y')
//			continue;
//		else if (answer == 'n' || answer == 'N')
//			break;
//	}
//}
//
//void User::replace_footballer()
//{
//
//	std::string footballerName;
//	std::cout << "Enter the player to sell" << std::endl;
//	sell_footballer(footballerName);
//
//	buy_footballer();
//
//
//}
//void User::sell_footballer(std::string footballerName) {
//
//
//	for (int i = 0; i < members.size(); i++) {
//		if (members[i] == footballerName) {
//			budget += Players.find(members[i])->second.price;
//			members.erase(members.begin() + i);
//			std::cout << "Sold " << footballerName << " for " << Players.find(members[i])->second.price << " budget." << std::endl;
//			return;
//		}
//	}
//	std::cout << "Footballer not found in  team." << std::endl;
//}
//void User::displayMyteam()
//{
//	std::cout << "Team name: " << Users[current_user].customName << "  ";
//	std::cout << "Ponint: " << Users[current_user].totalPoint << std::endl;
//	for (int i = 0; i < Users[current_user].members.size(); i++) {
//		std::cout << "Player name: " << Users[current_user].members[i] << std::endl;
//		std::cout << "Position: " << Players.find(Users[current_user].members[i])->second.Position << std::endl;
//	}
//}
//
//void User::userMenu()
//{
//	int choic;
//	std::string ans;
//	Competition competition;
//	std::string name;
//	bool exit = false;
//	while (!exit) {
//		std::cout << "1- Buy another player" << std::endl;
//		std::cout << "2- Sell player" << std::endl;
//		std::cout << "3- Replace player" << std::endl;
//		std::cout << "4- Display My team" << std::endl;
//		std::cout << "5- Display top 3" << std::endl;
//		std::cout << "6- Display the winner " << std::endl;
//		std::cout << "7- exit" << std::endl;
//		std::cin >> choic;
//		switch (choic) {
//		case 1:
//			buy_footballer();
//			break;
//
//		case 2:
//			std::cout << "Enter the player to sell" << std::endl;
//			std::cin >> name;
//			sell_footballer(name);
//			break;
//		case 3:
//			replace_footballer();
//			break;
//		case 4:
//			displayMyteam();
//			break;
//		case 5:
//			competition.top3();
//			break;
//		case 6:
//			competition.top1();
//			break;
//		case 7:
//			exit = true;
//			break;
//		}
//	}
//}
//
