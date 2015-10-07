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
//int n,m,d;
//int dp[201][21][10];
//int arr[201];
//
//int mod(int a, int b)
//{
//	return (a%b + b) % b;
//}
//
//int solve(int index, int sum,int size)
//{
//	if (size == m)
//	{
//		if (sum == 0)
//			return 1;
//		return 0;
//	}
//	if (index == n)
//		return 0;
//	if (dp[index][sum][size] != -1)
//		return dp[index][sum][size];
//	return dp[index][sum][size] = solve(index + 1, mod(sum +  arr[index],d), size + 1) + solve(index + 1, sum, size);
//
//}
//
//int main()
//{
//	int q,set=1;
//	while (cin >> n >> q&&n&&q)
//	{
//		for (int i = 0; i < n; i++)
//			cin >> arr[i];
//		cout << "SET " << set++ << ":\n";
//	
//		for (int i = 1; i <= q; i++)
//		{
//			memset(dp, -1, sizeof(dp));
//			cin >> d >> m;
//			cout << "QUERY " << i << ": " << solve(0,0,0) << endl;
//		}
//	}
//	return 0;
//}