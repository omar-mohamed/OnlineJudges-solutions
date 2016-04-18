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
//
//const int INF = 100000000;
//
//int graph[2005][2005];
//bool vis[2005][2005];
//int dist[2005][2005];
//int rows,cols;
//
//int xMoves[] = {1,-1,0,0};
//int yMoves[] = {0,0,1,-1};
//int BFS()
//{
////	memset(vis,0,sizeof(vis));
////	memset(dist, 0, sizeof(dist));
//	queue<pair<int, int> > q;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			vis[i][j] = false;
//			dist[i][j] = 0;
//			if (graph[i][j] == 1)
//			{
//				vis[i][j] = true;
//				dist[i][j] = 0;
//				q.push(make_pair(i, j));
//			}
//		}
//	}
//
//	while (!q.empty())
//	{
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int newX = x + xMoves[i];
//			int newY = y + yMoves[i];
//			if (newX >= 0 && newX < rows && newY >= 0 && newY < cols && !vis[newX][newY])
//			{
//				dist[newX][newY] = dist[x][y]+1;
//				vis[newX][newY] = true;
//				q.push(make_pair(newX, newY));
//			}
//		}
//	}
//	int mi = INF;
//	for (int i = 0; i < rows; i++)
//		for (int j = 0; j < cols; j++)
//			if (graph[i][j] == 2)
//				mi = min(dist[i][j],mi);
//	return mi;
//}
//
//int main()
//{
//	int n, m;
//	while (cin >> n&&n)
//	{
//		memset(graph, 0, sizeof(graph));
//		for (int i = 0; i < n; i++)
//		{
//			int x, y;
//			cin >> x >> y;
//			graph[x][y] = 1;
//
//			rows = max(rows, x);
//			cols = max(cols, y);
//		}
//
//		cin >> m;
//
//		for (int j = 0; j < m; j++)
//		{
//			int x, y;
//			cin >> x >> y;
//			graph[x][y] = 2;
//			rows = max(rows, x);
//			cols = max(cols, y);
//		}
//		rows++;
//		cols++;
//		int ans = BFS();
//		cout << ans << endl;
//
//	}
//}