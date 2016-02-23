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
//int length;
//int maxBarLength;
//int requiredBars;
//
//ll dp[51][51][51];
//
//ll solve(int curLength=1,int numOfBars=1,int barLength=1)
//{
//	if (curLength == length&&numOfBars==requiredBars)
//		return 1;
//	if (curLength > length||numOfBars>requiredBars)
//		return 0;
//	ll &ret = dp[curLength][numOfBars][barLength];
//	if (ret != -1)
//		return ret;
//	ll ch1 = 0;
//	if (barLength < maxBarLength)
//		ch1 = solve(curLength + 1, numOfBars, barLength + 1);
//	ll ch2 = solve(curLength + 1, numOfBars + 1, 1);
//
//	return ret= ch1 + ch2;
//}
//
//int main()
//{
//	while (cin >> length >> requiredBars >> maxBarLength)
//	{
//		memset(dp, -1, sizeof(dp));
//		cout << solve() << endl;
//	}
//	return 0;
//}