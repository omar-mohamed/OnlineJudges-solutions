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
//ll INF = 100000000000;
//int n, m;
//ll k;
//ll arr[150][150];
//
//vector<ll> kadane(const vector<ll>& tmp)
//{
//
//	int maxStartRow = 0;
//	int maxEndRow=0;
//	int maxSoFar = 0;
//	ll minimumPaid = INF;
//	for (int i = 0; i < tmp.size(); i++)
//	{
//		int longest = 0;
//		ll sum = 0;
//		for (int j = i; j < tmp.size(); j++)
//		{
//			sum += tmp[j];
//			if (sum > k)
//				break;
//			longest++;
//			if (longest > maxSoFar || longest == maxSoFar&&minimumPaid > sum)
//			{
//				maxSoFar = longest;
//				minimumPaid = sum;
//				maxStartRow = i;
//				maxEndRow = j;
//			}
//		}
//	}
//	if(minimumPaid==INF)
//		return{ -1,maxStartRow,maxEndRow };
//	return {minimumPaid,maxStartRow,maxEndRow};
//}
//
//pair<ll,ll> max2D()
//{
//	ll minimumSoFar = INF;
//	ll maxArea = 0;
//	for (int l = 0; l < m; l++)
//	{
//		vector<ll> tmp(n);
//		for (int r = l; r < m; r++)
//		{
//			for (int row = 0; row < n; row++)
//				tmp[row] += arr[row][r];
//
//			vector<ll> ret = kadane(tmp);
//			if (((r-l+1)*(ret[2]-ret[1]+1))>maxArea&&ret[0]!=-1)
//			{
//				minimumSoFar = ret[0];
//				maxArea = (r - l + 1) * (ret[2] - ret[1] + 1);
//			}
//			else if (((r - l + 1) * (ret[2] - ret[1] + 1)) == maxArea&&ret[0]!=-1)
//			{
//				if(minimumSoFar>ret[0])
//					minimumSoFar = ret[0];
//			}
//		}
//	}
//	if (maxArea == 0)
//		return make_pair(0, 0);
//	else
//		return make_pair(maxArea, minimumSoFar);
//}
//
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	for (int c = 1; c <= t; c++)
//	{
//		scanf("%d%d%lld", &n, &m, &k);
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < m; j++)
//				scanf("%lld", &arr[i][j]);
//		pair<ll, ll> ans = max2D();
//
//		printf("Case #%d: %lld %lld\n", c, ans.first, ans.second);
//	}
//}
