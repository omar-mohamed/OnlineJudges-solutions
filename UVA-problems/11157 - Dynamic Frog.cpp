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
//ll INF = 100000000000;
//
//struct rock
//{
//	ll dist;
//	char type;
//	rock()
//	{
//		dist = 0;
//		type = 'B';
//	}
//	rock(int d, char t)
//	{
//		dist = d;
//		type = t;
//	}
//};
//
//rock arr[105];
//int t, n, d;
//
//int main()
//{
//	int t,n,d;
//	cin >> t;
//	rock arr[105];
//	bitset<105> sank;
//	char type, tmp;
//	int dis;
//	arr[0] = rock(0, 'B');
//
//	for (int cases = 1; cases <= t; cases++)
//	{
//		cin >> n>>d;
//		arr[n+1] = rock(d, 'B');
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> type >> tmp >> dis;
//			arr[i] = rock(dis,type);
//		}
//		ll ans = 0;
//		sank = 0;
//
//		for (int i = 0; i <= n; i++)
//		{
//			if (arr[i + 1].type == 'S')  //error here  3 5 7 9 15
//			{
//				ans = max(ans, arr[i + 2].dist - arr[i].dist);
//				if (arr[i + 2].type == 'S')
//				   sank[i + 2] = 1;
//				i++;
//			}
//			else
//			{
//				ans = max(ans, arr[i + 1].dist - arr[i].dist);
//				if(arr[i+1].type=='S')
//				   sank[i + 1] = 1;
//			}
//		}
//
//		ll myPos = d;
//		for (int i = n; i >= 0; i--)
//		{
//			if (sank[i])
//				continue;
//			ans = max(ans, myPos - arr[i].dist);
//			myPos = arr[i].dist;
//		}
//		cout << "Case " << cases << ": " << ans << endl;
//	}
//	return 0;
//}