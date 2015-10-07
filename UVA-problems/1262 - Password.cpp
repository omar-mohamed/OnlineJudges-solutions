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
//int k;
//int order;
//string ans;
//vector<vector<char> > grid;
//vector<vector<char> > grid2;
//unordered_map<string, int> dic;
//unordered_map<string, int> dic2;
//unordered_map<string, int> passwords;
//void solve(int row, string s)
//{
//	if (dic.find(s) != dic.end())
//		return;
//
//	dic[s]++;
//
//	if (row == 5)
//	{
//		passwords[s]++;
//		return;
//	}
//
//	for (int i = 0; i < 6; i++)
//		solve(row + 1, s + grid[row][i]);
//}
//
//void solve2(int row, string s)
//{
//
//	if (order == k || dic.find(s) == dic.end()|| dic2.find(s) != dic2.end())
//		return;
//
//	dic2[s]++;
//
//	if (row == 5)
//	{
//		if (passwords[s] > 0)
//		{
//			order++;
//			if (order == k)
//				ans = s;
//		}
//		return;
//	}
//
//
//	for (int i = 0; i < 6; i++)
//		solve2(row + 1, s + grid2[row][i]);
//}
//
//int main()
//{
//	//freopen("out.txt", "w", stdout);
//	int t;
//	cin >> t;
//	char x;
//	while (t--)
//	{
//		order = 0;
//		cin >> k;
//		grid.clear();
//		grid.resize(5);
//		grid2.clear();
//		grid2.resize(5);
//		for (int i = 0; i < 6; i++)
//		{
//			for (int j = 0; j < 5; j++)
//			{
//				cin >> x;
//				grid[j].push_back(x);
//			}
//		}
//		for (int i = 0; i < 6; i++)
//		{
//			for (int j = 0; j < 5; j++)
//			{
//				cin >> x;
//				grid2[j].push_back(x);
//			}
//		}
//		for (int i = 0; i < 5; i++)
//		{
//			sort(grid[i].begin(), grid[i].end());
//			sort(grid2[i].begin(), grid2[i].end());
//		}
//		ans = "";
//		passwords.clear();
//		dic.clear();
//		solve(0, "");
//		dic2.clear();
//		solve2(0, "");
//		if (ans == "")
//			cout << "NO" << endl;
//		else
//			cout << ans << endl;
//	}
//	return 0;
//}
