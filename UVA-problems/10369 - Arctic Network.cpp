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
////1
////6 14
////1021 1203
////1231 1200
////123  121
////123 3213
////1231 142
////1  3
////0 0
////11 111
////22 2222
////2222 22222
////334 32
////42 23
////121 11
////27 127

//double euclideanDistance(double x1, double y1, double x2, double y2)
//{
//	return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
//}
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
//double r;
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
//class graph
//{
//private:
//	vector<edge> edges;
//
//
//public:
//
//	void addDirectedEdge(int node1, int node2, double weight)
//	{
//		edges.push_back(edge(node1, node2, weight));
//	}
//	void addUndirectedEdge(int node1, int node2, double weight)
//	{
//		edges.push_back(edge(node1, node2, weight));
//	}
//
//	vector<edge> minimumSpaningTree(int s)
//	{
//		sort(edges.begin(), edges.end(), ascSort);
//		vector<edge> minTree;
//		Disjoint_Set<int> disjointSet;
//		bitset<105> vis = 0;
//		for (int i = 0; i < edges.size()&&s>0; i++)
//		{
//			if (!disjointSet.isSameSet(edges[i].node1, edges[i].node2))
//			{
//				disjointSet.unionSet(edges[i].node1, edges[i].node2);
//				minTree.push_back(edges[i]);
//				s--;
//			}
//
//		}
//		return minTree;
//	}
//
//	void clear()
//	{
//		edges.clear();
//	}
//};
//
//
//int main()
//{
//	int t,n,e;
//	//freopen("out.txt", "w", stdout);
//	cin >> t;
//	for (int c = 1; c <= t; c++)
//	{
//		cin >> n>>e;
//		graph g;
//		vector<pair<double, double> > coor;
//		for (int i = 0; i < e; i++)
//		{
//			double x, y;
//			cin >> x >> y;
//			for (int j = 0; j < i; j++)
//			{
//				g.addUndirectedEdge(i, j, euclideanDistance(x,y,coor[j].first,coor[j].second));
//			}
//			coor.push_back(make_pair(x, y));
//		}
//		vector<edge> minSpan = g.minimumSpaningTree(e-n);
//
//		double d = 0.0;
//		if (minSpan.size() > 0)
//			d = minSpan[minSpan.size() - 1].weight;
//		cout << fixed << setprecision(2) << d << endl;
//	}
//}
