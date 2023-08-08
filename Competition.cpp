#include "Competition.h"
#include "Global.h"
#include "User.h"
#include <vector>
std::vector<User> u;

Competition::Competition()
{

}
//
//void Competition::calcPoint()
//{
//	for (int i = 0; i < Users.size(); i++) {
//		for (int j = 0; j < Users[i].members.size(); j++) {
//
//			Users[i].totalPoint += Players.find(Users[i].members[j])->second.point;
//
//		}
//	}
//	for (int i = 0; i < Users.size(); i++) {
//		u[i].userName = Users[i].userName;
//		u[i].totalPoint = Users[i].totalPoint;
//	}
//
//}
//
//void Competition::sort(std::vector<User>& u) {
//	for (int i = 0; i < u.size(); i++) {
//		for (int j = i; j < u.size(); j++) {
//			if (j = u.size() - 1) {
//				break;
//
//			}
//			if (u[i].totalPoint < u[j + 1].totalPoint) {
//				std::swap(u[i], u[j + 1]);
//			}
//
//		}
//	}
//}
//void Competition::top3()
//{
//
//	calcPoint();
//	sort(u);
//	for (int i = 0; i < 3; i++) {
//		std::cout << i + 1 << " - " << u[i].userName << " " << u[i].totalPoint << " points";
//	}
//
//}
//
//void Competition::top1()
//{
//	calcPoint();
//	sort(u);
//
//	for (int i = 0; i < 1; i++) {
//		std::cout << i + 1 << " - " << u[i].userName << " " << u[i].totalPoint << " points";
//	}
//}