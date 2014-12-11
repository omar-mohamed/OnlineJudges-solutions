//#include <stdio.h>
//#include <limits.h>
//#include<queue>
//#include<algorithm>
//#include<functional>
//#include<iomanip>
//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//map<int,vector<pair<int,double > > > graph;
//double dijkstra(int src,int n)
//{
//     vector<double> dist;
//     vector<bool> finished(n+1);
//	 priority_queue<pair<double,int> > pq;
//	 dist.assign(n+1,0);
//	 dist[src]=1;
//	 pq.push(make_pair(1,src));
//	 while(!pq.empty()&&!finished[n])
//	 {
//		 pair<double,int> p = pq.top();
//		 pq.pop();
//		 int u=p.second;
//       finished[u] = true;
//	   for (int v = 0; v < graph[u].size(); v++)
//	   {
//		   if (!finished[graph[u][v].first] && dist[u]*graph[u][v].second > dist[graph[u][v].first])
//		 {
//			 dist[graph[u][v].first] = dist[u] * graph[u][v].second;
//			 pq.push(make_pair(dist[graph[u][v].first],graph[u][v].first));
//		 }
//	   }
//     }
//	 return dist[n];
//}
//
//int main()
//{
//	int n,m;
//	while(cin>>n)
//	{
//		if(n==0)
//			break;
//		cin>>m;
//		for(int i=0;i<m;i++)
//		{
//			int node1,node2;
//			double	w;
//			cin>>node1>>node2>>w;
//			graph[node1].push_back(make_pair(node2,w/100));
//			graph[node2].push_back(make_pair(node1,w/100));
//		}
//		cout<<fixed<<setprecision(6)<<dijkstra(1,n)*100<<" percent"<<endl;
//		graph.clear();
//	}
//	return 0;
//}