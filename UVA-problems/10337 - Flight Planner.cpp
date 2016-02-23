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
//
//int dp[100001][10];
//
//int wind[10][100001];
//int target;
//
//int solve(int location=0, int height=0)
//{
//	if (location == target&&height == 0)
//		return 0;
//	if(location==target&& height>0)
//		return INF;
//
//	int &ret = dp[location][height];
//	
//	if (ret != -1)
//		return ret;
//
//	int moveup=INF;
//	if (height != 9)
//		moveup = solve(location + 1, height + 1)+60-wind[height][location];
//	int moveDown = INF;
//	if (height != 0)
//		moveDown = solve(location + 1, height - 1) + 20 - wind[height][location];
//	int stay = solve(location + 1, height) + 30 - wind[height][location];
//
//	return ret = min(moveup, min(stay, moveDown));
//
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		memset(dp, -1, sizeof(dp));
//		cin >> target;
//		target = target / 100;
//		for (int j = 9; j >=0; j--)
//		    for (int i = 0; i < target; i++)
//				cin >> wind[j][i];
//		cout << solve() << endl << endl;
//	}
//	return 0;
//}