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
//ll rungs[100002];
//int n;
//
//bool check(ll k)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		if (rungs[i] - rungs[i-1]>k)
//			return false;
//		if (rungs[i] - rungs[i-1] == k)
//			k--;
//	}
//	return true;
//}
//
//ll binarySearch(ll l, ll r)
//{
//	if (l > r)
//		return -1;
//	ll mid = l + (r - l) / 2;
//	bool flag = check(mid);
//	if (flag)
//	{
//		ll pos = binarySearch(l, mid - 1);
//		if (pos != -1)
//			return pos;
//		return mid;
//	}
//	else
//		return binarySearch(mid + 1, r);
//}
//
//int main()
//{
//	rungs[0] = 0;
//	int t;
//	ll r;
//	cin >> t;
//	for (int c = 1; c <= t; c++)
//	{
//		cin >> n;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> rungs[i];
//			r = max(r, rungs[i]-rungs[i-1]);
//		}
//		cout << "Case " << c << ": " << binarySearch(1,r+1) << endl;
//	}
//	return 0;
//}