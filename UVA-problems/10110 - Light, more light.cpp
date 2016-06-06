//#include <iostream>
//#include<vector>
//#include<queue>
//#include<stack>
//#include <stdio.h>
//#include <stdlib.h>
//#include<unordered_map>
//#include <time.h>
//#include<algorithm>
//#include<string>
//#include<map>
//#include<bitset>
//using namespace std;
//typedef long long ll;
//ll INF = 100000000000;
//
////10110 - Light, more light
//
//vector<bool> isPrime(65538, true);
//vector<int> primes;
//
//void sieve(int num)
//{
//	isPrime[0] = isPrime[1] = false;
//	for (int i = 2; i*i <= num; i++)
//	{
//		if (isPrime[i])
//		{
//			for (int j = i*i; j <= num; j += i)
//				isPrime[j] = false;
//		}
//	}
//	for (int i = 2; i <= num; i++)
//		if (isPrime[i])
//			primes.push_back(i);
//}
//
//
//int divisors(ll num)
//{
//	int divisors = 1;
//	int index = 0;
//	for (;;)
//	{
//		if (index >= primes.size())
//			break;
//		int i = primes[index++];
//		if (i*i>num)
//			break;
//		int counter = 1;
//		while (num%i == 0)
//		{
//			num /= i;
//			counter++;
//		}
//		divisors *= counter;
//	}
//
//	if (num>1)
//		divisors *= 2;
//	return divisors;
//}
//
//
//int main()
//{
//	ll num;
//	sieve(65537);
//	while (cin >> num&&num)
//	{
//		if (divisors(num) & 1)
//			cout << "yes" << endl;
//		else
//			cout << "no" << endl;
//	}
//	return 0;
//}