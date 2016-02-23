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
//ll dp[10201][101];
//int price[101];
//int happiness[101];
//int money;
//int n;
//
//
//ll solve(int moneyPaid=0, int index=0)
//{
//	if (index >= n)
//		return 0;
//
//	ll &ret = dp[moneyPaid][index];
//	if (ret != -1)
//		return ret;
//	ll take = 0;
//	if ((moneyPaid + price[index] > 2000 && moneyPaid + price[index] <= money + 200) || moneyPaid + price[index] <= 2000 && moneyPaid + price[index] <= money)
//		take = solve(moneyPaid + price[index], index + 1) + happiness[index];
//	ll leave = solve(moneyPaid, index + 1);
//	return ret=max(take, leave);
//
//}
//
//
//int main()
//{
//	while (cin >> money >> n)
//	{
//		memset(dp, -1, sizeof(dp));
//		for (int i = 0; i < n; i++)
//			cin >> price[i] >> happiness[i];
//		cout << solve() << endl;
//	}
//	return 0;
//}