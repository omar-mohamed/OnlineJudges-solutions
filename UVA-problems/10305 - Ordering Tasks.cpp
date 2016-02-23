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
//bitset<101> vis;
//stack<int> order;
//vector<vector<int> > graph(101);
//void DFS(int node)
//{
//	vis[node] = true;
//	for (int i = 0; i < graph[node].size(); i++)
//	{
//		if (!vis[graph[node][i]])
//			DFS(graph[node][i]);
//	}
//	order.push(node);
//}
//
//int main()
//{
//	int n, m;
//	while (cin >> n >> m)
//	{
//		if (n == 0 && m == 0)
//			break;
//		vis = 0;
//		for (int i = 0; i < m; i++)
//		{
//			int v, ne;
//			cin >> v >> ne;
//			graph[v].push_back(ne);
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			if (!vis[i])
//				DFS(i);
//		}
//		while (!order.empty())
//		{
//			cout << order.top();
//			order.pop();
//			if (!order.empty())
//				cout << " ";
//		}
//		cout << endl;
//	}
//}