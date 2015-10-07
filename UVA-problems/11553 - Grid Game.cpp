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
//int arr[25][25];
//int n;
//bitset<25> vis;
//
//int solve(int row)
//{
//	if (row == n)
//		return 0;
//	int mi = 1000000000;
//	for (int i = 0; i < n; i++)
//	{
//		if (!vis[i])
//		{
//			vis[i] = 1;
//			mi = min(mi, solve(row+1) + arr[row][i]);
//			vis[i] = 0;
//		}
//	}
//	return mi;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		vis = 0;
//		cin >> n;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//				cin >> arr[i][j];
//		cout << solve(0) << endl;
//	}
//	return 0;
//}