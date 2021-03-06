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
//unordered_map<string, vector<string> > graph;
//unordered_map<string, vector<string> > reversedGraph;
//
//stack<string> order;
//unordered_map<string, bool> vis;
//vector<string> circle;
//void DFS(string name)
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
//void DFS2(string name)
//{
//	vis[name] = true;
//	circle.push_back(name);
//	for (int i = 0; i < reversedGraph[name].size(); i++)
//	{
//		if (!vis[reversedGraph[name][i]])
//			DFS2(reversedGraph[name][i]);
//	}
//}
//
//int main()
//{
//	int n, m;
//	int t = 1;
//	bool first = true;
//	while (cin >> n >> m)
//	{
//		if (n == 0 && m == 0)
//			break;
//		graph.clear();
//		reversedGraph.clear();
//		vis.clear();
//		set<string> names;
//		for (int i = 0; i < m; i++)
//		{
//			string s,z;
//			cin >> s>>z;
//			graph[s].push_back(z);
//			reversedGraph[z].push_back(s);
//			names.insert(s);
//			names.insert(z);
//		}
//		for (const auto& x : names)
//		{
//			if (!vis[x])
//			{
//				DFS(x);
//			}
//		}
//		if (!first)
//			cout << endl;
//		first = false;
//		cout << "Calling circles for data set " << t++ << ":" << endl;
//		vis.clear();
//		while(!order.empty())
//		{
//			string x = order.top();
//			order.pop();
//			if (!vis[x])
//			{
//				DFS2(x);
//				for (int i = 0; i < circle.size(); i++)
//				{
//					cout << circle[i];
//					if (i != circle.size()-1)
//						cout << ", ";
//				}
//				cout << endl;
//				circle.clear();
//			}
//		}
//	}
//}