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
//int main()
//{
//	ll N,n;
//	cin >> N;
//	vector<pair<ll,ll> > x;
//	ll sum = 0;
//	for (ll i = 1; i <= 1000000000; i *= 2)
//	{
//		sum += i;
//		x.push_back(make_pair(sum,i));
//	}
//	while(N--)
//	{
//		cin >> n;
//		sum = (n*(n + 1)) / 2;
//		for (int i = x.size() - 1; i >= 0; i--)
//		{
//			if (x[i].second <= n)
//			{
//				sum -= 2*x[i].first;
//				break;
//			}
//		}
//		cout << sum << endl;
//	}
//}