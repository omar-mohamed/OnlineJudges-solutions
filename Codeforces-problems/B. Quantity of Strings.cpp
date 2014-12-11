//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <deque>
//#include<queue>
//#include <stack>
//#include <bitset>
//#include <algorithm>
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
//using namespace std;
//typedef long long ll;
//ll mod=1000000007;
//
//ll fastPower(ll a, ll b)
//{
//	ll result = 1;
//
//	while (b)
//	{
//		if (b&1)
//			result = (result*a)%mod;
//		b >>=1;
//		a = (a*a)%mod;
//	}
//
//	return result%mod;
//}
//
//int main()
//{
//	ll n,m,k,ans;
//	while(cin>>n>>m>>k)
//	{
//		if(k==1||k>n)
//			cout<<fastPower(m,n)<<endl;
//		else if(k==n)
//			cout<<fastPower(m,(n+1)/2)<<endl;
//		else if(k&1)
//			cout<<m*m<<endl;
//		else
//			cout<<m<<endl;
//	}
//	return 0;
//}