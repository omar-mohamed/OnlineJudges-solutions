//#include<iostream>
//#include<vector>
//#include<stdlib.h>
//#include<utility>
//#include<map>
//#include<queue>
//#include <string>
//using namespace std;
//typedef map<string,bool> lol;
//map<string,vector<string> > graph;
//map<string,string> d;
//lol visited;
//
//
//string BFS(string start,string target)
//{
//	queue<string> q;
//	q.push(start);
//	visited[start]=true;
//	while(!q.empty())
//	{
//		string v;
//		v=q.front();
//		q.pop();
//		for(int i=0;i<graph[v].size();i++)
//		{
//			if(!visited[graph[v][i]])
//			{
//				d[graph[v][i]]+=d[v]+v[0];
//				visited[graph[v][i]]=true;
//				q.push(graph[v][i]);
//			}
//		}
//	}
//	d[target]+=target[0];
//	return d[target];
//}
//
//
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		int edges,queries;
//		cin>>edges>>queries;
//		for(int j=0;j<edges;j++)
//		{
//			string city1,city2;
//			cin>>city1>>city2;
//			graph[city1].push_back(city2);
//			visited[city1]=false;
//			visited[city2]=false;
//			graph[city2].push_back(city1);
//		}
//		for(int j=0;j<queries;j++)
//		{
//			string city1,city2;
//			cin>>city1>>city2;
//			cout<<BFS(city1,city2)<<endl;
//			d.clear();
//			for(lol::iterator it=visited.begin();it!=visited.end();++it)
//				it->second=false;
//		}
//		graph.clear();
//		visited.clear();
//		d.clear();
//		if(i!=n)
//			cout<<endl;
//	}
//	return 0;
//}