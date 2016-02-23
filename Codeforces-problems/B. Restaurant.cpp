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
//ll dp[500001];
//struct interval
//{
//	ll l;
//	ll r;
//	interval()
//	{
//		this->l = 0;
//		this->r = 0;
//	}
//	interval(ll l, ll r)
//	{
//		this->l = l;
//		this->r = r;
//	}
//};
//
//interval arr[500001];
//
//ll solve(int index,int lastr,int n)
//{
//	if (index == n)
//		return 0;
//	if (dp[index] != -1)
//		return dp[index];
//
//	ll take = 0,leave;
//	if (lastr < arr[index].l)
//	{
//		take= solve(index + 1, arr[index].r, n)+1;
//	}
//	leave = solve(index + 1, lastr, n);
//
//	return dp[index] = max(take, leave);
//}
//
//bool weirdsort(interval v2, interval v1)
//{
//	return v2.r < v1.r;
//}
//
//int main()
//{
//	int n,l,r;
//	while (cin >> n)
//	{
//		memset(dp, -1, sizeof(dp));
//		for (int i = 0; i < n; i++)
//		{
//			cin >> l >> r;
//			arr[i].l = l;
//			arr[i].r = r;
//		}
//		sort(arr, arr + n,weirdsort);
//		cout << solve(0, 0, n) << endl;
//	}
//	return 0;
//}