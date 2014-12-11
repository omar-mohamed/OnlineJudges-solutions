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
//int gcd(int a,int b)
//{
//	if(b==0)
//		return a;
//	return gcd(b,a%b);
//}
//int primeFactorization(int n)
//{
//	int i;
//	int count;
//	int ans=1;
//	for(i=2;i*i<=n;i++)
//	{
//		count=0;
//		while(n%i==0)
//		{
//			n/=i;
//			count++;
//		}
//		ans*=count+1;
//	}
//	if(n>1)
//		ans*=2;
//	return ans;
//}
//
//
//
//int main()
//{
//	int t;
//	scanf("%d",&t);
//	int n1,n2;
//	for(int c=0;c<t;c++)
//	{
//		scanf("%d%d",&n1,&n2);
//		int num=gcd(n1,n2);
//
//		printf("%d\n",primeFactorization(num));
//	}
//	return 0;
//}