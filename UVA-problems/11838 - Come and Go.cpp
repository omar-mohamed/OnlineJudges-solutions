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
//vector< vector<int> > graph;
//vector< vector<int> > reversedGraph;
//
//stack<int> order;
//bitset<10001> vis;
//void DFS(int name)
//{
//	vis[name] = true;
//	for (int i = 0; i < graph[name].size(); i++)
//	{
//		if (!vis[graph[name][i]])
//			DFS(graph[name][i]);
//	}
//	order.push(name);
//}
//
//void DFS2(int name)
//{
//	vis[name] = true;
//	for (int i = 0; i < reversedGraph[name].size(); i++)
//	{
//		if (!vis[reversedGraph[name][i]])
//			DFS2(reversedGraph[name][i]);
//	}
//}
//
//
//int main()
//{
//	int n, m;
//	while (cin >> n >> m)
//	{
//		if (n == 0 && m == 0)
//			break;
//		graph.clear();
//		graph.resize(n + 1);
//		reversedGraph.clear();
//		reversedGraph.resize(n + 1);
//		vis = 0;
//
//		for (int i = 0; i < m; i++)
//		{
//			int n1, n2, type;
//			cin >> n1 >> n2 >> type;
//			if (type == 1)
//			{
//				graph[n1].push_back(n2);
//				reversedGraph[n2].push_back(n1);
//			}
//			else
//			{
//				graph[n1].push_back(n2);
//				graph[n2].push_back(n1);
//				reversedGraph[n2].push_back(n1);
//				reversedGraph[n1].push_back(n2);
//			}
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			if (!vis[i])
//			{
//				DFS(i);
//			}
//		}
//		vis = 0;
//		int SCC = 0;
//		while (!order.empty())
//		{
//			if (!vis[order.top()])
//			{
//				DFS2(order.top());
//				SCC++;
//			}
//			order.pop();
//		}
//		bool connected = (SCC==1);
//
//		if (connected)
//			cout << "1\n";
//		else
//			cout << "0\n";
//
//	}
//
//}