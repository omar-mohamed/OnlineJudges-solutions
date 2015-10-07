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
//char arr[150][150];
//char temp[150][150];
//void reset()
//{
//	for (int i = 0; i < 150; i++)
//		for (int j = 0; j < 150; j++)
//		{
//			arr[i][j] = ' ';
//			temp[i][j] = ' ';
//		}
//}
//
//void oneDay(const int& r, const int& c)
//{
//
//	for (int i = 1; i <= r; i++)
//	{
//		for (int j = 1; j <= c; j++)
//		{
//			if (arr[i][j] == 'R')
//			{
//				if (arr[i + 1][j] == 'S')
//					temp[i + 1][j] = 'R';
//				if (arr[i - 1][j] == 'S')
//					temp[i - 1][j] = 'R';
//				if (arr[i][j + 1] == 'S')
//					temp[i][j + 1] = 'R';
//				if (arr[i][j - 1] == 'S')
//					temp[i][j - 1] = 'R';
//			}
//			else if (arr[i][j] == 'S')
//			{
//				if (arr[i + 1][j] == 'P')
//					temp[i + 1][j] = 'S';
//				if (arr[i - 1][j] == 'P')
//					temp[i - 1][j] = 'S';
//				if (arr[i][j + 1] == 'P')
//					temp[i][j + 1] = 'S';
//				if (arr[i][j - 1] == 'P')
//					temp[i][j - 1] = 'S';
//			}
//			else if (arr[i][j] == 'P')
//			{
//				if (arr[i + 1][j] == 'R')
//					temp[i + 1][j] = 'P';
//				if (arr[i - 1][j] == 'R')
//					temp[i - 1][j] = 'P';
//				if (arr[i][j + 1] == 'R')
//					temp[i][j + 1] = 'P';
//				if (arr[i][j - 1] == 'R')
//					temp[i][j - 1] = 'P';
//			}
//		}
//	}
//
//	for (int i = 1; i <= r; i++)
//		for (int j = 1; j <= c; j++)
//			arr[i][j] = temp[i][j];
//}
//
//int main()
//{
//	int t,r,c,n;
//	cin >> t;
//	while (t--)
//	{
//		cin >> r >> c >> n;
//		for (int i = 1; i <= r; i++)
//			for (int j = 1; j <= c; j++)
//			{
//				cin >> arr[i][j];
//				temp[i][j] = arr[i][j];
//			}
//		for (int i = 0; i < n; i++)
//			oneDay(r, c);
//
//		for (int i = 1; i <= r; i++)
//		{
//			for (int j = 1; j <= c; j++)
//			{
//				cout << arr[i][j];
//			}
//			cout << endl;
//		}
//
//		if (t != 0)
//			cout << endl;
//		reset();
//	}
//	return 0;
//}