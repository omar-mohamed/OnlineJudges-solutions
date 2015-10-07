

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
//int head[20001], hero[20001];
//
//int main()
//{
//	int n, m,ans;
//	while (cin >> n >> m&&n&&m)
//	{
//		for (int i = 0; i < n; i++)
//			cin >> head[i];
//		for (int j = 0; j < m; j++)
//			cin >> hero[j];
//		if (n > m)
//			cout << "Loowater is doomed!\n";
//		else
//		{
//			ans = 0;
//			sort(head, head + n);
//			sort(hero, hero + m);
//			int i=0, j=0;
//			while (i < n&&j < m)
//			{
//				if (head[i] <= hero[j])
//				{
//					ans += hero[j];
//					i++;
//					j++;
//				}
//				else
//					j++;
//			}
//			if (i == n)
//				cout << ans << endl;
//			else
//				cout << "Loowater is doomed!\n";
//		}
//	}
//	return 0;
//}