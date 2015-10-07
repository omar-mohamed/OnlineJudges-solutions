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
//bool weirdSort(ll n2, ll n1)
//{
//	return n1 < n2;
//}
//
//int main()
//{
//	ll arr[10005];
//	int n;
//	ll sum,sum2;
//	bool check;
//	while (cin >> n&&n>0)
//	{
//		sum = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> arr[i];
//			sum += arr[i];
//		}
//		sort(arr + 1, arr + n + 1,weirdSort);
//		if (sum % 2 == 0)
//		{
//			sum = 0;
//			check = true;
//			for (ll i = 1; i <= n; i++)
//			{
//				sum += arr[i];
//				sum2 = 0;
//				for (ll j = i + 1; j <= n; j++)
//				{
//					sum2 += min(i, arr[j]);
//				}
//				sum2 += i*(i - 1);
//				if (sum > sum2)
//				{
//					check = false;
//					break;
//				}
//			}
//			if (check)
//				cout << "Possible\n";
//			else
//				cout << "Not possible\n";
//		}
//		else 
//			cout << "Not possible\n";
//	}
//	return 0;
//}