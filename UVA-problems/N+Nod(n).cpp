//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//map<long long,long long>mp,mp1;
//vector<long long>v;
//void divisors()
//{ 
//	    mp[0]=0;
//        mp[1]=1;
//	for(long long i=2;i<=1000000;i++)
//	{
//		for(long long j=1;j<=sqrt(i);j++)
//		{
//			if(i%j==0)
//			mp[i]+2;
//		}
//		if(i==sqrt(i)*sqrt(i))
//			mp[i]--;
//	}
//}
//void NOD(long long index)
//{
//	v[0]=0;
//	v[1]=1;
//	mp1[0]=0;
//	mp1[1]=1;
//	if(index==1000000)
//		return;
//	v[index]=v[index-1]+mp[index-1];
//	mp1[v[index]]=index;
//	NOD(index+1);
//}
//int main()
//{
//	divisors();
//	long long t,A,B,diff=0;
//		NOD(2);
//	cin>>t;
//	for(int k=0;k<t;k++)
//	{
//		diff=0;
//		cin>>A>>B;
//		diff=mp1[B]-mp1[A];
//		cout<<"Case "<<k+1<<": "<<diff<<endl;
//	}
//	return 0;
//}