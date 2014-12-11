//#include<iostream>
//#include<string>
//#include<string.h>
//using namespace std;
//long long dp[101][101];
//string str;
//long long palindrome(int i,int j)
//{
//	if(i==j)
//		return 1;
//	if(i+1==j)
//         return 2 + (str[i]==str[j]);
//	long long &ret=dp[i][j];
//	if(ret!=-1)
//		return ret;
//	ret=0;
//	if(str[i]==str[j])
//		ret+=palindrome(i+1,j-1)+1;
//	ret+=palindrome(i+1,j)+palindrome(i,j-1);
//	ret-=palindrome(i+1,j-1);
//	return ret;
//}
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		memset(dp,-1,sizeof(dp));
//		cin>>str;
//		cout<<palindrome(0,str.size()-1)<<endl;
//	}
//	return 0;
//}