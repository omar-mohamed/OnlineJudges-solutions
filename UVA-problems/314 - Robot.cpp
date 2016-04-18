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
//const int NORTH = 0;
//const int EAST = 1;
//const int SOUTH = 2;
//const int WEST = 3;
//
//struct Place
//{
//	int upperLeftX;
//	int upperLeftY;
//
//	int uperRightX;
//	int uperRightY;
//
//	int lowerLeftX;
//	int lowerLeftY;
//
//	int lowerRightX;
//	int lowerRightY;
//
//	int direction;
//	Place()
//	{
//		uperRightX = uperRightY = upperLeftX = upperLeftY = lowerLeftX = lowerLeftY = lowerRightX = lowerRightY = direction =-1;
//	}
//	Place(int upperLeftX, int upperLeftY, int uperRightX, int uperRightY, int lowerLeftX, int lowerLeftY, int lowerRightX, int lowerRightY,int direction)
//	{
//		this->lowerLeftX = lowerLeftX;
//		this->lowerLeftY = lowerLeftY;
//
//		this->lowerRightX = lowerRightX;
//		this->lowerRightY = lowerRightY;
//
//		this->uperRightX = uperRightX;
//		this->uperRightY = uperRightY;
//
//		this->upperLeftX = upperLeftX;
//		this->upperLeftY = upperLeftY;
//		this->direction = direction;
//	}
//
//	bool operator<(const Place& e) const
//	{
//		if (e.upperLeftX == this->upperLeftX)
//		{
//			if (e.upperLeftY == this->upperLeftY)
//				return e.direction < this->direction;
//			return e.upperLeftY < this->upperLeftY;
//		}
//		return (e.upperLeftX < this->upperLeftX);
//	}
//
//};
//
//int maze[55][55];
//
//
//int direction = 0;  //0 north - 1 east  - 2 south  -  3 west
//int n, m;
//int BFS(Place startPlace, Place finishPlace)
//{
//	map<Place, int> dist;
//	map<Place, bool> vis;
//	priority_queue<pair<int, Place> > q;
//
//	q.push(make_pair(0, startPlace));
//	dist[startPlace] = 0;
//	while (!q.empty())
//	{
//		Place cur = q.top().second;
//		direction = q.top().second.direction;
//		q.pop();
//		if (vis[cur])
//			continue;
//		vis[cur] = true;
//
//		for (int i = 0; i <= 3; i++)
//		{
//			int newUpperRightX = cur.uperRightX - i;
//			int newUpperLeftX = cur.upperLeftX - i;
//			int newLowerRightX = cur.lowerRightX - i;
//			int newLowerLeftX = cur.lowerLeftX - i;
//			if (newUpperRightX >= 0 && newUpperLeftX >= 0 && maze[newUpperRightX][cur.uperRightY] != 1 && maze[newUpperLeftX][cur.upperLeftY] != 1 && maze[newLowerRightX][cur.lowerRightY] != 1 && maze[newLowerLeftX][cur.lowerLeftY] != 1)
//			{
//				Place neigh(newUpperLeftX, cur.upperLeftY, newUpperRightX, cur.uperRightY, newLowerLeftX, cur.lowerLeftY, newLowerRightX, cur.lowerRightY, NORTH);
//				int newDist= dist[cur] + (i==0?0:1);
//				if (direction == EAST || direction == WEST)
//					newDist += 1;
//				else if (direction == SOUTH)
//					newDist += 2;
//				if (!vis[neigh] && (dist.find(neigh) == dist.end() || dist[neigh]>newDist))
//				{
//					dist[neigh] = newDist;
//
//					q.push(make_pair(-newDist, neigh));
//				}
//			}
//			else
//				break;
//		}
//
//		//checking below Position
//		for (int i = 0; i <= 3; i++)
//		{
//			int newUpperRightX = cur.uperRightX + i;
//			int newUpperLeftX = cur.upperLeftX + i;
//			int newLowerRightX = cur.lowerRightX + i;
//			int newLowerLeftX = cur.lowerLeftX + i;
//			if (newLowerRightX < n && newLowerLeftX < n &&maze[newUpperRightX][cur.uperRightY] != 1 && maze[newUpperLeftX][cur.upperLeftY] != 1 && maze[newLowerRightX][cur.lowerRightY] != 1 && maze[newLowerLeftX][cur.lowerLeftY] != 1)
//			{
//				Place neigh(newUpperLeftX, cur.upperLeftY, newUpperRightX, cur.uperRightY, newLowerLeftX, cur.lowerLeftY, newLowerRightX, cur.lowerRightY, SOUTH);
//				int newDist = dist[cur]+(i == 0 ? 0 : 1);
//				if (direction == EAST || direction == WEST)
//					newDist += 1;
//				else if (direction == NORTH)
//					newDist += 2;
//				if (!vis[neigh] && (dist.find(neigh) == dist.end() || dist[neigh]>newDist))
//				{
//					dist[neigh] = newDist;
//					q.push(make_pair(-newDist, neigh));
//				}
//			}
//			else
//				break;
//		}
//
//		//checking left Position
//		for (int i = 0; i <= 3; i++)
//		{
//			int newUpperLeftY = cur.upperLeftY - i;
//			int newLowerLeftY = cur.lowerLeftY - i;
//
//			int newUpperRightY = cur.uperRightY - i;
//			int newLowerRightY = cur.lowerRightY - i;
//
//			if (newUpperLeftY >= 0 && newLowerLeftY >= 0 && maze[cur.upperLeftX][newUpperLeftY] != 1 && maze[cur.lowerLeftX][newLowerLeftY] != 1 && maze[cur.uperRightX][newUpperRightY] != 1 && maze[cur.lowerRightX][newLowerRightY] != 1)
//			{
//				Place neigh(cur.upperLeftX, newUpperLeftY, cur.uperRightX, newUpperRightY, cur.lowerLeftX, newLowerLeftY, cur.lowerRightX, newLowerRightY, WEST);
//				int newDist = dist[cur]+(i == 0 ? 0 : 1);
//				if (direction == NORTH || direction == SOUTH)
//					newDist += 1;
//				else if (direction == EAST)
//					newDist += 2;
//				if (!vis[neigh] && (dist.find(neigh) == dist.end() || dist[neigh]>newDist))
//				{
//					dist[neigh] = newDist;
//				
//					q.push(make_pair(-newDist, neigh));
//				}
//			}
//			else
//				break;
//		}
//
//		//checking right Position
//		for (int i = 0; i <= 3; i++)
//		{
//			int newUpperLeftY = cur.upperLeftY + i;
//			int newLowerLeftY = cur.lowerLeftY + i;
//
//			int newUpperRightY = cur.uperRightY + i;
//			int newLowerRightY = cur.lowerRightY + i;
//
//			if (newUpperRightY < m && newLowerRightY < m &&maze[cur.upperLeftX][newUpperLeftY] != 1 && maze[cur.lowerLeftX][newLowerLeftY] != 1 && maze[cur.uperRightX][newUpperRightY] != 1 && maze[cur.lowerRightX][newLowerRightY] != 1)
//			{
//				Place neigh(cur.upperLeftX, newUpperLeftY, cur.uperRightX, newUpperRightY, cur.lowerLeftX, newLowerLeftY, cur.lowerRightX, newLowerRightY, EAST);
//				int newDist = dist[cur] + (i == 0 ? 0 : 1);
//				if (direction == NORTH || direction == SOUTH)
//					newDist += 1;
//				else if (direction == WEST)
//					newDist += 2;
//				if (!vis[neigh] && (dist.find(neigh) == dist.end() || dist[neigh]>newDist))
//				{
//					dist[neigh] = newDist;
//
//					q.push(make_pair(-newDist, neigh));
//				}
//			}
//			else
//				break;
//		}
//	}
//
//	if (vis[finishPlace])
//	{
//		int mi = dist[finishPlace];
//		finishPlace.direction = SOUTH;
//		if(dist.find(finishPlace)!=dist.end())
//		  mi = min(mi, dist[finishPlace]);
//		finishPlace.direction = EAST;
//		if (dist.find(finishPlace) != dist.end())
//		   mi = min(mi, dist[finishPlace]);
//		finishPlace.direction = WEST;
//		if (dist.find(finishPlace) != dist.end())
//		   mi = min(mi, dist[finishPlace]);
//		return mi;
//	}
//	else
//		return -1;
//}
//
//int main()
//{
//	while (cin >> n >> m)
//	{
//		if (n == 0 && m == 0)
//			break;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < m; j++)
//				cin >> maze[i][j];
//		int topLeftStartingRow, topLeftStartingCol;
//		int topLeftFinishRow, topLeftFinishCol;
//		string dir;
//		cin >> topLeftStartingRow >> topLeftStartingCol >> topLeftFinishRow >> topLeftFinishCol >> dir;
//		topLeftStartingRow--;
//		topLeftStartingCol--;
//		topLeftFinishRow--;
//		topLeftFinishCol--;
//		if (dir == "north")
//			direction = NORTH;
//		else if (dir == "west")
//			direction = WEST;
//		else if (dir == "south")
//			direction = SOUTH;
//		else
//			direction = EAST;
//		Place starting(topLeftStartingRow, topLeftStartingCol, topLeftStartingRow, topLeftStartingCol + 1, topLeftStartingRow + 1, topLeftStartingCol, topLeftStartingRow + 1, topLeftStartingCol + 1,direction);
//		Place finish(topLeftFinishRow, topLeftFinishCol, topLeftFinishRow, topLeftFinishCol + 1, topLeftFinishRow + 1, topLeftFinishCol, topLeftFinishRow + 1, topLeftFinishCol + 1,NORTH);
//
//		if (maze[starting.lowerLeftX][starting.lowerLeftY] == 1 || maze[starting.upperLeftX][starting.upperLeftY] == 1 || maze[starting.lowerRightX][starting.lowerRightY] == 1 || maze[starting.uperRightX][starting.uperRightY] == 1 || maze[finish.lowerLeftX][finish.lowerLeftY] == 1 || maze[finish.upperLeftX][finish.upperLeftY] == 1 || maze[finish.lowerRightX][finish.lowerRightY] == 1 || maze[finish.uperRightX][finish.uperRightY] == 1 ||starting.lowerLeftX<0|| starting.lowerLeftX>=n || starting.lowerRightX<0 || starting.lowerRightX >= n || starting.upperLeftX<0 || starting.upperLeftX >= n || starting.uperRightX<0 || starting.uperRightX >= n || starting.lowerLeftY<0 || starting.lowerLeftY >= m || starting.lowerRightY<0 || starting.lowerRightY >= m || starting.upperLeftY<0 || starting.upperLeftY >= m || starting.uperRightY<0 || starting.uperRightY >= m)
//			cout << "-1" << endl;
//		else
//     		cout << BFS(starting, finish) << endl;
//	}
//}
//
//
//
//
