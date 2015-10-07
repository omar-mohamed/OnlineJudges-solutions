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
//int arr[5][5];
//
//int manhatten(const int& office,const int& row,const int& col)
//{
//	int r = office / 5;
//	int c = office - (office / 5) * 5;
//	return abs(r - row) + abs(col - c);
//}
//
//int main()
//{
//	int t; int r; int c;int g;
//	int i1; int i2; int i3; int i4; int i5; int sum;int m;
//	int ans1; int ans2; int ans3; int ans4; int ans5;
//	int sum2; int sum3; int sum4;int sum5;
//	int finalSum;
//	int i; int j;int k;
//	scanf("%d", &t);
//	while (t--)
//	{
//
//		memset(arr, -1, sizeof(arr));
//		scanf("%d", &g);
//		for (i = 0; i < g; ++i)
//		{
//			scanf("%d%d", &r,&c);
//			scanf("%d", &arr[r][c]);
//		}
//		m = 10000000;
//		for (i1 = 0; i1 < 25; ++i1)
//		{
//			for (i2 = i1 + 1; i2 < 25; ++i2)
//			{
//				for (i3 = i2 + 1; i3 < 25; ++i3)
//				{
//					for (i4 = i3 + 1; i4 < 25; ++i4)
//					{
//						for (i5 = i4 + 1; i5 < 25; ++i5)
//						{
//							finalSum = 0;
//							for (j = 0; j < 5; ++j)
//								for (k = 0; k < 5; ++k)
//								{
//									if (arr[j][k] != -1)
//									{
//										sum = manhatten(i1, j, k)*arr[j][k];
//										sum2 = manhatten(i2, j, k)*arr[j][k];
//										sum3 = manhatten(i3, j, k)*arr[j][k];
//										sum4 = manhatten(i4, j, k)*arr[j][k];
//										sum5 = manhatten(i5, j, k)*arr[j][k];
//										finalSum += min(sum, min(sum2, min(sum3, min(sum4, sum5))));
//									}
//								}
//							if (finalSum < m)
//							{
//								m = finalSum;
//								ans1 = i1;
//								ans2 = i2;
//								ans3 = i3;
//								ans4 = i4;
//								ans5 = i5;
//							}
//							if (m == 0)
//								break;
//						}
//						if (m == 0)
//							break;
//					}
//					if (m == 0)
//						break;
//				}
//				if (m == 0)
//					break;
//			}
//			if (m == 0)
//				break;
//		}
//		printf("%d %d %d %d %d\n", ans1, ans2, ans3, ans4, ans5);
//		
//	}
//	return 0;
//}
//
//
