//#include<iostream>
//#include<string.h>
//#include<vector>
//#include<utility>
//#include<map>
//#include<algorithm>
//#include<math.h>
//#include<cmath>
//using namespace std;
//typedef long long ll;
//int s[1000000];
//int l[1000000];
//int r[1000000];
//
//bool binarySearch(int le,int ri,int goal)
//{
//	if(le>ri)
//		return false;
//	int mid=le+(ri-le)/2;
//	if(l[mid]==goal)
//		return true;
//
//	if(l[mid]<goal)
//	{
//		return binarySearch(mid+1,ri,goal);
//	}
//	else
//		return binarySearch(le,mid-1,goal);
//}
//
//
//
//int main()
//{
//	int n;
//	while(cin>>n)
//	{
//		map<int,int> m1;
//		map<int,int> m2;
//		for(int i=0;i<n;i++)
//			cin>>s[i];
//		int sizeLeft=0;
//		int size_right=0;
//		for(int a=0;a<n;a++)
//			for(int b=0;b<n;b++)
//				for(int c=0;c<n;c++)
//					l[sizeLeft++]=(s[a]*s[b])+s[c];
//						//m1[(s[a]*s[b])+s[c]]++;
//		for(int d=0;d<n;d++)
//			if(s[d]!=0)
//			  for(int e=0;e<n;e++)
//				  for(int f=0;f<n;f++)
//					 r[size_right++]=s[d]*(s[e]+s[f]);
//						//m2[s[d]*(s[e]+s[f])]++;
//
//		sort(l,l+sizeLeft);
//		sort(r,r+size_right);
//		ll co=0;
//	
//
//		//for(map<int,int>::iterator it=m2.begin();it!=m2.end();it++)
//		//{
//		//	map<int,int>::iterator it2=m1.find(it->first);
//		//	if(it2!=m1.end())
//		//	{
//		//		co+=it->second * it2->second;
//		//	}
//		//}
//		//for(int i=0;i<size_right;i++)
//		//{
//		//	  if(binarySearch(0,sizeLeft,r[i]))
//		//	  {
//		//	    co++;
//		//	  }
//		//}
//		//cout<<co<<endl;
//	}
//
//	return 0;
//}
//
//
