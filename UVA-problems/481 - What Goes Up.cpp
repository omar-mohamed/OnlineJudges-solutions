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
//
//vector<int> path;
//int dp[1000][1000];
//int arr[1000];
//int n;
//int solve(int index, int prev)
//{
//	if (index == n)
//		return 0;
//	if (dp[index][prev] != -1)
//		return dp[index][prev];
//	int leave = solve(index + 1, prev);
//	int take = 0;
//	if (arr[index] > arr[prev])
//		take = solve(index + 1, index)+1;
//	return dp[index][prev] = max(take, leave);
//}
//
//void construct(int index, int prev)
//{
//	if (index == n)
//		return;
//	int leave = solve(index + 1, prev);
//	int take = 0;
//	if (arr[index] > arr[prev])
//		take = solve(index + 1, index) + 1;
//	if (take > leave)
//	{
//		path.push_back(arr[index]);
//		construct(index + 1, index);
//	}
//	else
//		construct(index + 1, prev);
//}
//
//int main()
//{
//	arr[0] = INT_MIN;
//	n = 1;
//	memset(dp, -1, sizeof(dp));
//	while (cin >> arr[n++]){}
//	cout << solve(1, 0) << endl;
//	cout << "-\n";
//	construct(1, 0);
//	for (int i = 0; i < path.size(); i++)
//		cout << path[i] << endl;
//	return 0;
//}