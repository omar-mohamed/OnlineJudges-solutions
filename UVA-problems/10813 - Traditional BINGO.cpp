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
//pair<int, bool> arr[5][5];
//
//pair<int, int> position[76];
//
//bool checkRowCol(const int& row,const int& col)
//{
//	int i;
//	for (i = 0; i < 5; i++)
//		if (!arr[row][i].second)
//			break;
//	if (i == 5)
//		return true;
//	for (i = 0; i < 5; i++)
//		if (!arr[i][col].second)
//			break;
//	if (i == 5)
//		return true;
//	return false;
//}
//
//bool checkDiagonal()
//{
//	int i, j;
//	for (i = 0, j = 0; i < 5 && j < 5; i++, j++)
//		if (!arr[i][j].second)
//			break;
//	if (i == 5)
//		return true;
//
//	for (i = 0, j = 4; i < 5 && j >= 0; i++, j--)
//		if (!arr[i][j].second)
//			break;
//	if (i == 5)
//		return true;
//	return false;
//}
//
//int main()
//{
//	int t,tmp;
//	cin >> t;
//	int won;
//	while (t--)
//	{
//		for (int i = 0; i < 76; i++)
//			position[i].first = position[i].second = -1;
//		for (int i = 0; i < 5; i++)
//		{
//			for (int j = 0; j < 5; j++)
//			{
//				if (i == 2 && j == 2)
//				{
//					arr[i][j].second = true;
//					j++;
//				}
//				cin >> arr[i][j].first;
//				position[arr[i][j].first].first = i;
//				position[arr[i][j].first].second = j;
//				arr[i][j].second = false;
//			}
//		}
//		won = 0;
//		for (int i = 0; i < 75; i++)
//		{
//			cin >> tmp;
//			if (won==0&&position[tmp].first != -1)
//			{
//				arr[position[tmp].first][position[tmp].second].second = true;
//				if (checkRowCol(position[tmp].first, position[tmp].second))
//					won = i + 1;
//				else if (position[tmp].first == position[tmp].second || position[tmp].first == 4 - position[tmp].second)
//				{
//					if (checkDiagonal())
//					{
//						won = i + 1;
//					}
//				}
//			}
//		}
//		cout << "BINGO after " << won << " numbers announced\n";
//
//	}
//	return 0;
//}