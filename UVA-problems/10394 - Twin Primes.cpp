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
//ll INF = 10000000000000;
//
//vector<pair<int, int> > twins(1000005);
//
//
//void sieve(int n)
//{
//	vector<int> isprime(n+1, true);
//
//	isprime[0] = isprime[1] = false;
//
//	for (int i = 2; i*i <= n; i++)
//	{
//		if (isprime[i])
//			for (int j = i*i; j <= n; j += i)
//				isprime[j] = false;
//	}
//	
//	int index = 1;
//	for (int i = 5; i <= n; i++)
//	{
//		if (isprime[i] && isprime[i - 2])
//		{
//			twins[index].first = i - 2;
//			twins[index++].second = i;
//		}
//	}
//}
//
//int main()
//{
//	sieve(18409203);
//	//cout << "(" << twins[100000].first << ", " << twins[100000].second << ")" << endl;
//
//	int s;
//	while (cin >> s)
//	{
//		cout << "(" << twins[s].first << ", " << twins[s].second << ")" << endl;
//	}
//}
