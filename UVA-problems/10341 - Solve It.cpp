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
//double p, q, r, s, t,u;
//int it;
//double func(double mid)
//{
//	return p*exp(-mid) + q*sin(mid) + r*cos(mid) + s*tan(mid) + t*mid*mid + u;
//}
//
//double binarySearch(double l, double r)
//{
//	it++;
//	double mid = (l + r) / 2.0;
//	double ans = func(mid);
//	if (it > 100)
//		return mid;
//	if (ans == 0)
//		return mid;
//	else if (ans > 0)
//		return binarySearch(l, mid);
//	else
//		return binarySearch(mid,r);
//}
//
//double binarySearch2(double l, double r)
//{
//	it++;
//	double mid = (l + r) / 2.0;
//	double ans = func(mid);
//	if (it > 100)
//		return mid;
//	if (ans == 0)
//		return mid;
//	else if (ans > 0)
//		return binarySearch2(mid, r);
//	else
//		return binarySearch2(l, mid);
//}
//
//int main()
//{
//	while (cin >> p >> q >> r >> s >> t>>u)
//	{
//		double zero = func(0);
//		double one = func(1);
//		if (zero * one>0)
//			cout << "No solution\n";
//		else
//		{
//			it = 0;
//			if (zero < 0)
//				cout << fixed << setprecision(4) << binarySearch(0, 1) << endl;
//			else
//				cout << fixed << setprecision(4) << binarySearch2(0, 1) << endl;
//		}
//	}
//	return 0;
//}