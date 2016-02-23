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
//int arr[300][300];
//bool vis[300][300];
//int ans[300][300];
//int offset = 150;
//int t, r, c, w, m, n;
//vector<int> movesx = { m,  m, n , n  ,-n,   -n,   -m,  -m };
//vector<int> movesy = { n, -n, m ,-m  ,m  ,  -m  ,  n,  -n };
//
//
//
//void BFS(int row=offset,int col=offset)
//{
//	queue<pair<int, int> > q;
//	q.push(make_pair(row, col));
//	vis[row][col] = true;
//	while (!q.empty())
//	{
//		row = q.front().first;
//		col = q.front().second;
//		q.pop();
//		for (int k = 0; k < movesx.size(); k++)
//		{
//			int xMove = row + movesx[k];
//			int yMove = col + movesy[k];
//			if (arr[xMove][yMove] == 0)
//				ans[row][col]++;
//			if (arr[xMove][yMove] == 0 && !vis[xMove][yMove])
//			{
//				q.push(make_pair(xMove, yMove));
//				vis[xMove][yMove] = true;
//			}
//		}
//
//	}
//}
//
//int main()
//{
//	cin >> t;
//	for (int cases = 1; cases <= t; cases++)
//	{
//		memset(arr, -1, sizeof(arr));
//		memset(vis, 0, sizeof(vis));
//		memset(ans, 0, sizeof(ans));
//		cin >> r >> c>>m>>n;
//
//		if (m == 0)
//		{
//			movesx = { m,m,n,-n };
//			movesy = { n,-n,m,m };
//		}
//		else if (n == 0)
//		{
//			movesx = { n,n,m,-m };
//			movesy = { m,-m,n,n };
//		}
//		else if (n == m)
//		{
//			movesx = { m,m,-m,-m };
//			movesy = { n,-n,n,-n };
//		}
//		else
//		{
//			movesx = { m,  m, n , n  ,-n,   -n,   -m,  -m };
//			movesy = { n, -n, m ,-m  ,m  ,  -m  ,  n,  -n };
//		}
//		r += offset;
//		c += offset;
//		for (int i = offset; i < r; i++)
//		{
//			for (int j = offset; j < c; j++)
//			{
//				arr[i][j] = 0;
//			}
//		}
//		cin >> w;
//		for (int i = 0; i < w; i++)
//		{
//			int tmpr, tmpc;
//			cin >> tmpr >> tmpc;
//			arr[tmpr + offset][tmpc + offset] = -1;
//		}
//
//		int odd = 0;
//		int even = 0;
//
//		BFS();
//
//		for (int i = offset; i < r; i++)
//		{
//			for (int j = offset; j < c; j++)
//			{
//				if (!vis[i][j])
//					continue;
//				if (ans[i][j] % 2 == 0 )
//					even++;
//				else
//					odd++;
//			}
//		}
//		cout << "Case " << cases << ": " << even << " " << odd << endl;
//	}
//	return 0;
//}