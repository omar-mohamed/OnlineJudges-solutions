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
//bool check(vector<int> arr)
//{
//	vector<bool> vis(53, false);
//	sort(arr.begin(), arr.begin() + 3);
//	sort(arr.begin() + 3, arr.end());
//	int lose = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 3; j < 6; j++)
//		{
//			if (!vis[arr[j]] && arr[j] < arr[i])
//			{
//				vis[arr[j]] = true;
//				lose++;
//				break;
//			}
//		}
//	}
//	if (lose >= 2)
//		return false;
//	return true;
//}
//
//int main()
//{
//	vector<int> arr(6);
//	bool win;
//	int i;
//	while (cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4])
//	{
//		if (arr[0] == 0)
//			break;
//		win = false;
//		vector<bool> vis(53, false);
//		vis[arr[0]] = vis[arr[1]] = vis[arr[2]] = vis[arr[3]] = vis[arr[4]] = true;
//		for (i = 1; i <= 52; i++)
//		{
//			if (!vis[i])
//			{
//				arr[5] = i;
//				if (check(arr))
//				{
//					win = true;
//					break;
//				}
//			}
//		}
//		if (win)
//			cout << i << endl;
//		else
//			cout << -1 << endl;
//	}
//	return 0;
//}