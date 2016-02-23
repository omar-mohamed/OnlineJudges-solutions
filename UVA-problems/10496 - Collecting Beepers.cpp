////http://ideone.com/kD1thT
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
//int INF = 1000000;
//int dp[11][1025];
//int n;
//
//vector<pair<int, int> > points;
//
//int distance(const pair<int, int> & p1, const pair<int, int>& p2)
//{
//	return abs(p1.first - p2.first) + abs(p1.second - p2.second);
//}
//
//int getBit(int n,int index)
//{
//	return ((n>>index)&1);
//}
//
//int setBit(int n,int index,int value)
//{
//	if(value==1)
//		return n | (1<<index);
//	else
//		return n &~(1<<index);
//}
//
//
//
//int travellingSalesman(int currentPos=0,int startingState=0, int bitmask=1)
//{
//	if (bitmask == (1 << n) - 1)//all visited
//		return distance(points[currentPos],points[startingState]);
//
//	int &ret = dp[currentPos][bitmask];
//	if (ret != -1)
//		return ret;
//
//	int mi = INF;
//	for (int neigh = 0; neigh < n; neigh++)
//	{
//		if (getBit(bitmask, neigh)==0)
//		{
//			mi = min(mi, travellingSalesman(neigh, startingState, setBit(bitmask, neigh, 1))+ distance(points[currentPos], points[neigh]));
//		}
//	}
//	return ret = mi;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		//cin >> n;
//		int x, y;
//		cin >> x>> y;
//		points.clear();
//		cin >> x >> y;
//		points.push_back(make_pair(x, y));
//
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> x >> y;
//			points.push_back(make_pair(x, y));
//		}
//		n++;
//		memset(dp, -1, sizeof(dp));
//		cout << "The shortest path has length " << travellingSalesman() << endl;
//	}
//}