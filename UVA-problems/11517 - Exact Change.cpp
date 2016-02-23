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
//#include<limits.h>
//#include<string>
//#include<string.h>
//#pragma warning(disable: 4996)
//using namespace std;
//typedef long long ll;
//int INF = 10000000;
//struct str
//{
//	int minVal;
//	int length;
//	str()
//	{
//		minVal = -1;
//		length = -1;
//	}
//	str(int val, int len)
//	{
//		minVal = val;
//		length = len;
//	}
//};
//
//str dp[10001][101];
//int cents[101];
//int price;
//int n;
//
//void clearDp()
//{
//	for (int i = 0; i < 10001; i++)
//		for (int j = 0; j < 101; j++)
//			dp[i][j] = str();
//}
//
//bool weirdSort(int n2, int n1)
//{
//	return n2 > n1;
//}
//
//str minOfStr(str s1, str s2)
//{
//	if (s1.minVal < s2.minVal)
//		return s1;
//	else if (s2.minVal < s1.minVal)
//		return s2;
//	else
//	{
//		if (s1.length < s2.length)
//			return s1;
//		else
//			return s2;
//	}
//}
//
//str solve(int sum=0, int index=0,int length=0)
//{
//	if (sum >= price)
//	{
//		return str(sum , length);
//	}
//	if (index >= n)
//		return str(INF, INF);
//
//	if (dp[sum][index].length != -1)
//		return dp[sum][index];
//
//	str take = solve(sum + cents[index],index+1, length + 1);
//
//	str leave = solve(sum, index + 1, length);
//
//
//	return dp[sum][index] = minOfStr(leave, take);
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		clearDp();
//		cin >> price;
//		cin >> n;
//		for (int i = 0; i < n; i++)
//			cin >> cents[i];
//		sort(cents, cents + n, weirdSort);
//		str ans = solve();
//		cout << ans.minVal << " " << ans.length << endl;
//	}
//	return 0;
//}
//
//
