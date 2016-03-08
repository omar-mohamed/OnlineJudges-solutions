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
//int INF = 10000000;
//
//struct edge
//{
//	int node1;
//	int node2;
//	int weight;
//	edge()
//	{
//		node1 = 0;
//		node2 = 0;
//		weight = 0;
//	}
//	edge(int node1, int node2, int w)
//	{
//		this->node1 = node1;
//		this->node2 = node2;
//		this->weight = w;
//	}
//
//	bool operator==(const edge& e)
//	{
//		return (e.node1 == this->node1&&e.node2 == this->node2&&e.weight == this->weight);
//	}
//};
//
//template<class T>
//class Disjoint_Set 
//{
//private:
//	unordered_map<T, T> Parent;
//	unordered_map<T, int> Rank;
//
//public:
//	Disjoint_Set() {}
//	Disjoint_Set(const vector<T>& v)
//	{
//		initSet(v);
//	}
//
//	Disjoint_Set(const int& n)
//	{
//		initSet(n);
//	}
//
//	void initSet(const int& n)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			Parent[i] = i;
//			Rank[i] = 0;
//		}
//	}
//
//	void initSet(const vector<T>& v)
//	{
//		for (int i = 0; i < (int)v.size(); i++)
//		{
//			Parent[v[i]] = v[i];
//			Rank[v[i]] = 0;
//		}
//	}
//	T findSet(const T& elem)
//	{
//		if (Parent.find(elem) == Parent.end())
//		{
//			Parent[elem] = elem;
//			return elem;
//		}
//		if (Parent[elem] == elem)
//			return elem;
//		else
//			return findSet(Parent[elem]);
//	}
//
//	bool isSameSet(const T& elem1, const T& elem2)
//	{
//		return findSet(elem1) == findSet(elem2);
//	}
//
//	void unionSet(const T& elem1, const T& elem2)
//	{
//		T set1 = findSet(elem1);
//		T set2 = findSet(elem2);
//		if (set1 == set2)
//			return;
//		if (Rank[set1] > Rank[set2])
//			Parent[set2] = set1;
//		else if (Rank[set1] < Rank[set2])
//			Parent[set1] = set2;
//		else
//		{
//			Parent[set1] = set2;
//			Rank[set2]++;
//		}
//
//	}
//};
//
//bool ascSort(edge e2, edge e1)
//{
//	return e2.weight<e1.weight;
//}
//
//class graph
//{
//private:
//	vector<edge> edges;
//
//
//public:
//
//	void addDirectedEdge(int node1, int node2, int weight)
//	{
//		edges.push_back(edge(node1, node2, weight));
//	}
//	void addUndirectedEdge(int node1, int node2, int weight)
//	{
//		edges.push_back(edge(node1, node2, weight));
//	}
//
//	vector<vector<pair<int,int> > > minimumSpaningTree()
//	{
//		sort(edges.begin(), edges.end(), ascSort);
//		vector<edge> minTree;
//		Disjoint_Set<int> disjointSet;
//		vector < vector<pair<int, int> > > minSpan(105);
//		for (int i = 0; i < edges.size(); i++)
//		{
//			if (!disjointSet.isSameSet(edges[i].node1, edges[i].node2))
//			{
//
//				disjointSet.unionSet(edges[i].node1, edges[i].node2);
//				minSpan[edges[i].node1].push_back(make_pair(edges[i].node2, edges[i].weight));
//				minSpan[edges[i].node2].push_back(make_pair(edges[i].node1, edges[i].weight));
//
//			}
//
//		}
//		return minSpan;
//	}
//
//	void clear()
//	{
//		edges.clear();
//	}
//};
//
//bitset<105> vis;
//
//
//int BFS(const vector<vector<pair<int, int> > >& minSpan, int node, int target)
//{
//	vis = 0;
//	vector<int> dist(101,0);
//	queue<int> q;
//	q.push(node);
//	vis[node] = 1;
//	while (!q.empty()&&!vis[target])
//	{
//
//		node = q.front();
//		q.pop();
//
//		for (int i = 0; i < minSpan[node].size(); i++)
//		{
//			int neigh = minSpan[node][i].first;
//			if (!vis[neigh])
//			{
//				dist[neigh] =max(dist[node] , minSpan[node][i].second);
//				q.push(neigh);
//				vis[neigh] = 1;
//			}
//		}
//	}
//	return dist[target];
//}
//
//int main()
//{
////	freopen("out.txt", "w", stdout);
//	int n, e, q;
//	int cases = 1;
//	bool first = true;
//	while (cin >> n >> e >> q)
//	{
//		if (n == 0 && e == 0 && q == 0)
//			break;
//		graph g;
//		for (int i = 0; i < e; i++)
//		{
//			int n1, n2, w;
//			cin >> n1 >> n2 >> w;
//			g.addUndirectedEdge(n1, n2, w);
//		}
//		vector<vector<pair<int, int> > > minSpan = g.minimumSpaningTree();
//		if (!first)
//			cout << endl;
//		first = false;
//		cout << "Case #" << cases++<<endl;
//		for (int i = 0; i < q; i++)
//		{
//			int from, to;
//			cin >> from >> to;
//
//			int path = BFS(minSpan, from, to);
//			if (vis[to])
//				cout << path << endl;
//			else
//				cout << "no path" << endl;
//		}
//	}
//}