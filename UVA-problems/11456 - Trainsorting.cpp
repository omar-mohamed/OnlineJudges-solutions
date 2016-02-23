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
//
//
//int lis[2004][2004];
//int lds[2004][2004];
//int n;
//int trains[2004];
//
//int LIS(int index=1, int prevIndex=0)
//{
//	if (index == n+1)
//		return 0;
//	int &ret = lis[index][prevIndex];
//
//	if (ret != -1)
//		return ret;
//	int take = 0;
//	if (trains[index] > trains[prevIndex])
//		take = LIS(index + 1, index)+1;
//
//	int leave = LIS(index+1, prevIndex);
//
//	return ret = max(leave, take);
//}
//
//int LDS(int index=1, int prevIndex=0)
//{
//	if (index == n + 1)
//		return 0;
//	int &ret = lds[index][prevIndex];
//
//	if (ret != -1)
//		return ret;
//	int take = 0;
//	if (trains[index] < trains[prevIndex])
//		take = LDS(index + 1, index)+1;
//
//	int leave = LDS(index+1, prevIndex);
//
//	return ret = max(leave, take);
//}
//
//int solve()
//{
//	int ans = 0;
//	trains[0] = 0;
//	LIS();
//	trains[0] = INF;
//	LDS();
//	for (int i = 1; i <= n; i++)
//	{
//		int lisMax = lis[i+1][i]+1;
//		int ldsMax = lds[i+1][i]+1;
//		ans = max(ans,max( lisMax + ldsMax-1,max(lisMax, ldsMax)));
//	}
//	return ans;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		memset(lis, -1, sizeof(lis));
//		memset(lds, -1, sizeof(lds));
//		cin >> n;
//		if (n == 0)
//		{
//			cout << "0" << endl;
//			continue;
//		}
//		for (int i = 1; i <= n; i++)
//			cin >> trains[i];
//		if (n == 1)
//		{
//			cout << "1" << endl;
//			continue;
//		}
//
//		cout << solve() << endl;
//	}
//	return 0;
//}