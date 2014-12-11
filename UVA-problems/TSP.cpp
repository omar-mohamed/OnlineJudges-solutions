//#include<iostream>
//#include<vector>
//#include<utility>
//#include<math.h>
//#include<cmath>
//using namespace std;
//
//void initialize_dist(vector<vector<double> > &graph,vector<pair<double,double> > coor)
//{
//	for(int i=0;i<(int)coor.size();i++)
//		for(int j=0;j<(int)coor.size();j++)
//			graph[i][j]=sqrt(((coor[i].first-coor[j].first)*(coor[i].first-coor[j].first))+((coor[i].second-coor[j].second)*(coor[i].second-coor[j].second)));
//}
//
//
//double TSP()
//{
//
//}
//
//
//int main()
//{
//	int n;
//	while(cin>>n)
//	{
//		if(n==0)
//			break;
//		vector<vector<double> > graph(n);
//		vector<pair<double,double> > coor(n);
//		for(int i=0;i<n;i++)
//		{
//			graph[i].resize(n);
//			double x,y;
//			cin>>x>>y;
//			coor[i].first=x;
//			coor[i].second=y;
//		}
//		initialize_dist(graph,coor);
//
//	}
//	return 0;
//}