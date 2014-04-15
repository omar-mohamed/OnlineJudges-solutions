//#include<iostream>
//#include<vector>
//#include<stdio.h>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int subMatrix(vector<string> v)
//{
//	vector<vector<int> > arr;
//	int maximum=0;
//	arr.resize(v.size());
//	for(int i=0;i<v.size();i++)
//		arr[i].resize(v.size());
//
//	for(int i=0;i<v.size();i++)
//	{
//		arr[0][i]=v[0][i]-'0';
//		arr[i][0]=v[i][0]-'0';
//	}
//	for(int i=1;i<v.size();i++)
//		for(int j=1;j<v.size();j++)
//		{
//			if(v[i][j]=='1')
//			{
//				arr[i][j]=max(arr[i-1][j],arr[i][j-1])+1;
//				if(arr[i][j]>maximum)
//					maximum=arr[i][j];
//			}
//			else
//				arr[i][j]=0;
//		}
//		return maximum;
//}
//
//
//
//
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		vector<string> v;
//		string s;
//		cin>>s;
//		v.push_back(s);
//		for(int j=0;j<s.size()-1;j++)
//		{
//			cin>>s;
//			v.push_back(s);
//		}
//		getchar();
//		string line;
//		getline(cin,line);
//		cout<<subMatrix(v)<<endl;
//		if(i!=n)
//			cout<<endl;
//	}
//	return 0;
//}