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
//bitset<1000002> mins;
//
//ll n, c, l, r,rips;
//
//bool flipInRange()
//{
//	for (int i = l ; i < r&&i<=1000000; i++)
//		if (mins[i] == 1)
//			return false;
//		else
//			mins[i] = 1;
//	return true;
//}
//
//bool flipInRangeRips()
//{
//	while (l < 1000000)
//	{
//		for (int i = l ; i < r&&i<=1000000; i++)
//			if (mins[i] == 1)
//				return false;
//			else
//				mins[i] = 1;
//		l += rips;
//		r += rips;
//		if (r > 1000000)
//			r = 1000000;
//	}
//	return true;
//}
//
//int main()
//{
//	bool conflict;
//	while (scanf("%d%d",&n,&c))
//	{
//		if (n <= 0 && c <= 0)
//			break;
//		conflict = false;
//		mins = 0;
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d%d", &l, &r);
//			if (!conflict)
//				if (!flipInRange())
//					conflict = true;
//		}
//		for (int i = 0; i < c; i++)
//		{
//			scanf("%d%d%d", &l, &r,&rips);
//			if (!conflict)
//				if (!flipInRangeRips())
//					conflict = true;
//		}
//		if (conflict)
//			printf("CONFLICT\n");
//		else
//			printf("NO CONFLICT\n");
//	}
//	return 0;
//}