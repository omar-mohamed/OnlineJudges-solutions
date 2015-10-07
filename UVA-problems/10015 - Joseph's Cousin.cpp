//#include<iostream>
//#include<string>
//#include<math.h>
//#include<cmath>
//#include<iomanip>
//#include<stdio.h>
//#include <algorithm>
//#include<string.h>
//#include<vector>
//#include<list>
//#pragma warning(disable: 4996)
//using namespace std;
//
//vector<int> primes(3517);
//
//void Sieve(int n)
//{
//	vector<bool> isprime(32651,true);
//	isprime[0] = isprime[1] = false;
//	for (int i = 2; i*i <= n; i++)
//	{
//		if (isprime[i])
//		{
//			for (int j = i*i; j <= n; j += i)
//				isprime[j] = false;
//		}
//	}
//	int index = 0;
//	for (int i = 2; i <= n; i++)
//		if (isprime[i])
//			primes[index++] = i;
//}
//
//int test(int k)
//{
//	vector<int> people(k);
//	for (int i = 0; i < k; i++)
//		people[i] = i + 1;
//	int kill = 0;
//	int size = k;
//	for (int i = 0;;i++)
//	{
//		if (people.size() == 1)
//			return people.front();
//		kill += primes[i]-1;
//		kill = (kill%size--);
//		people.erase(people.begin() + kill );
//
//	}
//	return false;
//}
//
//int main()
//{
//	int k;
//	Sieve(32650);
//	int ans[3502];
//	for (int i = 1; i <= 3501; i++)
//		ans[i] = test(i);
//	while (cin >> k&&k != 0)
//	{
//		cout << test(k)<<endl;
//	}
//	return 0;
//}