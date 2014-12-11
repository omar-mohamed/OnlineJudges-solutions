#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include<queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include<unordered_map>
#include<string>
#include<string.h>
using namespace std;
typedef long long ll;
ll oo=4000000000000000000;
ll n,k,ans=oo;
ll binarySearch(ll left,ll right)
{
	if(left>right)
		return k-left;
	ll mid=left+(right-left)/2;
	ll sum=(((k-1)*(k))/2)-(((mid+1)*mid)/2);
	if(sum>=n)
		return binarySearch(mid+1,right);
	else
		return binarySearch(left,mid-1);
}

int main()
{
	while(cin>>n>>k)
	{
		n--;
		ans=oo;
		if(n<=(k*(k-1))/2)
		 cout<<binarySearch(1,k-1)<<endl;
		else
			cout<<"-1\n";
	}

	return 0;
}
