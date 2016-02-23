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
//char maze[105][105];
//bool vis[105][105];
//
//int direction;
//int curRow, curCol;
//
//int main()
//{
//	int n, m;
//	int commandN;
//	char tmp;
//	while (cin >> n >> m >> commandN&&n&&m&&commandN)
//	{
//		for (int i = 0; i < 105; i++)
//			for (int j = 0; j < 105; j++)
//			{
//				maze[i][j] = '#';
//				vis[i][j] = false;
//			}
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= m; j++)
//			{
//				cin >> maze[i][j];
//				if (maze[i][j] == 'N')
//				{
//					curRow = i;
//					curCol = j;
//					direction = 0;
//				}
//				else if (maze[i][j] == 'L')
//				{
//					curRow = i;
//					curCol = j;
//					direction = 1;
//				}
//				else if (maze[i][j] == 'S')
//				{
//					curRow = i;
//					curCol = j;
//					direction = 2;
//				}
//				else if (maze[i][j] == 'O')
//				{
//					curRow = i;
//					curCol = j;
//					direction = 3;
//				}
//			}
//
//		int ans = 0;
//		for (int i = 0; i < commandN; i++)
//		{
//			cin >> tmp;
//			if (tmp == 'F')
//			{
//				if (direction == 0 && maze[curRow - 1][curCol] != '#')
//				{
//					if (maze[curRow - 1][curCol] == '*'&&!vis[curRow - 1][curCol])
//						ans++;
//					vis[curRow - 1][curCol] = true;
//					curRow--;
//				}
//				else if (direction == 1 && maze[curRow][curCol + 1] != '#')
//				{
//					if (maze[curRow][curCol + 1] == '*'&&!vis[curRow][curCol + 1])
//						ans++;
//					vis[curRow][curCol + 1] = true;
//					curCol++;
//				}
//				else if (direction == 2 && maze[curRow + 1][curCol] != '#')
//				{
//					if (maze[curRow + 1][curCol] == '*'&&!vis[curRow + 1][curCol])
//						ans++;
//					vis[curRow + 1][curCol] = true;
//					curRow++;
//				}
//				else if (direction == 3 && maze[curRow][curCol - 1] != '#')
//				{
//					if (maze[curRow][curCol - 1] == '*'&&!vis[curRow][curCol - 1])
//						ans++;
//					vis[curRow][curCol - 1] = true;
//					curCol--;
//				}
//			}
//			else if (tmp == 'D')
//			{
//				direction++;
//				if (direction == 4)
//					direction = 0;
//			}
//			else if (tmp == 'E')
//			{
//				direction--;
//				if (direction == -1)
//					direction = 3;
//			}
//		}
//		cout << ans << endl;
//	}
//}