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
//int dp[101][1501][21][3];
//int dishes[101];
//int happiness[101];
//int n,k;
//int maxMoney;
//int knapSack(int index, int moneySpent,int numOfDishes,int takenThisDish)
//{
//	if (index == k)
//		return 0;
//
//	int &ret = dp[index][moneySpent][numOfDishes][takenThisDish];
//	if (ret != -1)
//		return ret;
//
//	int take = 0;
//	int newMoney = moneySpent + dishes[index];
//	int tax = ceil((double)newMoney*0.1);
//	if (newMoney+tax <= maxMoney&&numOfDishes<2*(n+1)&&takenThisDish<2)
//		take = knapSack(index , newMoney,numOfDishes+1,takenThisDish+1)+happiness[index];
//
//	int leave = knapSack(index + 1, moneySpent,numOfDishes,0);
//
//	return ret = max(leave, take);
//}
//
//
//
//int main()
//{
//	int tea;
//	while (cin >> n >> maxMoney >> tea >> k)
//	{
//		if (n == 0 && maxMoney == 0 && tea == 0 && k == 0)
//			break;
//		memset(dp, -1, sizeof(dp));
//		maxMoney = maxMoney*(n + 1);
//		int sum = 0,tmp;
//		for (int i = 0; i < k; i++)
//		{
//			cin >> dishes[i];
//			sum = 0;
//			for (int j = 0; j <= n; j++)
//			{
//				cin >> tmp;
//				sum += tmp;
//			}
//			happiness[i] = sum;
//		}
//		double ans = knapSack(0, tea*(n + 1),0,0)/ (double)(n+1);
//		cout << fixed << setprecision(2) << ans << endl;
//	}
//	return 0;
//}