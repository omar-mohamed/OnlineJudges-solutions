//
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
//
//long long choose[61][61];
//
//int main()
//{
//	int b,g,t;
//	choose[0][0]=1;
//	for(int i=1;i<=60;i++)
//		for(int j=0;j<=i;j++)
//		{
//			if(j==0)
//				choose[i][j]=choose[i-1][j];
//			else
//				choose[i][j]=choose[i-1][j]+choose[i-1][j-1];
//		}
//	while(cin>>b>>g>>t)
//	{
//		long long sum=0;
//		for(int i=4;i<=b;i++)
//		{
//			if(i>t-1||t-i<=0)
//				break;
//			sum+=choose[b][i]*choose[g][t-i];
//		}
//		cout<<sum<<endl;
//	}
//	return 0;
//}