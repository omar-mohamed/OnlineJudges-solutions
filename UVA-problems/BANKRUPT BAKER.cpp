//#include<iostream>
//#include<map>
//#include<vector>
//#include<cctype>
//#include<stdio.h>
//#include<utility>
//#include<string>
//#include<algorithm>
//#
//using namespace std;
//
//int main()
//{
//	int cases,recsCases;
//	long ing,rec,budget,price,quantity,sum;
//	string blinder,line,recipe;
//	cin>>cases;
//	for(int i=0;i<cases;i++)
//	{
//		map<string,long> ings;
//		vector<pair<long,string> > recs;
//		getchar();
//		getline(cin,blinder);
//		cin>>ing>>rec>>budget;
//		for(int j=0;j<ing;j++)
//		{
//			cin>>line>>price;
//			ings[line]=price;
//		}
//		for(int j=0;j<rec;j++)
//		{
//			getchar();
//			getline(cin,recipe);
//			sum=0;
//			cin>>recsCases;
//			for(int k=0;k<recsCases;k++)
//			{
//				cin>>line>>quantity;
//				sum+=ings[line]*quantity;
//			}
//			if(sum<=budget)
//				recs.push_back(make_pair(sum,recipe));
//		}
//		for(int j=0;j<blinder.size();j++)
//			blinder[j]=toupper(blinder[j]);
//		cout<<blinder<<endl;
//		if(recs.empty())
//			cout<<"Too expensive!"<<endl;
//		else
//		{
//			sort(recs.begin(),recs.end());
//			for(int j=0;j<recs.size();j++)
//				cout<<recs[j].second<<endl;
//		}
//		cout<<endl;
//	}
//	return 0;
//}