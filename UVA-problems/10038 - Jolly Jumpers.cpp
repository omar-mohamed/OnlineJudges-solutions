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
//int main()
//{
//	int n,diff;
//	int arr[3001];
//	bool ans;
//	while (cin >> n)
//	{
//		cin >> arr[0];
//		vector<bool> vis(n);
//		for (int i = 1; i < n; i++)
//		{
//			cin >> arr[i];
//			diff = abs(arr[i] - arr[i - 1]);
//			if (diff < n)
//				vis[diff] = true;
//		}
//		ans = true;
//		for (int i = 1; i < n; i++)
//			if (!vis[i])
//			{
//				ans = false;
//				break;
//			}
//		if (ans)
//			cout << "Jolly\n";
//		else
//			cout << "Not jolly\n";
//	}
//	return 0;
//}