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
//
//vector<int> primeNumbers;
//
////unordered_map<int, bool> primeNums;
//
//bitset<1000001> notPrime;
//
//
//void sieve()
//{
//	notPrime = 0;
//
//	for (int i = 2; i*i <= 1000000; i++)
//	{
//		if (!notPrime[i])
//		{
//			for (int j = i*i; j <= 1000000; j += i)
//			{
//				notPrime[j] = true;
//			}
//		}
//	}
//
//	for (int i = 2; i*i <= 1000000; i++)
//	{
//		if (!notPrime[i])
//			primeNumbers.push_back(i);
//	}
//}
//
//
//
//
//int main()
//{
//	sieve();
//	int n;
//	while (cin >> n&&n)
//	{
//		bool found = true;
//		for (int i = 0; i < primeNumbers.size(); i++)
//		{
//			if (primeNumbers[i] > n)
//			{
//				break;
//				found = false;
//			}
//			if (!notPrime[n - primeNumbers[i]])
//			{
//				cout << n << " = " << primeNumbers[i] <<" + "<< n - primeNumbers[i] << endl;
//				break;
//			}
//		}
//	}
//}