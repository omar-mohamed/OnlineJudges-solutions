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
//
//bitset<50001> vis;
//int arr[50001];
//int dist[50001];
//bitset<50001> recStack;
//int mode;
//int finalNode;
//int backEdgeNode;
//int DFS(int start)
//{
//	vis[start] = 1;
//	recStack[start] = 1;
//	
//	if (vis[arr[start]] && recStack[arr[start]])
//	{
//		mode = 1;
//		finalNode = start;
//		backEdgeNode = arr[start];
//		recStack[start] = 0;
//		return 1;
//	}
//	else if (vis[arr[start]])
//	{
//		 dist[start] = dist[arr[start]] + 1;
//		 recStack[start] = 0;
//		 return dist[start];
//	}
//	else
//	{
//		dist[start] = DFS(arr[start]) + 1;
//		recStack[start] = 0;
//		return dist[start];
//	}
//	
//}
//
//int main()
//{
//	int t;
//	int n;
//	cin >> t;
//	for (int cases = 1; cases <= t; cases++)
//	{
//		cin >> n;
//		for (int i = 1; i <= n; i++)
//		{
//			int tmp;
//			cin >> tmp;
//			cin >> arr[tmp];
//		}
//		vis = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			mode = 0;
//			if (!vis[i])
//				DFS(i);
//			if (mode == 1)
//			{
//				int node = backEdgeNode;
//				while (node != finalNode)
//				{
//					node = arr[node];
//					dist[node] = dist[backEdgeNode];
//				}
//			}
//		}
//		int ma = 0;
//		int ans = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			if (dist[i] > ma)
//			{
//				ma = dist[i];
//				ans = i;
//			}
//		}
//		cout << "Case " << cases << ": " << ans << endl;
//
//	}
//}