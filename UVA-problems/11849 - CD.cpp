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
//#include<set>
//#include<string.h>
//#pragma warning(disable: 4996)
//using namespace std;
//typedef long long ll;
//
//int main()
//{
//	int n, m;
//	int ans;
//	ll tmp;
//	unordered_map<ll, int> dic;
//	while (cin >> n >> m)
//	{
//		if (n == 0 && m == 0)
//			break;
//		dic.clear();
//		ans = 0;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> tmp;
//			dic[tmp]++;
//		}
//		for (int i = 0; i < m; i++)
//		{
//			cin >> tmp;
//			dic[tmp]++;
//		}
//		for (const auto& x : dic)
//		{
//			if (x.second > 1)
//				ans++;
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}