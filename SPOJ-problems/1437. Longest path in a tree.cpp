#include <stdio.h>
#include <limits.h>
#include<queue>
#include<algorithm>
#include<functional>
#include<iostream>
#include<map>
#include<string>
using namespace std;
map<int,vector<pair<int,int > > > graph;
int dijkstra(int src,int n,int cases)
{
     vector<int> dist;  
     vector<bool> finished(20001); 
	 priority_queue<pair<int,int>,vector<pair<int, int> > > pq;
	 dist.assign(n+1,0);
     dist[src] = 0;
	 pq.push(make_pair(0,src));

	 while(!pq.empty())
	 {
		 pair<int,int> p = pq.top();
		 pq.pop();
		 int u=p.second;
       finished[u] = true;
	   for (int v = 0; v < graph[u].size(); v++)
	   {
		   if (!finished[graph[u][v].first] && dist[u]+graph[u][v].second > dist[graph[u][v].first])
		 {
			 dist[graph[u][v].first] = dist[u] + graph[u][v].second;
			 pq.push(make_pair(dist[graph[u][v].first],graph[u][v].first));
		 }
	   }
     }
	 if(cases==1)
	 {
		 int node;
		 int max=0;
		 for(int i=1;i<dist.size();i++)
		 {
			 if(dist[i]>max)
			 {
				 max=dist[i];
				 node=i;
			 }
		 }
		 return node;
	 }
	 else
	 {
		 int max=0;
		 for(int i=1;i<dist.size();i++)
		 {
			 if(dist[i]>max)
			 {
				 max=dist[i];
			 }
		 }
		 return max;
	 }
}

int main()
{
	int n,m;
	while(cin>>n)
	{
		for(int i=0;i<n-1;i++)
		{
			int node1,node2;
			cin>>node1>>node2;
			graph[node1].push_back(make_pair(node2,1));
			graph[node2].push_back(make_pair(node1,1));
		}
		int lol=dijkstra(1,n,1);
		cout<<dijkstra(lol,n,2);
		graph.clear();
	}
	return 0;
}