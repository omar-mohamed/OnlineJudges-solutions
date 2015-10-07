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
//ll ves[1001];
//int n,m;
//
//bool check(const ll& ma)
//{
//	int con=1, cur = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (ves[i] > ma) 
//			return false;
//		if (cur + ves[i] > ma)
//		{
//			cur = 0;
//			con++;
//		}
//		if (con > m)
//			return false;
//		cur += ves[i];
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
//	ll sum;
//	while (cin >> n >> m)
//	{
//		sum = 0;
//		if (m > n)
//			m = n;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> ves[i];
//			sum += ves[i];
//		}
//		cout << binarySearch(1, sum) << endl;
//	}
//
//	return 0;
//}