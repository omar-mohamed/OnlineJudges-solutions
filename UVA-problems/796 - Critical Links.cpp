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
//
//vector<vector<int> > graph;
//bitset<1000> vis;
//int ti;
//
//int lowCount[1000];
//int visCount[1000];
//
//vector<pair<int,int> > bridges;
//
//void DFS(int node,int parent=-1)
//{
//	vis[node] = 1;
//	visCount[node] = lowCount[node] = ti++;
//	int numOfChildren = 0;
//	bool isArticulated = false;
//	for (int i = 0; i < graph[node].size(); i++)
//	{
//		int neigh = graph[node][i];
//		if (neigh == parent)
//			continue;
//		if (!vis[neigh])
//		{
//			DFS(neigh,node);
//			if (visCount[node] < lowCount[neigh])
//				bridges.push_back(make_pair(min( node,neigh),max(neigh,node)));
//			else
//			    lowCount[node] = min(lowCount[node], lowCount[neigh]);
//			numOfChildren++;
//		}
//		else
//		{
//			lowCount[node] = min(lowCount[node], visCount[neigh]);
//		}
//	}
//}
//
//
//
//
//int main()
//{
//	int n,node;
//	char c;
////	freopen("out.txt", "w", stdout);
//	while (cin >> n)
//	{
//		graph.clear();
//		bridges.clear();
//		memset(lowCount, 0, sizeof(lowCount));
//		memset(visCount, 0, sizeof(visCount));
//		vis = 0;
//		graph.resize(n + 1);
//		int neighbours;
//		for (int j = 0; j < n; j++)
//		{
//			cin >> node >> c >> neighbours >> c;
//			for (int i = 0; i < neighbours; i++)
//			{
//				int neigh;
//				cin >> neigh;
//				graph[node].push_back(neigh);
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			if (!vis[i])
//				DFS(i);
//		}
//		cout << bridges.size() << " critical links" << endl;
//		sort(bridges.begin(), bridges.end());
//		for (int i = 0; i < bridges.size(); i++)
//		{
//			cout << bridges[i].first << " - " << bridges[i].second << endl;
//		}
//		cout << endl;
//	}
//}