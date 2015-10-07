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
//vector<ll> v;
//int n;
//ll tr(ll target)
//{
//	int counter = 0;
//	vector<ll>::iterator it;
//	unordered_map<ll, bool> dic;
//	while (target > 0)
//	{
//		it = lower_bound(v.begin(), v.end(), target + 1);
//		--it;
//		target -= *it;
//		if (!dic[*it])
//			counter++;
//		dic[*it] = true;
//	}
//	return counter;
//}
//
//int main()
//{
//	int t;
//	ll sum,ans;
//	cin >> t;
//	while (t--)
//	{
//		sum = 0;
//		cin >> n;
//		v.clear();
//		v.resize(n);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> v[i];
//			sum += v[i];
//		}
//		ans = 0;
//		for (ll i = sum - 1; i <= sum + 1000; i++)
//			ans = max(ans, tr(i));
//		cout << ans << endl;
//	}
//	return 0;
//}