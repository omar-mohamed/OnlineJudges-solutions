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
//#include<set>
//#include<string.h>
//#pragma warning(disable: 4996)
//using namespace std;
//typedef long long ll;
//
//int n, N;
//char big[101][101], small[101][101];
//
//void rotate()
//{
//	char tmp[101][101];
//	int row, col = 0;
//	for (int i = n - 1; i >= 0; i--)
//	{
//		row = 0;
//		for (int j = 0; j < n; j++)
//		{
//			 tmp[row++][col]= small[i][j] ;
//		}
//		col++;
//	}
//	
//
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			small[i][j] = tmp[i][j];
//}
//
//bool compare(const int& r,const int& c)
//{
//	int row = 0, col;
//	for (int i = r; i < r + n; i++)
//	{
//		col = 0;
//		for (int j = c; j < c + n; j++)
//		{
//			if (big[i][j] != small[row][col++])
//				return false;
//		}
//		row++;
//	}
//	return true;
//}
//
//int generate()
//{
//	int counter = 0;
//	for (int i = 0; i <= N - n; i++)
//	{
//		for (int j = 0; j <= N - n; j++)
//		{
//			if (compare(i, j))
//				counter++;
//		}
//	}
//	return counter;
//}
//
//int main()
//{
//	while (cin >> N >> n&&N>0&&n>0)
//	{
//		for (int i = 0; i < N; i++)
//			for (int j = 0; j < N; j++)
//				cin >> big[i][j];
//
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//				cin >> small[i][j];
//
//		for (int i = 0; i < 4; i++)
//		{
//			cout << generate();
//			if (i != 3)
//			{
//				cout << " ";
//				rotate();
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}