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
//#include<string>
//#include<string.h>
//#pragma warning(disable: 4996)
//using namespace std;
//typedef long long ll;
//
//struct point {
//	double x;
//	double y;
//};
//
//double dp[1 << 17][20];
//point arr[20];
//int countBits(int n)
//{
//	int count=0;
//	while(n)
//	{
//	    n&=n-1;   
//		count++;
//	}
//	return count;
//}
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
//double distance(point p1, point p2)
//{
//	return sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
//}
//
//int firstOne(int mask)
//{
//	int index = 0;
//	while(true)
//	{
//		if ((mask & 1) == 0)
//			return index;
//		index++;
//		mask = mask >> 1;
//	}
//}
//
//double solve(int mask, int index,int n)
//{
//	if (countBits(mask) == n)
//		return 0;
//
//	double &ret = dp[mask][index];
//	if (ret != -1)
//		return ret;
//	double m = 1000000000;
//    mask=setBit(mask, index, 1);
//	for (int i = index + 1; i < n; i++)
//	{
//		if (!getBit(mask, i))
//		{
//			m = min(m, solve(setBit(mask, i, 1), firstOne(setBit(mask, i, 1)), n) + distance(arr[index], arr[i]));
//		}
//	}
//	return ret = m;
//}
//
//
//int main()
//{
//	int n,x,y;
//	string tmp;
//	int t = 1;
//	while (cin>>n)
//	{
//		if (n == 0)
//			break;
//		for (int i = 0; i < 131072; i++)
//		{
//			for (int j = 0; j < 20; j++)
//			{
//				dp[i][j] = -1;
//			}
//		}
//		for (int i = 0; i < 2 * n; i++)
//		{
//			cin>>tmp >> x >> y;
//			arr[i].x = x;
//			arr[i].y = y;
//		}
//
//		cout <<"Case "<<t++<<": "<<fixed<<setprecision(2)<< solve(0, 0, 2*n) << endl;
//	}
//	return 0;
//}

