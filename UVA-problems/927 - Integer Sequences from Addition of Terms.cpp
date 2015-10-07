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
//ll generateNumber(const vector<ll>& coeff,const ll& n)
//{
//	ll num = coeff[0];
//	for (ll i = 1; i < coeff.size(); i++)
//		num += coeff[i] * (long long)pow(n, i);
//	return num;
//}
//
//int main()
//{
//	int t,length,k,index,d,n,tmpD;
//	ll ans;
//	scanf("%d", &t);
//	while (t--)
//	{
//		scanf("%d", &length);
//		vector<ll> coeff(length+1);
//		for (int i = 0; i <= length; i++)
//			scanf("%lld", &coeff[i]);
//		scanf("%d", &d);
//		scanf("%d", &k);
//		tmpD = d;
//		index = 1;
//		n = 1;
//		while (true)
//		{
//			ans = generateNumber(coeff, n);
//			index += d;
//			d += tmpD;
//			n++;
//			if (index > k)
//				break;
//		}
//		printf("%lld\n", ans);
//	}
//	return 0;
//}