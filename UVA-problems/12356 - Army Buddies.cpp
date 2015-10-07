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
//#include<set>
//#include<string.h>
//#pragma warning(disable: 4996)
//using namespace std;
//typedef long long ll;
//
//
//int rightBuddy[100002], leftBuddy[100002];
//
//int main()
//{
//	int n, d,l,r;
//	while (scanf("%d%d",&n,&d)&& n >= 0 && d > 0)
//	{
//		rightBuddy[n] = leftBuddy[1] =leftBuddy[0]=rightBuddy[n+1]= -1;
//		if (n != 1)
//		{
//			rightBuddy[1] = 2;
//			leftBuddy[n] = n - 1;
//		}
//		for (int i = 2; i < n; i++)
//		{
//			leftBuddy[i] = i - 1;
//			rightBuddy[i] = i + 1;
//		}
//		for (int i = 0; i < d; i++)
//		{
//			scanf("%d%d", &l, &r);
//			if (leftBuddy[l] == -1)
//				printf("* ");
//			else
//				printf("%d ", leftBuddy[l]);
//
//			if (rightBuddy[r] == -1)
//				printf("*\n");
//			else
//				printf("%d\n", rightBuddy[r]);
//			if (l <= r)
//			{
//				rightBuddy[leftBuddy[l]] = rightBuddy[r];
//				leftBuddy[rightBuddy[r]] = leftBuddy[l];
//			}
//		}
//		printf("-\n");
//	}
//	return 0;
//}