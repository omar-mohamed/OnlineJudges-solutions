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
//struct Coor
//{
//	int startingRow;
//	int endingRow;
//	int startingCol;
//	int endingCol;
//	Coor()
//	{
//		startingRow = startingCol = 1000000;
//		endingRow = endingCol = 0;
//	}
//
//	void reset()
//	{
//		startingRow = startingCol = 1000000;
//		endingRow = endingCol = 0;
//	}
//};
//
//vector<Coor> Coors;
//Coor coor;
//
//int graph[250][250];
//int components[250][250];
//
//bool vis[250][250];
//string dic[301];
//
//int w, h;
//
//int xMoves[] = {1,-1,0,0};
//int yMoves[] = {0,0,1,-1};
//
//int component;
//
//void BFS(int r, int c, int avail)
//{
//	if (r < 0 || r >= h || c < 0 || c >= w)
//		return;
//	vis[r][c] = true;
//	queue < pair<int, int> > q;
//	q.push(make_pair(r, c));
//
//	while (!q.empty())
//	{
//		r = q.front().first;
//		c = q.front().second;
//		q.pop();
//
//		if (avail == 1)
//		{
//			components[r][c] = component;
//			coor.startingCol = min(coor.startingCol, c);
//			coor.startingRow = min(coor.startingRow, r);
//			coor.endingCol = max(coor.endingCol, c);
//			coor.endingRow = max(coor.endingRow, r);
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			int xNeigh = xMoves[i] + r;
//			int yNeigh = yMoves[i] + c;
//			if (xNeigh >= 0 && xNeigh < h&&yNeigh >= 0 && yNeigh < w&&!vis[xNeigh][yNeigh] && graph[xNeigh][yNeigh] == avail)
//			{
//				vis[xNeigh][yNeigh] = 1;
//				q.push(make_pair(xNeigh, yNeigh));
//			}
//		}
//	}
//}
//
//
//int checkInside(int r, int c)
//{
//	//checkAbove
//	for (int i = r; i >=0; i--)
//	{
//		if (components[i][c])
//		{
//			return components[i][c];
//		}
//	}
//	return 0;
//}
//
//bool checkLeftSide(int r, int c, int componentNum)
//{
//	for (int i = c - 1; i >= 0; i--)
//		if (components[r][i] == componentNum)
//			return false;
//	return true;
//}
//
//bool checkRightSide(int r, int c, int componentNum)
//{
//	for (int i = c + 1; i < w; i++)
//		if (components[r][i] == componentNum)
//			return false;
//	return true;
//}
//
//bool checkUpSide(int r, int c, int componentNum)
//{
//	for (int i = r - 1; i >= 0; i--)
//		if (components[i][c] == componentNum)
//			return false;
//	return true;
//}
//
//bool checkDownSide(int r, int c, int componentNum)
//{
//	for (int i = r + 1; i < h; i++)
//		if (components[i][c] == componentNum)
//			return false;
//	return true;
//}
//
//int main()
//{
//
//	dic['1'] = "0001";
//	dic['2'] = "0010";
//	dic['3'] = "0011";
//	dic['4'] = "0100";
//	dic['5'] = "0101";
//	dic['6'] = "0110";
//	dic['7'] = "0111";
//	dic['8'] = "1000";
//	dic['9'] = "1001";
//	dic['a'] = "1010";
//	dic['b'] = "1011";
//	dic['c'] = "1100";
//	dic['d'] = "1101";
//	dic['e'] = "1110";
//	dic['f'] = "1111";
//	int cases = 1;
//	while (cin >> h >> w)
//	{
//		memset(graph, 0, sizeof(graph));
//		memset(components, 0, sizeof(components));
//		memset(vis, 0, sizeof(vis));
//		Coors.clear();
//		if (h == 0 && w == 0)
//			break;
//		for (int i = 0; i < h; i++)
//		{
//			int index = 0;
//			for (int j = 0;j < w; j++)
//			{
//				char c;
//				cin >> c;
//				if (c != '0')
//				{
//					string dec = dic[c];
//					for (int k = 0; k < 4; k++)
//						graph[i][index++] = dec[k] - '0';
//				}
//				else
//				  index += 4;
//			}
//		}
//
//		w *= 4;
//		component = 1;
//		Coors.push_back(Coor());
//		for (int i = 0; i < h; i++)
//			for (int j = 0; j < w;j++)
//				if (graph[i][j] == 1 && !vis[i][j])
//				{
//					coor.reset();
//					BFS(i, j,1);
//					Coors.push_back(coor);
//					component++;
//				}
//
//		int counter[301];
//		memset(counter, 0, sizeof(counter));
//
//		vector<int> componCounter(component);
//		for (int k = 1; k < component; k++)
//		{
//			int coun = 0;
//			Coor co = Coors[k];
//			for (int i = co.startingRow; i <= co.endingRow; i++)
//			{
//				for (int j = co.startingCol; j <= co.endingCol; j++)
//				{
//					if (!vis[i-1][j] && graph[i-1][j] == 0&& components[i][j]==k && checkUpSide(i,j,k))
//						BFS(i-1, j, 0);
//					if (!vis[i + 1][j] && graph[i+1][j] == 0 && components[i][j] == k &&checkDownSide(i,j,k))
//						BFS(i + 1, j, 0);
//					if (!vis[i ][j-1] && graph[i][j-1] == 0 && components[i][j] == k&&checkLeftSide(i,j,k))
//						BFS(i , j-1, 0);
//					if (!vis[i ][j+1] && graph[i][j+1] == 0 && components[i][j] == k&&checkRightSide(i,j,k))
//						BFS(i , j+1, 0);
//					//if (!vis[i][j] && graph[i][j] == 0)
//					//{
//					//	BFS(i, j, 0);
//					//	coun++;
//					//}
//				}
//			}
//		}
//
//		for (int i = 0; i < h; i++)
//		{
//			for (int j = 0; j < w; j++)
//			{
//				if (!vis[i][j])
//				{
//					BFS(i, j, 0);
//					int ret=checkInside(i, j);
//					componCounter[ret]++;
//				}
//			}
//		}
//
//		for (int i = 1; i < component; i++)
//		{
//			if (componCounter[i] == 0)
//				counter['W']++;
//			else if (componCounter[i] == 1)
//				counter['A']++;
//			else if (componCounter[i] == 2)
//				counter['K']++;
//			else if (componCounter[i] == 3)
//				counter['J']++;
//			else if (componCounter[i] == 4)
//				counter['S']++;
//			else if (componCounter[i] == 5)
//				counter['D']++;
//		}
//
//		cout << "Case " << cases++ << ": ";
//		for (int i = 0; i < counter['A']; i++)
//			cout << "A";
//		for (int i = 0; i < counter['D']; i++)
//			cout << "D";
//		for (int i = 0; i < counter['J']; i++)
//			cout << "J";
//		for (int i = 0; i < counter['K']; i++)
//			cout << "K";
//		for (int i = 0; i < counter['S']; i++)
//			cout << "S";
//		for (int i = 0; i < counter['W']; i++)
//			cout << "W";
//		cout << endl;
//
//	}
//	return 0;
//}