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
//typedef unsigned long long ll;
//ll INF = 10000000000000;
//
//
//ll factorial(ll n)
//{
//	for (int i = n - 1; i > 0; i--)
//		n *= i;
//	return n;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	for (int c = 1; c <= t; c++)
//	{
//		ll ans;
//		string s;
//		cin >> s;
//		vector<int> freq(300);
//		for (int i = 0; i < s.size(); i++)
//			freq[s[i]]++;
//		ll div = 1;
//		for (char i = 'A'; i <= 'Z'; i++)
//		{
//			if (freq[i]>1)
//			{
//				div *= factorial(freq[i]);
//			}
//		}
//		ans = factorial(s.size()) / div;
//		cout << "Data set " << c << ": " << ans << endl;
//	}
//}