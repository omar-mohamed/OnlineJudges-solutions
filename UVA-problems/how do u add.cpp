//#include<iostream>
//#include<string.h>
//using namespace std;
//int dp[101][101];
//
//int add(int n,int k)
//{
//	if(k<=1)
//		return 1;
//	int &ret=dp[n][k];
//	if(ret!=-1)
//		return ret;
//	int count=0;
//	for(int i=0;i<=n;i++)
//	{
//		 count+=add(n-i,k-1)%1000000;
//	}
//	return ret=count%1000000;
//}
//int main()
//{
//	int n,k;
//	while(cin>>n>>k)
//	{
//		memset(dp,-1,sizeof(dp));
//		if(n==0&&k==0)
//			break;
//		else
//			cout<<add(n,k)<<endl;
//	}
//	return 0;
//}