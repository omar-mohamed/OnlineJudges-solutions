//#include<iostream>
//#include<string>
//#include<math.h>
//#include<cmath>
//#include<iomanip>
//#include<stdio.h>
//#include <algorithm>
//#include<string.h>
//#include<vector>
//#include<list>
//#include<sstream>
//#include<unordered_map>
//#include<set>
//#include<utility>
//#include<map>
//#pragma warning(disable: 4996)
//using namespace std;
//
//int maze[205][205];
//
//void simulate(int r,int c, map<pair<int, int>, int>& m)
//{
//	int turn = 1;
//	int startR = r;
//	int startC = c;
//	while (true)
//	{
//		if (turn == 1)
//		{
//			if (maze[r][c + 1] == 0 && maze[r + 1][c] == 1)
//			{
//				if (maze[r + 1][c + 1] == 0)
//				{
//
//					m[make_pair(r, c)]++;
//
//					if (startR == r&&startC == c+1)
//						break;
//
//					m[make_pair(r, c+1)]++;
//
//					if (startR == r+1&&startC == c+1)
//						break;
//
//					if (maze[r + 2][c + 1] == 1)
//					{
//						c++;
//						r++;
//						turn = 1;
//						continue;
//					}
//					else
//					   m[make_pair(r+1, c+1)]++;
//					if (startR == r+2&&startC == c+1)
//						break;
//					if (maze[r + 2][c] == 1)
//					{
//						r+=2;
//						c++;
//						turn = 4;
//						continue;
//					}
//					else
//					   m[make_pair(r+2, c+1)]++;
//					r += 2;
//					turn = 3;
//				}
//				else
//				{
//					m[make_pair(r, c)]++;
//					c++;
//				}
//			}
//			else
//				turn++;
//		}
//		if (turn == 2)
//		{
//			if (maze[r - 1][c] == 0 && maze[r][c + 1] == 1)
//			{
//				if (maze[r - 1][c + 1] == 0)
//				{
//					m[make_pair(r, c)]++;
//					if (startR == r-1&&startC == c)
//						break;
//
//					m[make_pair(r-1, c)]++;
//					if (startR == r-1&&startC == c+1)
//						break;
//					if (maze[r - 1][c + 2] == 1)
//					{
//						r = r - 1;
//						c++;
//						turn = 2;
//						continue;
//					}
//					else
//						m[make_pair(r - 1, c + 1)]++;
//					
//					if (startR == r-1&&startC == c+2)
//						break;
//					if (maze[r][c + 2] == 1)
//					{
//						r = r - 1;
//						c = c + 2;
//						turn = 1;
//						continue;
//					}
//					else
//					  m[make_pair(r-1, c+2)]++;
//					c += 2;
//					turn = 4;
//				}
//				else
//				{
//					m[make_pair(r, c)]++;
//					r--;
//				}
//			}
//			else
//				turn++;
//		}
//		if (turn == 3)
//		{
//			if (maze[r][c-1] == 0 && maze[r-1][c] == 1)
//			{
//				if (maze[r - 1][c - 1] == 0)
//				{
//					m[make_pair(r, c)]++;
//					if (startR == r&&startC == c-1)
//						break;
//					m[make_pair(r, c-1)]++;
//					if (startR == r-1&&startC == c-1)
//						break;
//					if (maze[r - 2][c - 1] == 1)
//					{
//						r = r - 1;
//						c = c - 1;
//						turn = 3;
//						continue;
//					}
//					else
//					   m[make_pair(r-1, c-1)]++;
//					if (startR == r-2&&startC == c-1)
//						break;
//					if (maze[r - 2][c] == 1)
//					{
//						r = r - 2;
//						c = c - 1;
//						turn = 2;
//						continue;
//					}
//					else
//					  m[make_pair(r-2, c-1)]++;
//					r-=2;
//					turn = 1;
//				}
//				else
//				{
//					m[make_pair(r, c)]++;
//					c--;
//				}
//			}
//			else
//				turn++;
//		}
//		if (turn == 4)
//		{
//			if (maze[r+1][c] == 0 && maze[r][c-1] == 1)
//			{
//				if (maze[r + 1][c - 1] == 0)
//				{
//					m[make_pair(r, c)]++;
//					if (startR == r+1&&startC == c)
//						break;
//					m[make_pair(r+1, c)]++;
//					if (startR == r+1&&startC == c-1)
//						break;
//					if (maze[r + 1][c - 2] == 1)
//					{
//						r = r +1;
//						c = c - 1;
//						turn = 4;
//						continue;
//					}
//					else
//					   m[make_pair(r+1, c-1)]++;
//					if (startR == r+1&&startC == c-2)
//						break;
//					if (maze[r][c - 2] == 1)
//					{
//						r = r + 1;
//						c = c - 2;
//						turn = 3;
//						continue;
//					}
//					else
//					    m[make_pair(r+1, c-2)]++;
//					c -= 2;
//					turn = 2;
//				}
//				else
//				{
//					m[make_pair(r, c)]++;
//					r++;
//				}
//			}
//			else
//				turn=1;
//		}
//		if (startR == r&&startC == c)
//			break;
//	}
//}
//
//int main()
//{
//	int r, c;
//	int size;
//	while (cin >> r >> c)
//	{
//		size = 0;
//		int ans[6];
//		for (int i = 0; i < 6; i++)
//			ans[i] = 0;
//		map<pair<int, int>, int> m;
//		if (r == 0 && c == 0)
//			break;
//		for (int i = 0; i < 205; i++)
//			for (int j = 0; j < 205; j++)
//				maze[i][j] = 1;
//		for (int i = 50; i < r+50; i++)
//			for (int j = 50; j < c+50; j++)
//				scanf("%1d", &maze[i][j]);
//		for (int i = 50; i < r + 50; i++)
//			for (int j = 50; j < c + 50; j++)
//				if (maze[i][j] == 0)
//					size++;
//		simulate(r + 49, 50, m);
//		int zeros = size - m.size();
//		for (auto e : m)
//		{
//			ans[e.second]++;
//		}
//		printf("%3d", zeros);
//		for (int i = 1; i < 5; i++)
//		{
//			printf("%3d", ans[i]);
//			//if (i != 4)
//			//	cout << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}