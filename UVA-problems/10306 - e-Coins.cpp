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
//int dp[301][301][41];
//int n;
//int conventional[41];
//int technological[41];
//int target;
//
//
//int solve(int conv=0, int tech=0, int index=0)
//{
//	if (conv*conv + tech*tech == target*target)
//	{
//		return 0;
//	}
//	if (index >= n|| conv*conv + tech*tech > target*target)
//		return INF;
//
//
//	int &ret = dp[conv][tech][index];
//	if (ret != -1)
//		return ret;
//	int take = solve(conv + conventional[index], tech + technological[index], index)+1;
//	int leave = solve(conv, tech, index + 1);
//
//	return ret = min(take, leave);
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		memset(dp, -1, sizeof(dp));
//		cin >> n>>target;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> conventional[i]>>technological[i];
//		}
//		int ans = solve();
//		if (ans == INF)
//			cout << "not possible" << endl;
//		else
//			cout << ans << endl;
//	}
//	return 0;
//}