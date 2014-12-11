//#include<iostream>
//#include<vector>
//#include<string>
//#include<string.h>
//#include<utility>
//#include<unordered_map>
//#include<map>
//#pragma warning(disable: 4996)
//#include<set>
//#include<queue>
//using namespace std;
//map<string,vector<string> > graph;
//map<string,bool> visited;
//map<string,int> dfs_num,dfs_low;
//int counter;
//vector<string> SCC;
//int numSCC=0;
//void tarjan(string u)
//{
//	dfs_num[u]=dfs_low[u]=counter++;
//	visited[u]=true;
//	SCC.push_back(u);
//	for(int i=0;i<graph[u].size();i++)
//	{
//		string v=graph[u][i];
//		if(!dfs_num[v])
//			tarjan(v);
//		if(visited[v])
//			dfs_low[u]=min(dfs_low[v],dfs_low[u]);
//	}
//	if (dfs_low[u] == dfs_num[u]) 
//	{ 
//		while (true) 
//		{
//			string v = SCC.back(); 
//			SCC.pop_back(); 
//			visited[v] = 0;
//			cout<<v;
//			if (u == v) 
//				break;
//			cout<<", ";
//		}
//		cout<<endl;
//	}
//}
//
//
//int main()
//{
//	int n,m;
//	//freopen("lol.txt","w",stdout);
//	while(cin>>n>>m)
//	{
//		if(n==0&&m==0)
//			break;
//		if(numSCC)
//		  cout<<endl;
//		graph.clear();
//		visited.clear();
//		dfs_low.clear();
//		dfs_num.clear();
//		SCC.clear();
//		vector<string> lol;
//		counter=0;
//		for(int i=0;i<m;i++)
//		{
//			string n1,n2;
//			cin>>n1>>n2;
//			graph[n1].push_back(n2);
//			lol.push_back(n1);
//			lol.push_back(n2);
//			visited[n2]=false;
//			visited[n1]=false;
//		}
//		cout<<"Calling circles for data set "<<++numSCC<<":"<<endl;
//		for(int i=0;i<lol.size();i++)
//		{
//			if(!dfs_num[lol[i]])
//				tarjan(lol[i]);
//		}
//	}
//}