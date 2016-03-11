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
//#define NOTCOLORED 0
//#define REDCOLORED 1
//#define BLACKCOLORED 2
//
//int colors[302];
//
//bool BFS(const vector<vector<int> >& graph, int start)
//{
//	queue<int> q;
//	q.push(start);
//	colors[start] = REDCOLORED;
//	while (!q.empty())
//	{
//		start = q.front();
//		q.pop();
//		for (int i = 0; i < graph[start].size(); i++)
//		{
//			int neigh = graph[start][i];
//			if (colors[start] == colors[neigh])
//				return false;
//			else if (colors[neigh] == NOTCOLORED)
//			{
//				if (colors[start] == REDCOLORED)
//					colors[neigh] = BLACKCOLORED;
//				else
//					colors[neigh] = REDCOLORED;
//
//				q.push(neigh);
//			}
//		}
//	}
//	return true;
//}
//
//int main()
//{
//
////	freopen("out.txt", "w", stdout);
//	int n;
//	while (cin>>n&&n)
//	{
//
//		memset(colors, 0, sizeof(colors));
//		vector<vector<int> > graph(n+1);
//		int node1, node2;
//		while(cin >> node1 >> node2)
//		{
//			if (node1 == 0 && node2 == 0)
//				break;
//			graph[node1].push_back(node2);
//			graph[node2].push_back(node1);
//		}
//
//		bool canBeComposed = true;
//		for (int i = 1; i <= n&&canBeComposed; i++)
//		{
//			if (colors[i] == NOTCOLORED)
//			{
//				if (!BFS(graph, i))
//					canBeComposed = false;
//			}
//		}
//		if (!canBeComposed)
//			cout << "NO" << endl;
//		else
//			cout << "YES" << endl;
//	}
//}