//#include <stdio.h>
//#include <limits.h>
//#include<queue>
//#include<algorithm>
//#include<functional>
//#include<iostream>
//#include<map>
//using namespace std;
//map<int,vector<pair<int,int > > > graph;
//int dijkstra(int src,int target,int n)
//{
//     vector<int> dist;     
//     vector<bool> finished(20001); 
//	 priority_queue<pair<int,int>,vector<pair<int, int> >,greater<pair<int, int> > > pq;
//	 dist.assign(n+5,INT_MAX);
//     dist[src] = 0;
//	 pq.push(make_pair(0,src));
//
//	 while(!pq.empty()&&!finished[target])
//	 {
//		 int u = pq.top().second;
//		 pq.pop();
//       finished[u] = true;
//	   for (int v = 0; v < graph[u].size(); v++)
//	   {
//		   if (!finished[graph[u][v].first] && dist[u]+graph[u][v].second < dist[graph[u][v].first])
//		 {
//			 dist[graph[u][v].first] = dist[u] + graph[u][v].second;
//			 pq.push(make_pair(dist[graph[u][v].first],graph[u][v].first));
//		 }
//	   }
//     }
//	 if(finished[target])
//		 return dist[target];
//	 else
//	     return -1;
//}

//int main()
//{
//	int cases;
//	cin>>cases;
//	for(int i=1;i<=cases;i++)
//	{
//		int vertices,edges,source,target;
//		cin>>vertices>>edges>>source>>target;
//		for(int j=0;j<edges;j++)
//		{
//			int u,v,w;
//			cin>>u>>v>>w;
//			graph[u].push_back(make_pair(v,w));
//			graph[v].push_back(make_pair(u,w));
//		}
//		cout<<"Case #"<<i<<": ";
//		int ans=dijkstra(source,target,vertices);
//		if(ans<0)
//			cout<<"unreachable"<<endl;
//		else
//			cout<<ans<<endl;
//		graph.clear();
//	}
//	return 0;
//}