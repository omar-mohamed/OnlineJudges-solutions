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
//int n, e;
//unordered_map<string, vector<string> > graph;
//
//unordered_map<string, bool> vis;
//
//int BFS(string start)
//{
//	vis[start] = true;
//	queue<string> q;
//	q.push(start);
//	unordered_map<string, int> dist;
//	int ma = 0;
//	while (!q.empty())
//	{
//		start = q.front();
//		q.pop();
//		vector<string> neighs = graph[start];
//		for (int i = 0; i < neighs.size(); i++)
//		{
//			string neigh = neighs[i];
//			if (!vis[neigh])
//			{
//				dist[neigh] = dist[start] + 1;
//				ma = max(ma, dist[neigh]);
//				vis[neigh] = true;
//				q.push(neigh);
//			}
//		}
//	}
//	return ma;
//}
//
//int main()
//{
////	freopen("out.txt", "w", stdout);
//	int cases = 1;
//	while (cin >> n >> e)
//	{
//		if (n == 0 && e == 0)
//			break;
//		graph.clear();
//		vis.clear();
//		set<string> s;
//		for (int i = 0; i < e; i++)
//		{
//			string s1, s2;
//			cin >> s1 >> s2;
//			graph[s1].push_back(s2);
//			graph[s2].push_back(s1);
//			s.insert(s1);
//			s.insert(s2);
//		}
//		int counter = 0;
//		for (string node : s)
//		{
//			if (!vis[node])
//			{
//				BFS(node);
//				counter++;
//			}
//			if (counter > 1)
//				break;
//		}
//		if (counter > 1||s.size()<n)
//			cout << "Network " << cases++ << ": DISCONNECTED"<<endl;
//		else
//		{
//			int ma = 0;
//			for (string node : s)
//			{
//				ma=max(ma,BFS(node));
//				vis.clear();
//			}
//			cout << "Network " << cases++ << ": " <<ma<< endl;
//		}
//		cout << endl;
//	}
//
//}