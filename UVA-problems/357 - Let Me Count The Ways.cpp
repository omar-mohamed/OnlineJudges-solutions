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
//int coins[] = {50,25,10,5,1};
//ll dp[5][30001];
//
//ll solve(int index, int rem)
//{
//	if (rem == 0)
//		return 1;
//	if (rem < 0||index>4)
//		return 0;
//	if (dp[index][rem] != -1)
//		return dp[index][rem];
//	return dp[index][rem] = solve(index, rem - coins[index]) + solve(index + 1, rem);
//}
//
//int main()
//{
//	int n;
//	ll	ans;
//	while (cin >> n)
//	{
//		memset(dp, -1, sizeof(dp));
//		ans = solve(0, n);
//		if (ans == 1)
//			cout << "There is only 1 way to produce " << n << " cents change.\n";
//		else
//			cout << "There are " << ans << " ways to produce " << n << " cents change.\n";
//	}
//	return 0;
//}