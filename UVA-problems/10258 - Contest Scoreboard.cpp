//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <deque>
//#include<queue>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include<memory>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include<unordered_map>
//#include<string>
//#include<string.h>
//#pragma warning(disable: 4996)
//using namespace std;
//typedef long long ll;
//
//struct team
//{
//	int teamNum;
//	bool submitted;
//	int total_solved;
//	int Total_penalty;
//	int penalty[11];
//	bool solved[11];
//	team()
//	{
//		teamNum = 0;
//		submitted = 0;
//		total_solved = 0;
//		Total_penalty = 0;
//		for (int i = 1; i < 11; i++)
//		{
//			penalty[i] = 0;
//			solved[i] = 0;
//		}
//	}
//};
//
//bool weirdSort(team t2, team t1)
//{
//	if (t2.total_solved > t1.total_solved)
//		return true;
//	else if (t2.total_solved == t1.total_solved&&t2.Total_penalty < t1.Total_penalty)
//		return true;
//	else if (t2.total_solved == t1.total_solved&&t2.penalty == t1.penalty&&t2.teamNum < t1.teamNum)
//		return true;
//	return false;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	string s,buff;
//	char judge;
//	int index,team_num,problem,time;
//	cin.ignore();
//	getline(cin, s);
//	while (t--)
//	{
//		team arr[105];
//		while (getline(cin, s)&&s!="")
//		{
//			index = 0;
//			stringstream ss(s);
//			while (ss >> buff)
//			{
//				if (index == 0)
//					team_num = atoi(buff.c_str());
//				else if (index == 1)
//					problem = atoi(buff.c_str());
//				else if (index == 2)
//					time = atoi(buff.c_str());
//				else if (index == 3)
//					judge = buff[0];
//				++index;
//			}
//			arr[team_num].submitted = true;
//			arr[team_num].teamNum = team_num;
//			if (judge == 'C')
//			{
//				if (!arr[team_num].solved[problem])
//				{
//					arr[team_num].total_solved++;
//					arr[team_num].solved[problem] = true;
//					arr[team_num].Total_penalty += arr[team_num].penalty[problem]+time;
//				}
//			}
//			else if (judge == 'I')
//			{
//				if (!arr[team_num].solved[problem])
//					arr[team_num].penalty[problem] += 20;
//				
//			}
//		}
//		sort(arr, arr + 105, weirdSort);
//		bool first = 1;
//		for (int i = 0; i < 105; i++)
//		{
//			if (arr[i].submitted)
//			{
//				if (!first)
//					cout << endl;
//				first = 0;
//				cout <<arr[i].teamNum<<" "<< arr[i].total_solved << " " << arr[i].Total_penalty;
//			}
//		}
//		cout << endl;
//		if (t > 0)
//			cout << endl;
//	}
//	return 0;
//}