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
//
//int arr[10000];
//
//int main()
//{
//	int q,n,t = 1,mi,target,sum,l,r,finalSum;
//	while (scanf("%d",&n)&&n!=0)
//	{
//		for (int i = 0; i < n; i++)
//			scanf("%d", &arr[i]);
//		sort(arr, arr + n);
//		printf("Case %d:\n", t++);
//		scanf("%d", &q);
//		for (int i = 0; i < q; i++)
//		{
//			scanf("%d", &target);
//			mi = 100000000;
//			l = 0, r = n - 1;
//			while (l!=r)
//			{
//				sum = arr[l] + arr[r];
//				if (sum > target)
//					r--;
//				else if (sum < target)
//					l++;
//				else
//				{
//					finalSum = target;
//					break;
//				}
//				if (abs(sum - target) <= mi)
//				{
//					finalSum = sum;
//					mi = abs(sum - target);
//				}
//			}
//			printf("Closest sum to %d is %d.\n",target, finalSum);
//		}
//	}
//	return 0;
//}