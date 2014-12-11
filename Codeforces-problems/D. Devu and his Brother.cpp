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
//
//int main()
//{
//    int n,m;
//	while(cin>>n>>m)
//	{
//		vector<ll> bigBrother,youngBrother;
//		ll tmp,ans=0;
//		for(int i=0;i<n;i++)
//		{
//			cin>>tmp;
//			bigBrother.push_back(tmp);
//		}
//		for(int i=0;i<m;i++)
//		{
//			cin>>tmp;
//			youngBrother.push_back(tmp);
//		}
//		sort(bigBrother.begin(),bigBrother.end());
//		sort(youngBrother.rbegin(),youngBrother.rend());
//		int size=min(youngBrother.size(),bigBrother.size());
//		for(int i=0;i<size;i++)
//		{
//			if(bigBrother[i]>youngBrother[i])
//				break;
//			ans+=abs(bigBrother[i]-youngBrother[i]);
//		}
//		cout<<ans<<endl;
//	}
//	return 0;
//}