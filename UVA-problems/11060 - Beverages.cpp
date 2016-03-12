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
//unordered_map<string, int> indexes;
//
//class Compare
//{
//public:
//	bool operator() (string s2, string s1)
//	{
//		return indexes[s1] < indexes[s2];
//	}
//};
//
//
//vector<string> Kahn(unordered_map<string,vector<string> >& graph, unordered_map<string,int>& inDegree ,const vector<string>& nodes)
//{
////	queue<string> q;
//	vector<string> order;
//	priority_queue<string, vector<string>, Compare> pq;
//	for (int i = 0; i < nodes.size(); i++)
//	{
//		if (inDegree[nodes[i]] == 0)
//			pq.push(nodes[i]);
//	}
//
//	while (!pq.empty())
//	{
//		string front = pq.top();
//		pq.pop();
//		order.push_back(front);
//		for (int i = 0; i < graph[front].size(); i++)
//		{
//			string neigh = graph[front][i];
//			inDegree[neigh]--;
//			if (inDegree[neigh] == 0)
//				pq.push(neigh);
//		}
//	}
//	return order;
//}
//
//int main()
//{
//	int n,e,t=1;
//	//freopen("out.txt", "w", stdout);
//	while (cin >> n)
//	{
//		vector<string> nodes;
//		unordered_map<string, vector<string> > graph;
//		unordered_map<string, int> inDegree;
//		int index = 0;
//		indexes.clear();
//		for (int i = 0; i < n; i++)
//		{
//			string node;
//			cin >> node;
//			nodes.push_back(node);
//			indexes[node]=index++;
//		}
//		cin >> e;
//		for (int i = 0; i < e; i++)
//		{
//			string node1, node2;
//			cin >> node1 >> node2;
//			graph[node1].push_back(node2);
//			inDegree[node2]++;
//		}
//		vector<string> order= Kahn(graph,inDegree,nodes);
//		cout << "Case #" << t++ << ": Dilbert should drink beverages in this order: ";
//		for (int i = 0; i < order.size(); i++)
//		{
//			cout << order[i];
//			if (i != order.size() - 1)
//				cout << " ";
//		}
//		cout <<"."<< endl << endl;
//
//	}
//}