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
//int arr[1005][1005];
//bool vis[1005][1005];
//int dist[1005][1005];
//int movesx[] = {1,-1,0,0};
//int movesy[] = {0,0,1,-1};
//
//int BFS(int row,int col,int fRow,int fCol)
//{
//	queue<pair<int, int> > q;
//	q.push(make_pair(row, col));
//	vis[row][col] = true;
//	dist[row][col] = 0;
//	memset(vis, 0, sizeof(vis));
//
//	while (!q.empty()&&!vis[fRow][fCol])
//	{
//		row = q.front().first;
//		col = q.front().second;
//		q.pop();
//
//		for (int k = 0; k < 4; k++)
//		{
//			int xMove = row + movesx[k];
//			int yMove = col + movesy[k];
//			if (arr[xMove][yMove] != 0 && !vis[xMove][yMove])
//			{
//				q.push(make_pair(xMove, yMove));
//				vis[xMove][yMove] = true;
//				dist[xMove][yMove] = dist[row][col] + 1;
//			}
//		}
//	}
//	return dist[fRow][fCol];
//}
//
//int main()
//{
//	int r, c;
//	while (cin >> r >> c&&r&&c)
//	{
//		int rows;
//		memset(arr, 0, sizeof(arr));
//		for (int i = 1; i <= r; i++)
//			for (int j = 1; j <= c; j++)
//				arr[i][j] = 1;
//		cin >> rows;
//		for (int i = 0; i < rows; i++)
//		{
//			int row, num;
//			cin >> row >> num;
//			for (int j = 0; j < num; j++)
//			{
//				int col;
//				cin >> col;
//				arr[row+1][col+1] = 0;
//			}
//		}
//		int SR, SC,ER,EC;
//		cin >> SR>> SC >> ER >> EC;
//		cout << BFS(SR+1, SC+1, ER+1, EC+1)<<endl;
//	}
//}