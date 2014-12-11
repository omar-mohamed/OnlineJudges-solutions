//#include<iostream>
//#include<string.h>
//#include<vector>
//#include<utility>
//#include<map>
//#include<math.h>
//#include<cmath>
//using namespace std;
//typedef long long ll;
//map<int,pair<int,int> > m;
//
//void primeFactorization1(int n)
//{
//	int i;
//	int count=0;
//	for(i=2;i*i<=n;i++)
//	{
//		while(n%i==0)
//		{
//
//			m[i].first++;
//			n/=i;
//		}
//	}
//	if(n>1)
//		m[n].first++;
//}
//
//void primeFactorization2(int n)
//{
//	int i;
//	for(i=2;i*i<=n;i++)
//	{
//		
//		while(n%i==0)
//		{
//			m[i].second++;
//			n/=i;
//		}
//	}
//	if(n>1)
//	  m[n].second++;
//}
//
//
//int main()
//{
//	int n1,n2,cases=1;
//	while(cin>>n1>>n2)
//	{
//		if(n1==0&&n2==0)
//			break;
//		primeFactorization1(n1);
//		primeFactorization2(n2);
//		int dis=0;
//		int size1=0,size2=0;
//		for(map<int,pair<int,int> >::iterator it=m.begin();it!=m.end();it++)
//		{
//			dis+=max(it->second.first,it->second.second)-min(it->second.first,it->second.second);
//		}
//
//		cout<<cases++<<". "<<m.size()<<":"<<dis<<endl;
//		m.clear();
//	}
//
//}