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
//bitset<100001> vis;
//
//vector<int> parent;
//
//vector<vector<int> > circles;
//
//void DFS(int name)
//{
//	vis[name] = 1;
//	for (int i = 0; i < graph[name].size(); i++)
//	{
//		if (!vis[graph[name][i]])
//			DFS(graph[name][i]);
//	}
//	order.push(name);
//}
//
//void DFS2(int name,int circle)
//{
//	vis[name] = 1;
//	circles[circles.size() - 1].push_back(name);
//	parent[name] = circle;
//	for (int i = 0; i < reversedGraph[name].size(); i++)
//	{
//		if (!vis[reversedGraph[name][i]])
//			DFS2(reversedGraph[name][i],circle);
//	}
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	for (int c = 0; c < t; c++)
//	{
//		int n, m;
//		cin >> n >> m;
//		graph.clear();
//		graph.resize(n + 1);
//		reversedGraph.clear();
//		reversedGraph.resize(n + 1);
//		circles.clear();
//		parent.clear();
//		parent.resize(n + 1);
//		vis = 0;
//		for (int i = 0; i < m; i++)
//		{
//			int s, z;
//			cin >> s >> z;
//			graph[s].push_back(z);
//			reversedGraph[z].push_back(s);
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
//				circles.push_back(vector<int>());
//				DFS2(order.top(),SCC);
//				SCC++;
//			}
//			order.pop();
//		}
//		vector<bool> hasInEdges(circles.size(),false);
//		for (int i = 0; i < circles.size(); i++)
//		{
//			for (const auto& x : circles[i])
//			{
//				for (int j = 0; j < graph[x].size(); j++)
//				{
//					int neigh = graph[x][j];
//					if (parent[neigh]!=i)
//					{
//						hasInEdges[parent[neigh]] = true;
//					}
//				}
//			}
//		}
//		int ans = 0;
//		for (int i = 0; i < hasInEdges.size(); i++)
//		{
//			if (!hasInEdges[i])
//				ans++;
//		}
//		cout << ans << endl;
//	}
//}
