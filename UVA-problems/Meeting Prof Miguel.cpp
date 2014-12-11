//#include<iostream>
//#include<vector>
//#include<stdlib.h>
//#include <limits.h>
//#include<utility>
//#include<map>
//#include<unordered_map>
//#include<queue>
//#include <string>
//#include<functional>
//using namespace std;
//map<int,vector<pair<int,int> > > graph_Y,graph_M;
//vector<bool> finished_Y,finished_M;
//vector<int> dist_Y,dist_M;
//
//
//void dijkstra_Y(int src)
//{    
//	finished_Y.assign(27,false);
//	dist_Y.assign(27,INT_MAX);
//	 priority_queue<pair<int,int>,vector<pair<int, int> >,greater<pair<int, int> > > pq;
//     dist_Y[src] = 0;
//	 pq.push(make_pair(0,src));
//	 while(!pq.empty())
//	 {
//		 pair<int,int> p = pq.top();
//		 pq.pop();
//		 int u=p.second;
//       finished_Y[u] = true;
//	   for (int v = 0; v < graph_Y[u].size(); v++)
//	   {
//		   if (!finished_Y[graph_Y[u][v].first] && dist_Y[u]+graph_Y[u][v].second < dist_Y[graph_Y[u][v].first])
//		 {
//			 dist_Y[graph_Y[u][v].first] = dist_Y[u] + graph_Y[u][v].second;
//			 pq.push(make_pair(dist_Y[graph_Y[u][v].first],graph_Y[u][v].first));
//		 }
//	   }
//	 }
//}
//
//void dijkstra_M(int src)
//{    
//	finished_M.assign(27,false);
//	dist_M.assign(27,INT_MAX);
//	 priority_queue<pair<int,int>,vector<pair<int, int> >,greater<pair<int, int> > > pq;
//     dist_M[src] = 0;
//	 pq.push(make_pair(0,src));
//	 while(!pq.empty())
//	 {
//		 pair<int,int> p = pq.top();
//		 pq.pop();
//		 int u=p.second;
//       finished_M[u] = true;
//	   for (int v = 0; v < graph_M[u].size(); v++)
//	   {
//		   if (!finished_M[graph_M[u][v].first] && dist_M[u]+graph_M[u][v].second < dist_M[graph_M[u][v].first])
//		 {
//			 dist_M[graph_M[u][v].first] = dist_M[u] + graph_M[u][v].second;
//			 pq.push(make_pair(dist_M[graph_M[u][v].first],graph_M[u][v].first));
//		 }
//	   }
//	 }
//}
//
//
//int main()
//{
//	int m;
//	while(cin>>m)
//	{
//		if(m==0)
//			break;
//		for(int i=0;i<m;i++)
//		{
//			char age,directions,n1,n2;
//			int w,node1,node2;
//			cin>>age>>directions>>n1>>n2>>w;
//			node1=n1-'0'-16;
//			node2=n2-'0'-16;
//			if(age=='Y')
//			{
//				if(directions=='B')
//				{
//					graph_Y[node1].push_back(make_pair(node2,w));
//					graph_Y[node2].push_back(make_pair(node1,w));
//				}
//				else
//					graph_Y[node1].push_back(make_pair(node2,w));
//			}
//			else
//			{
//					if(directions=='B')
//				    {
//					   graph_M[node1].push_back(make_pair(node2,w));
//					   graph_M[node2].push_back(make_pair(node1,w));
//				    }
//				else
//					graph_M[node1].push_back(make_pair(node2,w));
//			}
//		}
//		char Y,M;
//		int w,initial_Y,initial_M,min=INT_MAX;
//		cin>>Y>>M;
//		vector<char> places;
//		initial_Y=Y-'0'-16;
//		initial_M=M-'0'-16;
//		dijkstra_Y(initial_Y);
//		dijkstra_M(initial_M);
//		for(int i=1;i<27;i++)
//		{
//			if(finished_Y[i]&&finished_M[i])
//			{
//			    if(min>dist_M[i]+dist_Y[i])
//				      min=dist_M[i]+dist_Y[i];
//			}
//		}
//		if(min==INT_MAX)
//			cout<<"You will never meet."<<endl;
//		else
//		{
//		for(int i=1;i<27;i++)
//		{
//			if(min==dist_M[i]+dist_Y[i])
//				places.push_back(i+'0'+16);
//		}
//		cout<<min<<" ";
//		for(int i=0;i<places.size();i++)
//		{
//			cout<<places[i];
//			if(i!=places.size()-1)
//				cout<<" ";
//		}
//		cout<<endl;
//		}
//		graph_M.clear();
//		graph_Y.clear();
//	}
//	return 0;
//}