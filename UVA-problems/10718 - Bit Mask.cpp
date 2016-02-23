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
//int INF = 1000000;
//
//
////find first mask of ones bigger than u
////turn off the ones in the ones position in n but no undershooting
////try to close the first 1 to make it in the range //repeat
//
//ll getBit(ll bitmask, int index)
//{
//	return ((bitmask >> index) & 1);
//}
//
//ll setBit(ll bitmask, int index,int val)
//{
//	if (val == 1)
//	{
//		ll one = 1;
//		return (bitmask | (one << index));
//	}
//	else
//	{
//		ll one = 1;
//		return (bitmask &~(one << index));
//	}
//}
//
//ll underShoot(ll num,int index,ll l)
//{
//	for (int i = 0; i <= index; i++)
//	{
//		if (getBit(num, i) == 1)
//		{
//			ll candidate = setBit(num, i, 0);
//			//if (candidate >= l)
//			//{
//				num = candidate;
//				break;
//		//	}
//		}
//	}
//	return num;
//}
//
//
//ll closeOnesinn(ll num, int index,ll n,ll u ,ll l)
//{
//	for (int i = index; i >= 0; i--)
//	{
//		if (getBit(n, i) == 1 && getBit(num, i) == 1)
//		{
//			if (setBit(num, i, 0) <= u&&setBit(num, i, 0) >= l)
//				num = setBit(num, i, 0);
//		}
//	}
//	return num;
//}
//
////2345515 3444441325 3444441325
//ll overShoot(ll num, int index, ll u,ll n)
//{
//	for (int i = index; i >= 0; i--)
//	{
//		if (getBit(num, i) == 0/*&&getBit(n,i)!=1*/)
//		{
//			ll candidate = setBit(num, i, 1);
//			if (candidate <= u)
//			{
//				num = candidate;
//				break;
//			}
//		}
//	}
//	return num;
//}
//
//ll overShootNonOnes(ll num, int index, ll u, ll n)
//{
//	for (int i = index; i >= 0; i--)
//	{
//		if (getBit(num, i) == 0&&getBit(n,i)==0)
//		{
//			ll candidate = setBit(num, i, 1);
//			if (candidate <= u)
//			{
//				num = candidate;
//			}
//		}
//
//	}
//	return num;
//}
//
//// 2147483647
//// 4294967295
//int main()
//{
//	ll n, l, u;
//	vector<ll> allOnes;
//	ll x = 0;
//	for (int i = 0; i < 63; i++)
//	{
//		x = setBit(x,i,1);
//		allOnes.push_back(x);
//	}
//	int index=63;
//	while (cin >> n >> l >> u)
//	{
//		ll firstBigger=overShootNonOnes(0,63,u,n);
//		//for (int i = 0; i < 63; i++)
//		//{
//		//	if (allOnes[i] >= u)
//		//	{
//		//		firstBigger = allOnes[i];
//		//		index = i;
//		//		break;
//		//	}
//		//}
//
//		while (true)
//		{
//			if (firstBigger <= u&&firstBigger >= l)
//			{
//				firstBigger = closeOnesinn(firstBigger, index, n, u, l);
//				firstBigger = overShootNonOnes(firstBigger, index, u, n);
//				cout << firstBigger << endl;
//				break;
//			}
//			if (firstBigger > u)
//				firstBigger = underShoot(firstBigger, index, l);
//			else if (firstBigger < l)
//				firstBigger = overShoot(firstBigger, index, u, n);
//		}
//	}
//	return 0;
//}