//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//void path(int x,int y,int n,int arr[][100],vector<int> &v);
//int main()
//{
//	vector<int> v;
//	int n;
//	int arr[100][100];
//	while(cin>>n)
//	{
//		for(int i=0;i<n;i++)
//			for(int j=0;j<n;j++)
//				scanf("%1d",&arr[i][j]);
//		for(int i=0;i<n;i++)
//			for(int j=0;j<n;j++)
//			{
//				if(arr[i][j]==1)
//					path(i,j,n,arr,v);
//			}
//			sort(v.begin(),v.end());
//			cout<<v.at(v.size()-1)<<endl;
//			v.clear();
//	}
//	return 0;
//}
//
//void path(int x,int y,int n,int arr[][100],vector<int> &v)
//{
//	int min=200000;
//		for(int i=0;i<n;i++)
//			for(int j=0;j<n;j++)
//			{
//				if(arr[i][j]==3)
//				{
//					int distance=abs(i-x)+abs(j-y);
//					if(distance<min)
//						min=distance;
//				}
//			}
//			v.push_back(min);
//}