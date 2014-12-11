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
//vector<int> visited(10000);
//typedef map<int,int> lol;
//lol d;
//
//void BFS(int start)
//{
//	queue<int> q;
//	q.push(start);
//	d[start]=0;
//	visited[start]=true;
//	while(!q.empty())
//	{
//		int v;
//		v=q.front();
//		q.pop();
//		for(int i=0;i<graph[v].size();i++)
//		{
//			if(!visited[graph[v][i]])
//			{
//				d[graph[v][i]]=d[v]+1;
//				visited[graph[v][i]]=true;
//				q.push(graph[v][i]);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int a,b,cases=1;
//	while(cin>>a>>b)
//	{
//		visited.assign(visited.size(),false);
//		double sum=0.0;
//		set<int> index;
//		index.insert(a);
//		if(a==0&&b==0)
//			break;
//		graph[a].push_back(b);
//		while(cin>>a>>b)
//		{
//			if(a==0&&b==0)
//				break;
//			graph[a].push_back(b);
//			index.insert(a);
//		}
//		for(set<int>::iterator i=index.begin();i!=index.end();i++)
//		{
//			BFS(*i);
//			for(lol::iterator it=d.begin();it!=d.end();++it)
//				sum+=it->second;
//			d.clear();
//			visited.assign(visited.size(),false);
//		}
//		sum/=graph.size()*(graph.size()-1);
//		cout<<"Case "<<cases++<<": average length between pages = "<<fixed<<setprecision(3)<<sum<<" clicks"<<endl;
//		graph.clear();
//	}
//	return 0;
//}

