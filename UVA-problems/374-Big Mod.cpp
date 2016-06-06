//#include <iostream>
//#include<vector>
//#include<queue>
//#include<stack>
//#include <stdio.h>
//#include <stdlib.h>
//#include<unordered_map>
//#include <time.h>
//#include<algorithm>
//#include<string>
//#include<map>
//#include<bitset>
//using namespace std;
//typedef long long ll;
//ll INF = 100000000000;
//
//
//ll bigMod(ll num, ll pow, ll mod)
//{
//	if (pow == 0)
//		return 1;
//	if (pow == 1)
//		return num;
//	if (pow & 1)  //odd
//		return (num*bigMod(num, pow - 1, mod)) % mod;
//
//	ll ret = bigMod(num, pow / 2, mod);
//	ret = (ret*ret) % mod;
//	return ret;
//}
//
//
//int main()
//{
//	long long b, p, m;
//	while (cin >> b >> p >> m)
//	{
//		cout << bigMod(b, p, m) << endl;
//	}
//	return 0;
//}