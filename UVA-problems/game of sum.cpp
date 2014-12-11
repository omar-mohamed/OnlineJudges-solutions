//#include<iostream>
//#include<string.h>
//#include<cmath>
//#include<math.h>
//#include<limits.h>
//using namespace std;
//int dp[105][105][2];
//int arr[105];
//int gameOfSum(int i,int j,int p)
//{
//	if(i>j)
//		return 0;
//	int &ret=dp[i][j][p];
//	if(ret!=INT_MIN)
//		return ret;
//	int player1=0;
//	int player2=0;
//	player1=max(gameOfSum(i+1,j),max(i,j-1));
//	player2=max(gameOfSum(i+1,j),max(i,j-1))
//}
//int main()
//{
//	int n;
//	while(cin>>n)
//	{
//		if(n==0)
//			break;
//		memset(dp,INT_MIN,sizeof(dp));
//		int arr[105];
//		cout<<gameOfSum(0,n-1)<<endl;
//	}
//	return 0;
//}