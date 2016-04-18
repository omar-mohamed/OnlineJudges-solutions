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
//ll INF = 10000000000000;
//
//ll elevators;
//ll goal;
//
//struct node
//{
//	ll elevator;
//	ll floor;
//	node()
//	{
//		elevator = floor = 0;
//	}
//
//	node(ll ele, ll fl)
//	{
//		elevator = ele;
//		floor = fl;
//	}
//
//	bool operator<(const node& other) const
//	{
//		if (other.floor == floor)
//			return elevator<other.elevator;
//		return floor<other.floor;
//	}
//};
//
//map<node, vector<pair<node, ll> > > graph;
//
//ll finishNodesCount ;
//
//
//ll dijkstra(const vector<ll>& startingElevators)
//{
//	map<node, bool > fin;
//	map<node, ll > dist;
//	ll counter = 0;
//
//	priority_queue<pair<ll, node> > q;
//	for (ll i = 0; i < startingElevators.size(); i++)
//	{
//		q.push(make_pair(0, node(startingElevators[i], 0)));
//		dist[node(startingElevators[i], 0)] = 0;
//	}
//
//	while (!q.empty()&&counter<finishNodesCount)
//	{
//		node n = q.top().second;
//		q.pop();
//		if (fin[n])
//			continue;
//		fin[n] = true;
//		if (n.floor == goal)
//			counter++;
//
//		for (ll i = 0; i < graph[n].size(); i++)
//		{
//			node neigh = graph[n][i].first;
//			ll weigh = graph[n][i].second;
//			if (!fin[neigh] && ((dist.find(neigh) == dist.end()) || (dist[neigh] > dist[n] + weigh)))
//			{
//				dist[neigh] = dist[n] + weigh;
//				q.push(make_pair(-dist[neigh], neigh));
//			}
//		}
//	}
//
//	ll mi = INF;
//	for (ll i = 0; i < elevators; i++)
//	{
//		node g(i,goal);
//		if (fin[g])
//		{
//			mi = min(mi, dist[g]);
//		}
//	}
//	if (mi == INF)
//		return -1;
//	return mi;
//}
//
//int main()
//{
////	freopen("out.txt", "w", stdout);
//	while (cin >> elevators >> goal)
//	{
//		vector<ll> timeForElevator(elevators);
//		graph.clear();
//		for (ll i = 0; i<elevators; i++)
//			cin >> timeForElevator[i];
//		cin.ignore();
//		vector<ll> startingElevators;
//
//		finishNodesCount = 0;
//		for (ll i = 0; i<elevators; i++)
//		{
//			string line;
//			getline(cin, line);
//			stringstream ss(line);
//			string buff;
//			bool first = true;
//			node lastNode;
//			while (ss >> buff)
//			{
//				ll floor = atoi(buff.c_str());
//				node newNode(i, floor);
//				if (floor == 0)
//					startingElevators.push_back(i);
//				if (floor == goal)
//					finishNodesCount++;
//				else
//				{
//					for (ll j = 0; j<i; j++)
//					{
//						node neigh(j, floor);
//						if (graph.find(neigh) != graph.end())
//						{
//							graph[newNode].push_back(make_pair(neigh, 60));
//							graph[neigh].push_back(make_pair(newNode, 60));
//						}
//					}
//				}
//				if (!first)
//				{
//					graph[lastNode].push_back(make_pair(newNode, timeForElevator[i] * abs(newNode.floor - lastNode.floor)));
//					graph[newNode].push_back(make_pair(lastNode, timeForElevator[i] * abs(newNode.floor - lastNode.floor)));
//
//				}
//				first = false;
//				lastNode = newNode;
//			}
//
//		}
//
//		ll ans=dijkstra(startingElevators);
//		if (ans == -1)
//			cout << "IMPOSSIBLE" << endl;
//		else
//			cout << ans << endl;
//	}
//	return 0;
//}
