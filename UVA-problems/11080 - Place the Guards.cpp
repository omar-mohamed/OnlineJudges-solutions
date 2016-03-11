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
//int colors[202];
//
//int redColored;
//int blackColored;
//
//bool BFS(const vector<vector<int> >& graph, int start)
//{
//	queue<int> q;
//	q.push(start);
//	colors[start] = REDCOLORED;
//	redColored++;
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
//				{
//					colors[neigh] = BLACKCOLORED;
//					blackColored++;
//				}
//				else
//				{
//					colors[neigh] = REDCOLORED;
//					redColored++;
//				}
//				q.push(neigh);
//			}
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	int t;
////	freopen("out.txt", "w", stdout);
//	cin >> t;
//	for (int c = 1; c <= t; c++)
//	{
//		int n, e;
//		cin >> n >> e;
//		redColored = blackColored = 0;
//		memset(colors, 0, sizeof(colors));
//		vector<vector<int> > graph(n+1);
//		for (int i = 0; i < e; i++)
//		{
//			int node1, node2;
//			cin >> node1 >> node2;
//			graph[node1].push_back(node2);
//			graph[node2].push_back(node1);
//		}
//
//		bool fightingWillOccur = false;
//		int mi = 0;
//		for (int i = 0; i < n&&!fightingWillOccur; i++)
//		{
//			if (colors[i] == NOTCOLORED)
//			{
//				redColored = 0;
//				blackColored = 0;
//				if (!BFS(graph, i))
//					fightingWillOccur = true;
//				else
//				{
//					if (redColored > 0 && blackColored > 0)
//						mi += min(redColored, blackColored);
//					else
//						mi += max(redColored, blackColored);
//				}
//			}
//		}
//		if (fightingWillOccur)
//			cout << "-1" << endl;
//		else
//			cout << mi << endl;
//	}
//}