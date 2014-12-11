//#include<iostream>
//using namespace std;
//#include<string>
//#include <stdlib.h>
//#include<math.h>
//#include<cmath>
//int main()
//{
//	string first="00000000000000000000000000000000",second="00000000000000000000000000000000",Ssum="00000000000000000000000000000000",sub;
//	long long x,y;
//	double long sum=0,tmp;
//	while(cin>>x>>y)
//	{
//		for(int i=0;i<32;i++)
//		{
//			if(x%2==0)
//				first[31-i]='0';
//			else
//				first[31-i]='1';
//			x/=2;
//		}
//		for(int i=0;i<32;i++)
//		{
//			if(y%2==0)
//				second[31-i]='0';
//			else
//				second[31-i]='1';
//			y/=2;
//		}
//		for(int i=0;i<32;i++)
//		{
//			if(first[i]==second[i])
//				Ssum[i]='0';
//			else
//				Ssum[i]='1';
//		}
//		for(double i=0;i<32;i++)
//		{
//			sub=Ssum.substr(31-i,1);
//			  tmp=atoi(sub.c_str());
//			 sum+=tmp*pow(2,i);
//		}
//		cout<<sum<<endl;
//		sum=0;
//	}
//	return 0;
//}