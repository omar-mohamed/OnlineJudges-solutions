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
int dijkstra(int src,int n)
{
     vector<int> dist;  
     vector<bool> finished(20001); 
	 priority_queue<pair<int,int>,vector<pair<int, int> >,greater<pair<int, int> > > pq;
	 dist.assign(n+1,INT_MAX);
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
		   if (!finished[graph[u][v].first] && dist[u]+graph[u][v].second < dist[graph[u][v].first])
		 {
			 dist[graph[u][v].first] = dist[u] + graph[u][v].second;
			 pq.push(make_pair(dist[graph[u][v].first],graph[u][v].first));
		 }
	   }
     }
	 sort(dist.begin()+1,dist.end());
	 return dist[dist.size()-1];
}

int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<i;j++)
			{
				string l;
				cin>>l;
				if(l!="x")
				{
					int w=atoi(l.c_str());
					graph[i].push_back(make_pair(j,w));
					graph[j].push_back(make_pair(i,w));
				}
			}

		}
		cout<<dijkstra(1,n)<<endl;
		graph.clear();
	}
	return 0;
}