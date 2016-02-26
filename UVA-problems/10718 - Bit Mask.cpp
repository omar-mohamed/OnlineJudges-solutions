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
//ll getBit(ll bitmask, int index)
//{
//	return ((bitmask >> index) & 1);
//}
//
//ll oneBits(ll bitmask, int index)
//{
//	ll ones= (bitmask|((1 << index)-1));
//	return setBit(ones, index, 0);
//}
//
//int main()
//{
//	ll n, l, r;
//	//freopen("out.txt", "w", stdout);
//	while (cin >> n >> l >> r)
//	{
//		ll ans = r;
//
//		for (int i = 62; i >= 0; i--)
//		{
//			if (getBit(n, i) && getBit(ans, i) && oneBits(ans, i) >= l)
//			{
//				ans = oneBits(ans, i);
//			}
//		}
//
//		for (int i = 62; i >= 0; i--)
//		{
//			if (!getBit(n, i) && !getBit(ans, i) && setBit(ans, i,1) <= r)
//			{
//				ans = setBit(ans, i, 1);
//			}
//		}
//		cout << ans << endl;
//	}
//}