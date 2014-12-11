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
//lol visited;
//vector<string> trip;
//
//bool BFS(string start,string target)
//{
//	queue<string> q;
//	q.push(start);
//	visited[start]=true;
//	while(!q.empty())
//	{
//		string v;
//		bool flag=false;
//		v=q.front();
//		q.pop();
//		if(v==target)
//			return true;
//		for(int i=0;i<graph[v].size();i++)
//		{
//			string u=graph[v][i];
//			for(int j=0;j<trip.size();j++)
//			{
//				if(trip[j]!=target&&u==trip[j])
//					return false;
//			}
//			if(!visited[u])
//			{
//              visited[u]=true;
//               q.push(u);
//            }
//		}
//	}
//	return false;
//}
//
//
//int main()
//{
//	int n;
//	while(cin>>n)
//	{
//		bool flag=true;
//		if(n==0)
//			break;
//		 trip.clear();
//		int m;
//		for(int i=0;i<n;i++)
//		{
//			string c;
//			cin>>c;
//			trip.push_back(c);
//		}
//		cin>>m;
//		for(int i=0;i<m;i++)
//		{
//			string c1,c2;
//			cin>>c1>>c2;
//			graph[c1].push_back(c2);
//			visited[c1]=false;
//			visited[c2]=false;
//		}
//		for(int i=1;i<n;i++)
//		{
//			for(lol::iterator it=visited.begin();it!=visited.end();it++)
//				it->second=false;
//			if(!BFS(trip[i-1],trip[i]))
//			{
//				flag=false;
//				break;
//			}
//		}
//		if(flag)
//			cout<<"The tour can be planned."<<endl;
//		else
//			cout<<"The tour cannot be planned with the given flight segments."<<endl;
//		graph.clear();
//		visited.clear();
//	}
//	return 0;
//}