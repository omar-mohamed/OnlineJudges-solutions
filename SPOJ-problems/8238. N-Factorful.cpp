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
//bool Notprimes[1000001]={0};
//int Fn[1000007][11]={0};
//int coun[1000001]={0};
//void sieve(int n)
//{
//	Notprimes[0]=Notprimes[1]=1;
//	for(int i=2;i<=n;i++)
//	{
//		if(!Notprimes[i])
//		{
//			for(int j=i+i;j<=n;j+=i)
//			{
//				Notprimes[j]=1;
//				coun[j]++;
//			}
//			coun[i]++;
//		}
//	}
//}
//
//
//int main()
//{
//	int t;
//	scanf("%d",&t);
//	int n1,n2,k;
//	sieve(1000000);
//	for(int i=1;i<1000001;i++)
//	{
//		for(int j=0;j<11;j++)
//			Fn[i][j]=Fn[i-1][j];
//
//		  Fn[i][coun[i]]++;
//	}
//	for(int c=0;c<t;c++)
//	{
//		int co=0;
//		scanf("%d%d%d",&n1,&n2,&k);
//		printf("%d\n",Fn[n2][k]-Fn[n1-1][k]);
//	}
//	return 0;
//}