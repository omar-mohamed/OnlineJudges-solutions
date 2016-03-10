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
//struct edge
//{
//	int node1;
//	int node2;
//	double weight;
//	edge()
//	{
//		node1 = 0;
//		node2 = 0;
//		weight = 0;
//	}
//	edge(int node1, int node2, double w)
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
//class Disjoint_Set {
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
//
//class graph
//{
//private:
//	vector<edge> edges;
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
//	pair<int, vector<edge> > minimumSpaningTree()
//	{
//		sort(edges.begin(), edges.end(), ascSort);
//		vector<edge> minSpaningTree;
//		Disjoint_Set<int> disjointSet;
//		int cost = 0;
//		for (int i = 0; i < edges.size(); i++)
//		{
//			if (!disjointSet.isSameSet(edges[i].node1, edges[i].node2))
//			{
//				cost += edges[i].weight;
//				disjointSet.unionSet(edges[i].node1, edges[i].node2);
//				minSpaningTree.push_back(edges[i]);
//			}
//		}
//		return make_pair(cost, minSpaningTree);
//	}
//
//	pair<int, vector<edge> > minimumSpaningTreeExcludingEdge(edge e)
//	{
//		sort(edges.begin(), edges.end(), ascSort);
//		vector<edge> minSpaningTree;
//		Disjoint_Set<int> disjointSet;
//		int cost = 0;
//		for (int i = 0; i<edges.size(); i++)
//		{
//			if ((e == edges[i]) == false && !disjointSet.isSameSet(edges[i].node1, edges[i].node2))
//			{
//				cost += edges[i].weight;
//				disjointSet.unionSet(edges[i].node1, edges[i].node2);
//				minSpaningTree.push_back(edges[i]);
//			}
//		}
//		return make_pair(cost, minSpaningTree);
//	}
//
//	pair<int, int > secondMinimumSpaningTree()
//	{
//		pair<int, vector<edge> > p = this->minimumSpaningTree();
//		int MSTcost = p.first;
//		vector<edge> mst = p.second;
//
//		vector<edge> secondMst;
//		int minsoFar = 10000000;
//		for (int i = 0; i<mst.size(); i++)
//		{
//			p = minimumSpaningTreeExcludingEdge(mst[i]);
//			if (p.first < minsoFar &&p.first>=MSTcost)
//			{
//				minsoFar = p.first;
//				secondMst = p.second;
//			}
//		}
//		return make_pair(MSTcost, minsoFar);
//	}
//
//};
//
//int main()
//{
//	int n, e,t;
//
//	cin >> t;
//	for (int c = 1; c <= t; c++)
//	{
//		cin >> n >> e;
//		graph g;
//		for (int i = 0; i < e; i++)
//		{
//			int node1, node2, w;
//			cin >> node1 >> node2 >> w;
//			g.addUndirectedEdge(node1, node2, w);
//		}
//
//		pair<int, int> p = g.secondMinimumSpaningTree();
//
//		cout << p.first << " " << p.second << endl;
//	}
//}