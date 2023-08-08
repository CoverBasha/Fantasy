#include "Admin.h"
#include "Global.h"
#include "Club.h"
#include "Player.h"
#include "League.h"

Admin::Admin()
{
}



//std::string Admin::getAdminName()
//{
//	getline(std::cin, adminName);
//	return adminName;
//}
//
//void Admin::getPassword()
//{
//	getline(std::cin, password);
//}
//
////void Admin::addFootballer()
////{
////	std::string teamName;
////	Player fb;
////
////	for (int i = 0; i < Clubs.size(); i++) {
////		std::cout << "Team name: " << Clubs[i].name << "  " << Clubs[i].name << std::endl;
////	}
////	std::cout << "which team you want to add a footballer to: ";
////	std::cin >> teamName;
////	for (int i = 0; i < Clubs.size(); i++) {
////		if (teamName == Clubs[i].name) {
////			std::cout << "Team Found <3" << std::endl << std::endl;
////
////			std::cout << "Footballer Name: " << std::endl; std::cin >> fb.name;
////			std::cout << "Position: " << std::endl; std::cin >> fb.position;
////			std::cout << "Price: " << std::endl; std::cin >> fb.price;
////			fb.name = Clubs[i].name;
////			fb.name = Clubs[i].id;
////			Players[fb.name] = fb;
////			//Clubs[i]..push_back(&Players[fb.Name]);
////			std::cout << "Footballer " << fb.Name << " is added succefully to " << Clubs[i].leagueTeam_name << std::endl;
////			return;
////
////		}
////	}
////	std::cout << "This team doesn't exist!" << std::endl;
////}
//
//void Admin::addTeam()
//{
//	Club lTeam;
//	std::cout << "Enter team name: " << std::endl;
//	lTeam.leagueTeam_name = lTeam.getName();
//	std::cout << "Enter team id: " << std::endl;
//	lTeam.leagueTeam_id = lTeam.getId();
//	Clubs.push_back(lTeam);
//}
//
//void Admin::removeTeam()
//{
//	std::string lteam;
//
//	std::cout << "Enter team name to be removed: ";
//	std::getline(std::cin, lteam);
//	for (int i = 0; i < Clubs.size(); i++)
//	{
//		if (lteam == Clubs[i].leagueTeam_name)
//		{
//			Clubs.erase(Clubs.begin() + i);
//			break;
//		}
//		else {
//			std::cout << "Team not found" << std::endl;
//		}
//	}
//}
//
//void Admin::adminMenu()
//{
//	int choic;
//	Player fb;
//	Club lTeam;
//	bool exit = false;
//	while (!exit) {
//		std::cout << "1- Add Footballer" << std::endl;
//		std::cout << "2- Remove Footballer" << std::endl;
//		std::cout << "3- Set points" << std::endl;
//		std::cout << "4- Reset points" << std::endl;
//		std::cout << "5- Add team" << std::endl;
//		std::cout << "6- Remove team" << std::endl;
//		std::cout << "7- Display teams" << std::endl;
//		std::cout << "8- exit" << std::endl;
//		std::cin >> choic;
//		switch (choic) {
//		case 1:
//			addFootballer();
//			break;
//		case 2:
//
//			removeFootballer();
//			break;
//		case 3:
//			for (int i = 0; i < Users.size(); i++) {
//				for (int j = 0; j < Users[i].members.size(); j++) {
//					Players.find(Users[i].members[j])->second.point = fb.setPoints();
//				}
//			}
//			break;
//		case 4:
//			for (int i = 0; i < Users.size(); i++) {
//				for (int j = 0; j < Users[i].members.size(); j++) {
//					Players.find(Users[i].members[j])->second.totalPoint = fb.total_footballer_points();
//				}
//			}
//			break;
//		case 5:
//			addTeam();
//			break;
//		case 6:
//			removeTeam();
//			break;
//		case 7:
//			lTeam.display();
//			break;
//		case 8:
//			exit = true;
//			break;
//		}
//
//	}
//}
//
//void Admin::removeFootballer()
//{
//	std::string team_name, player_name;
//	std::cout << "Enter team and player name: ";
//	std::cin >> team_name;
//	std::cin >> player_name;
//	for (int i = 0; i < Clubs.size(); i++) {
//		if (Clubs[i].leagueTeam_name == team_name) {
//			for (int j = 0; j < Clubs[i].leageTeam_Members.size(); j++) {
//				if (Clubs[i].leageTeam_Members[j]->Name == player_name) {
//					Clubs[i].leageTeam_Members.erase(Clubs[i].leageTeam_Members.begin() + j);
//				}
//			}
//
//		}
//	}
//
//}
