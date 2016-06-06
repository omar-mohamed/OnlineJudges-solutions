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
//bool checkPrime(int n)
//{
//	for (int i = 2; i*i <= n; i++)
//		if (n%i == 0)
//			return false;
//	return true;
//}
//
//int rev(int n)
//{
//	int r = 0;
//	while (n)
//	{
//		r = r * 10 + (n % 10);
//		n /= 10;
//	}
//	return r;
//}
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		if (checkPrime(n))
//		{
//			int r = rev(n);
//			if (r!=n&&checkPrime(r))
//				cout << n << " is emirp." << endl;
//			else
//				cout << n << " is prime." << endl;
//		}
//		else
//			cout << n << " is not prime." << endl;
//	}
//}