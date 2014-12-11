//#include<iostream>
//#include<vector>
//#include<stdlib.h>
//#include<utility>
//#include<map>
//#include<queue>
//#include<iomanip>
//#include <string>
//#include<set>
//using namespace std;
//map<int,vector<int> > graph;
//vector<bool> visited(10000);
//
//int BFS(int start)
//{
//	int count=0;
//	queue<int> q;
//	q.push(start);
//	visited[start]=true;
//	while(!q.empty())
//	{
//		int v;
//		v=q.front();
//		q.pop();
//		count++;
//		for(int i=0;i<graph[v].size();i++)
//		{
//			if(!visited[graph[v][i]])
//			{
//				visited[graph[v][i]]=true;
//				q.push(graph[v][i]);
//			}
//		}
//	}
//	return count;
//}
//
//
//int main()
//{
//	int cases;
//	cin>>cases;
//	for(int i=1;i<=cases;i++)
//	{
//		int ans=0;
//		int n,m,l;
//		cin>>n>>m>>l;
//		for(int j=0;j<m;j++)
//		{
//			int node1,node2;
//			cin>>node1>>node2;
//			graph[node1].push_back(node2);
//		}
//		for(int j=0;j<l;j++)
//		{
//			int start;
//			cin>>start;
//			if(!visited[start])
//			  ans+=BFS(start);
//		}
//		cout<<ans<<endl;
//		visited.assign(visited.size(),false);
//		graph.clear();
//	}
//	return 0;
//}