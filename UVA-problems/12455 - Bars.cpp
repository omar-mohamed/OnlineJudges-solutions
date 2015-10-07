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
//int memo[21][1001];
//int arr[21];
//int target, n;
//bool solve(int index,int sum)
//{
//	if (sum == target)
//		return true;
//	if (index == n || sum > target)
//		return false;
//	if (memo[index][sum] != -1)
//		return memo[index][sum];
//	return  memo[index][sum] = solve(index + 1, sum) || solve(index + 1, sum + arr[index]);
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		memset(memo, -1, sizeof(memo));
//		cin >> target>>n;
//		for (int i = 0; i < n; i++)
//			cin >> arr[i];
//		if (solve(0, 0))
//			cout << "YES\n";
//		else
//			cout << "NO\n";
//	}
//	return 0;
//}