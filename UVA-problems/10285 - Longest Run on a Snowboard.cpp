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
//int maze[101][101];
//bool vis[101][101];
//int dist[101][101];
//int n, m;
//int directionX[] = {1,-1,0,0};
//int directionY[] = {0,0,1,-1};
//
//int DFS(int row,int col)
//{
//	if (vis[row][col])
//		return dist[row][col];
//	vis[row][col] = true;
//	priority_queue<pair<int  ,pair<int,int> > > pq;
//	for (int i = 0; i < 4; i++)
//	{
//		int newRow = row + directionX[i];
//		int newCol = col + directionY[i];
//		if (newRow<0 || newRow>n - 1 || newCol<0 || newCol>m - 1)
//			continue;
//		else if (maze[newRow][newCol] < maze[row][col])
//			pq.push(make_pair( maze[newRow][newCol],make_pair(newRow,newCol)));
//	}
//	int ma = 0;
//	while (!pq.empty())
//	{
//		ma = max(ma, DFS(pq.top().second.first, pq.top().second.second)+1);
//		pq.pop();
//	}
//	return dist[row][col]= ma;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	string s;
//	while (t--)
//	{
//		cin >> s>>n>>m;
//		priority_queue<pair<int, pair<int, int> > > pq;
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				vis[i][j] = false;
//				dist[i][j] = 0;
//				cin >> maze[i][j];
//				pq.push(make_pair(maze[i][j], make_pair(i, j)));
//			}
//		}
//		int ans = 0;
//		while (!pq.empty())
//		{
//			if (!vis[pq.top().second.first][pq.top().second.second])
//			{
//				ans = max(ans, DFS(pq.top().second.first, pq.top().second.second)+1);
//			}
//			pq.pop();
//		}
//		cout << s << ": " << ans<<endl;
//	}
//}