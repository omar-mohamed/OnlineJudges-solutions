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
//	int t,n,maxi,counter,base;
//	ll tmp;
//	//freopen();
//	cin >> t;
//	while (t--)
//	{
//		counter = 1;
//		maxi = 0;
//		base = 1;
//		unordered_map<ll, int> vis;
//		cin >> n;
//		cin >> tmp;
//		vis[tmp] = 1;
//		for (int i = 2; i <= n; i++)
//		{
//			cin >> tmp;
//			if (vis[tmp]<base)
//			{
//				vis[tmp] = i;
//				counter++;
//			}
//			else
//			{
//				counter =i - vis[tmp] ;
//				base = vis[tmp];
//				vis[tmp] = i;
//			}
//			if (counter > maxi)
//				maxi = counter;
//		}
//		cout << maxi << endl;
//	}
//
//	return 0;
//}