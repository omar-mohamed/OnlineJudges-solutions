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
//int INF = 10000000;
//
//int lis[3001];
//int lds[3001];
//int n;
//int buildings[3001];
//int widths[3001];
//
//pair<int,int> buildingTableLISAndLDS()
//{
//	int maxLIS=0;
//	int maxLDS=0;
//	for (int i = 0; i < n; i++)
//	{
//		lis[i] = lds[i] = widths[i];
//		for (int j = 0; j < i; j++)
//		{
//			if(buildings[i]>buildings[j])
//			   lis[i] = max(lis[j]+widths[i] , lis[i]);
//			if (buildings[i]<buildings[j])
//			   lds[i] = max(lds[j] + widths[i], lds[i]);
//		}
//		maxLIS = max(maxLIS, lis[i]);
//		maxLDS = max(maxLDS, lds[i]);
//	}
//	return make_pair(maxLIS, maxLDS);
//}
//
//
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	int cases = 1;
//	while (t--)
//	{
//		scanf("%d", &n);
//		for (int i = 0; i < n; i++)
//			scanf("%d", &buildings[i]);
//		for (int i = 0; i < n; i++)
//			scanf("%d", &widths[i]);
//
//		pair<int, int> ans = buildingTableLISAndLDS();
//		int increasing = ans.first;
//		int decreasing = ans.second;
//		printf("Case %d. ", cases++);
//		if (increasing >= decreasing)
//			printf("Increasing (%d). Decreasing (%d).\n", increasing, decreasing);
//		else
//			printf("Decreasing (%d). Increasing (%d).\n", decreasing, increasing);
//	}
//	return 0;
//}