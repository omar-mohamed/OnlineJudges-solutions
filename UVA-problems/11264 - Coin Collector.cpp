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
//
//int main()
//{
//	int t,n;
//	ll sum,ans;
//	cin >> t;
//	while (t--)
//	{
//		sum = 0;
//		cin >> n;
//		vector<ll> coins(n);
//		for (int i = 0; i < n; i++)
//			cin >> coins[i];
//		
//		ans = 0;
//		sum = 0;
//		for (int i = 0; i < n; i++)
//		{
//			sum += coins[i];
//			if (i == n - 1 || sum < coins[i + 1])
//				ans++;
//			else
//				sum -= coins[i];
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}
//
