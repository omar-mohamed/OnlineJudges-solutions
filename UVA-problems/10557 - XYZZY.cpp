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
//
//ll INF = 1000000000000;
//vector< vector<int > > graph;
//
//
//struct Edge
//{
//	int from;
//	int to;
//	int cost;
//
//	Edge()
//	{
//		from = to = cost=0;
//	}
//	Edge(int from, int to, int cost)
//	{
//		this->from = from;
//		this->to = to;
//		this->cost = cost;
//	}
//};
//
//
//
//bool checkConnected(int n,int start)
//{
//	vector<bool> vis(n + 1, false);
//	vector<int> dist(n + 1, 0);
//
//	queue<int> q;
//
//	vis[start] = true;
//	q.push(start);
//
//	while (!q.empty() && !vis[n])
//	{
//		start = q.front();
//		q.pop();
//		for (int i = 0; i < graph[start].size(); i++)
//		{
//			int neigh = graph[start][i];
//
//			if (!vis[neigh])
//			{
//				q.push(neigh);
//				dist[neigh] = dist[start];
//				vis[neigh] = true;
//			}
//		}
//	}
//	return vis[n];
//}
//
//
//
//bool bellmanFord(const vector<Edge>& edges, int start, int n)
//{
//	bool updated;
//	vector<ll> dist(n + 1, 0);
//	dist[start] = 100;
//	for (int i = 0; i<n-1; i++)
//	{
//		updated = false;
//		for (int j = 0; j < edges.size(); j++)
//		{
//			Edge e = edges[j];
//			if (dist[e.to] < dist[e.from] + e.cost&&dist[e.from] != 0)
//			{
//				dist[e.to] = dist[e.from] + e.cost;
//				updated = true;
//			}
//		}
//		if (!updated)
//			break;
//	}
//	if (updated)
//	{
//		for (int j = 0; j < edges.size(); j++)
//		{
//			Edge e = edges[j];
//			if (dist[e.to] < dist[e.from] + e.cost&&dist[e.from] != 0)
//			{
//				dist[e.to] = dist[e.from] + e.cost;
//				if (checkConnected(n, e.from))
//					return true;
//				updated = true;
//			}
//		}
//	}
//
//
//	if (dist[n] > 0)
//		return true;
//	return false;
//}
//
////
//int main()
//{
////	freopen("out.txt", "w", stdout);
//	int n;
//	while (cin >> n&&n != -1)
//	{
//		vector<int> rooms(n+1);
//		graph.clear();
//		graph.resize(n + 1);
//		vector<Edge> edges;
//		edges.push_back(Edge(0, 1, 100));
//		for (int i = 1; i <= n; i++)
//		{
//			int neighs;
//			cin >> rooms[i]>>neighs;
//			for (int j = 0; j < neighs; j++)
//			{
//				int to;
//				cin >> to;
//				edges.push_back(Edge(i,to,0));
//				graph[i].push_back(to);
//			}
//		}
//		for (int i = 1; i < edges.size(); i++)
//		{
//			edges[i].cost = rooms[edges[i].to];
//		}
//
//		if (n == 1)
//		{
//			cout << "winnable" << endl;
//		}
//		else
//		{
//			bool ans = bellmanFord(edges, 1, n);
//			if (ans)
//				cout << "winnable" << endl;
//			else
//				cout << "hopeless" << endl;
//		}
//	}
//}
