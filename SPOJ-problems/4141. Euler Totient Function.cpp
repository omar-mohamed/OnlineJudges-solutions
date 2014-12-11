//#include<iostream>
//#include<string.h>
//#include<vector>
//#include<utility>
//#include<map>
//#include<math.h>
//#include<cmath>
//using namespace std;
//typedef long long ll;
//#pragma warning(disable: 4996)
//
//double primeFactorization(int n)
//{
//	int i;
//	double ans=n;
//	int count;
//	for(i=2;i*i<=n;i++)
//	{
//		count=0;
//		while(n%i==0)
//		{
//			count++;
//			n/=i;
//		}
//		if(count>0)
//		 ans*=(1-(1.0/i));
//	}
//	if(n>1)
//		ans*=(1-(1.0/n));
//	return ans;
//}
//
//int main()
//{
//	int t;
//	scanf("%d",&t);
//	int n1;
//	for(int c=0;c<t;c++)
//	{
//		scanf("%d",&n1);
//		printf("%.0f\n",primeFactorization(n1));
//	}
//	return 0;
//}