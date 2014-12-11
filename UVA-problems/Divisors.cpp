//#include<iostream>
//#include<math.h>
//using namespace std;
//int main()
//{
//	int c;
//	long long x,y,count=0,max=0,tmp;
//	cin>>c;
//	for(int i=1;i<=c;i++)
//	{
//		cin>>x>>y;
//		if(x<1000)
//		{
//		for(long long j=x;j<=y;j++)
//		{
//		    long long z=sqrt(j)+1;
//			for(long long k=1;k<=j/2;k++)
//			{
//				if(j%k==0)
//					count++;
//			}
//			if(count>max ||count==0)
//			{
//				max=count;
//				tmp=j;
//			}
//			count=0;
//		}
//		max++;
//		cout<<"Between "<<x<<" and "<<y<<", "<<tmp<<" has a maximum of "<<max<<" divisors."<<endl;
//	    }
//		else
//		{
//		for(long long j=x;j<=y;j++)
//		{
//		    long long z=sqrt(j)+1;
//			for(long long k=1;k<=z;k++)
//			{
//				if(j%k==0)
//					count++;
//			}
//			if(count>max)
//			{
//				max=count;
//				tmp=j;
//			}
//			count=0;
//		}
//		max*=2;
//		cout<<"Between "<<x<<" and "<<y<<", "<<tmp<<" has a maximum of "<<max<<" divisors."<<endl;
//		}
//		count=0;
//		max=0;
//	}
//	return 0;
//}


