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
//typedef  long long ll;
//ll INF = 10000000000000;
//
//
//vector<bool> isPrime(10000009, true);
//vector<ll> primes;
//
//void sieve(ll num)
//{
//	isPrime[0] = isPrime[1] = false;
//	for (ll i = 2; i*i <= num; i++)
//	{
//		if (isPrime[i])
//		{
//			for (ll j = i*i; j <= num; j += i)
//				isPrime[j] = false;
//		}
//	}
//	for (ll i = 2; i <= num; i++)
//		if (isPrime[i])
//			primes.push_back(i);
//}
//
//
//ll divisors(ll num)
//{
//	int divs = 0;
//	int index = 0;
//	ll ma = 0;
//	for (;;)
//	{
//		if (index >= primes.size() || num == 1)
//			break;
//		ll i = primes[index++];
//		if (i*i>num)
//			break;
//		int counter = 1;
//		while (num%i == 0)
//		{
//			num /= i;
//			counter = 2;
//		}
//		if (counter>1)
//		{
//			divs++;
//			ma = max(i, ma);
//		}
//	}
//	if (num > 1)
//	{
//		ma = max(ma, num);
//		divs++;
//	}
//	if (divs <= 1)
//		return -1;
//
//	return ma;
//
//}
//
//
//int main()
//{
////	freopen("out.txt", "w", stdout);
//	ll num;
//	sieve(10000000);
//	while (cin >> num&&num)
//	{
//		if (num < 0)
//			num = -num;
//		cout << divisors(num) << endl;
//	}
//	return 0;
//}