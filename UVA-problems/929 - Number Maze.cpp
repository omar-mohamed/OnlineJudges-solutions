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
//ll INF = 10000000000;
//
//ll maze[1000][1000];
//bool vis[1000][1000];
//ll dist[1000][1000];
//int n, m;
//int directionX[] = {1,-1,0,0};
//int directionY[] = {0,0,1,-1};
//
//ll dijkstra(int row, int col,int targetRow,int targetCol)
//{
//	priority_queue<pair<int, pair<int, int> > > pq;
//	pq.push(make_pair(0, make_pair(row, col)));
//	dist[row][col] = maze[row][col];
//	while (!pq.empty() && !vis[targetRow][targetCol])
//	{
//		row = pq.top().second.first;
//		col = pq.top().second.second;
//		pq.pop();
//		vis[row][col] = true;
//		for (int i = 0; i < 4; i++)
//		{
//			int newRow = row + directionX[i];
//			int newCol = col + directionY[i];
//			if (newRow<0 || newRow>n - 1 || newCol<0 || newCol>m - 1)
//				continue;
//			else
//			{
//				if (!vis[newRow][newCol] && dist[newRow][newCol]>dist[row][col] + maze[newRow][newCol])
//				{
//					int newCost = dist[row][col] + maze[newRow][newCol];
//					dist[newRow][newCol] = newCost;
//					pq.push(make_pair(-newCost, make_pair(newRow, newCol)));
//				}
//			}
//		}
//	}
//	return dist[targetRow][targetCol];
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		cin >> n >> m;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < m; j++)
//			{
//				vis[i][j] = false;
//				dist[i][j] = INF;
//				cin >> maze[i][j];
//			}
//
//		cout << dijkstra(0, 0, n - 1, m - 1) << endl;
//	}
//}