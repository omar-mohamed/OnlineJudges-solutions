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
//ll k,n,m;
//ll binarySearch(ll left,ll right)
//{
//    ll mid=left+(right-left)/2;
//	ll smaller=0;
//	if(left>right)
//		return mid-1;
//	for(int i=1;i<=n;i++)
//	{
//		smaller+=min(m,(mid-1)/i);
//	}
//	if(smaller<k)
//		return binarySearch(mid+1,right);
//	else
//		return binarySearch(left,mid-1);
//}
//
//int main()
//{
//	while(cin>>n>>m>>k)
//	{
//		cout<<binarySearch(1,n*m)<<endl;
//	}
//	return 0;
//}