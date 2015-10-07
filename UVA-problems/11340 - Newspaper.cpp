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
//	string line;
//	ll t,n,m;
//	ll arr[500];
//	char tmp;
//	long double ans;
//	cin >> t;
//	while (t--)
//	{
//		ans = 0;
//		memset(arr, 0, sizeof(arr));
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> tmp;
//			cin >> arr[tmp+128];
//		}
//		cin >> m;
//		cin.ignore();
//		for (int i = 0; i < m; i++)
//		{
//			getline(cin,line);
//			for (int i = 0; i < line.size(); i++)
//				ans += arr[line[i] + 128];
//		}
//		cout << fixed << setprecision(2) << ans / 100.0 << "$\n";
//
//	}
//	return 0;
//}