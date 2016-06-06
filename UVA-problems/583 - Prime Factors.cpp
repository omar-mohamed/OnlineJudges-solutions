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
//vector<bool> isprime(46342,true);
//vector<ll> primeNums;
//void sieve(ll n)
//{
//	
//	isprime[0] = isprime[1] = false;
//
//	for (ll i = 2; i*i <= n; i++)
//	{
//		if (isprime[i])
//			for (ll j = i*i; j <= n; j += i)
//				isprime[j] = false;
//	}
//	
//	for (ll i = 2; i <= 46341; i++)
//	{
//		if(isprime[i])
//			primeNums.push_back(i);
//	}
//}
//
//vector<ll> primeFactors(ll n)
//{
//	vector<ll> primes;
//	for (int i = 0; i <primeNums.size(); i++)
//	{
//		if (primeNums[i] * primeNums[i]>n)
//			break;
//		while (n % primeNums[i] == 0)
//		{
//			n /= primeNums[i];
//			primes.push_back(primeNums[i]);
//		}
//	}
//	if (n > 1)
//		primes.push_back(n);
//	return primes;
//}
//
//int main()
//{
//	ll n;
//	sieve(46341);
//	while (cin >> n&&n != 0)
//	{
//		vector<ll> primes;
//		if (n < 0)
//			primes = primeFactors(-n);
//		else
//			primes = primeFactors(n);
//		cout << n << " =";
//
//		bool first = true;
//		if (n < 0)
//		{
//			cout << " -1";
//			first = false;
//		}
//		for (int i = 0; i < primes.size(); i++)
//		{
//			if(first)
//			   cout << " " << primes[i];
//			else
//				cout << " x " << primes[i];
//
//			first = false;
//		}
//		cout << endl;
//	}
//	return 0;
//}