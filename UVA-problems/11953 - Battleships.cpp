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
//char arr[105][105];
//bool vis[105][105];
//
//int movesx[] = {1,-1,0,0};
//int movesy[] = {0,0,1,-1};
//
//bool BFS(int row,int col)
//{
//	queue<pair<int, int> > q;
//	q.push(make_pair(row, col));
//	vis[row][col] = true;
//	bool ship = false;
//	while (!q.empty())
//	{
//		row = q.front().first;
//		col = q.front().second;
//		q.pop();
//		if (arr[row][col] == 'x')
//			ship = true;
//		for (int k = 0; k < 4; k++)
//		{
//			int xMove = row + movesx[k];
//			int yMove = col + movesy[k];
//			if (arr[xMove][yMove] != '.' && !vis[xMove][yMove])
//			{
//				q.push(make_pair(xMove, yMove));
//				vis[xMove][yMove] = true;
//			}
//		}
//	}
//	return ship;
//}
//
//int main()
//{
//	int t,n;
//	cin >> t;
//	for (int cases = 1; cases <= t; cases++)
//	{
//		memset(vis, 0, sizeof(vis));
//		for (int i = 0; i < 105; i++)
//			for (int j = 0; j < 105; j++)
//				arr[i][j] = '.';
//		cin >> n;
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= n; j++)
//				cin >> arr[i][j];
//		int ans=0;
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= n; j++)
//				if (!vis[i][j] &&arr[i][j]!='.')
//				{
//					ans += BFS(i, j);
//				}
//		cout << "Case " << cases << ": "<<ans<<endl;
//	}
//}