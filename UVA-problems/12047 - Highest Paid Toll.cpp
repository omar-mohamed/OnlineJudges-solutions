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
//vector < vector<pair<int, ll> > > graph;
//
//int n;
//int p;
//
//ll dijkstra(int startingNode,int endingNode)
//{
//	vector<bool> fin(n + 1,false);
//	vector<ll> dist(n + 1);
//	vector<int> largestW(n + 1);
//	priority_queue<pair<ll, int> > q;
//
//	q.push(make_pair(0, startingNode));
//
//	while (!q.empty())
//	{
//		int node = q.top().second;
//		q.pop();
//		if (fin[n])
//			continue;
//		fin[n] = true;
//		for (int i = 0; i < graph[n].size(); i++)
//		{
//			int neigh = graph[n][i].first;
//			ll weigh = graph[n][i].second;
//			if (!fin[neigh] && weigh+dist[n] <= p &&weigh>dist[neigh])
//			{
//				dist[neigh] = weigh;
//				q.push(make_pair(dist[neigh], neigh));
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int t,m,s,e;
//	cin >> t;
//	for (int c = 0; c < t; c++)
//	{
//		graph.clear();
//		cin >> n >> m >> s >> e >> p;
//		graph.resize(n);
//
//		for (int i = 0; i < m; i++)
//		{
//			ll from, to, w;
//			cin >> from >> to >> w;
//			graph[from].push_back(make_pair(to, w));
//		}
//	}
//}