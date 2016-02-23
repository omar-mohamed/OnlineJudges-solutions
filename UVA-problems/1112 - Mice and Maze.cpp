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
//int INF = 100000000;
//
//
//int n, m,t, e;
//bool dijkstra(const vector < vector<pair<int, int> > >& graph ,int start)
//{
//	vector<int> dist(n + 1,INF);
//	bitset<102> finished = 0;
//	priority_queue<pair<int, int> > pq;
//	pq.push(make_pair(0, start));
//	dist[start] = 0;
//	while (!pq.empty() && !finished[e])
//	{
//
//		start = pq.top().second;
//		pq.pop();
//		finished[start] = 1;
//		for (int i = 0; i < graph[start].size(); i++)
//		{
//			int neigh = graph[start][i].second;
//			if (!finished[neigh] && dist[neigh]>graph[start][i].first + dist[start])
//			{
//				dist[neigh] = graph[start][i].first + dist[start];
//				pq.push(make_pair(-dist[neigh], neigh));
//			}
//		}
//	}
//	return (dist[e] <= t);
//}
//
//
//int main()
//{
//	int c;
//	cin >> c;
//	bool first = true;
//	while (c--)
//	{
//		vector < vector<pair<int, int> > > graph(101);
//		cin >> n>>e>>t>>m;
//		for (int i = 0; i < m; i++)
//		{
//			int a, b,w;
//			cin >> a >> b >> w;
//			graph[a].push_back(make_pair(w,b));
//		}
//		int ans = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			ans += dijkstra(graph,i);
//		}
//		if (!first)
//			cout << endl;
//		first = false;
//		cout << ans << endl;
//
//	}
//}
