//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<cmath>
//using namespace std;
//int main()
//{
//	string ZO;
//	int cases=1,queries,x,y;
//	while(cin>>ZO)
//	{
//		vector<int> v;
//		cout<<"Case "<<cases<<":"<<endl;
//		for(int i=0;i<ZO.size()-1;i++)
//		{
//			if(ZO[i]!=ZO[i+1])
//				v.push_back(i+1);
//		}
//		cin>>queries;
//		vector<int>::iterator it;
//		for(int i=0;i<queries;i++)
//		{
//			cin>>x>>y;
//			if(v.empty())
//				cout<<"Yes"<<endl;
//			else
//			{
//			it=upper_bound(v.begin(),v.end(),min(x,y));
//			if(it==v.end()||*it>max(x,y))
//				cout<<"Yes"<<endl;
//			else
//				cout<<"No"<<endl;
//			}
//		}
//		cases++;
//	}
//	return 0;
//}

