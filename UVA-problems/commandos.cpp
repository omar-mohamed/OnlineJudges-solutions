//#include<iostream>
//#include<vector>
//#include<utility>
//#include<map>
//#include<queue>
//#include<algorithm>
//using namespace std;
//map<int,vector<int> > graph;
//vector<bool> visited(10000);
//
//vector<int> BFS(int start,int vertices)
//{
//	int count=0;
//	queue<int> q;
//	vector<int> d(vertices);
//	q.push(start);
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
//		return(d);
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
//		vector<int> d1;
//		vector<int> d2;
//		vector<int> d3;
//		int n,m,start,finish;
//		cin>>n>>m;
//		for(int j=0;j<m;j++)
//		{
//			int node1,node2;
//			cin>>node1>>node2;
//			graph[node1].push_back(node2);
//			graph[node2].push_back(node1);
//		}
//		cin>>start>>finish;
//		d1=BFS(start,n);
//		visited.assign(visited.size(),false);
//		d2=BFS(finish,n);
//		for(int j=0;j<n;j++)
//			d3.push_back(d1[j]+d2[j]);
//		sort(d3.begin(),d3.end());
//		ans=d3[n-1];
//		cout<<"Case "<<i<<": "<<ans<<endl;
//		visited.assign(visited.size(),false);
//		graph.clear();
//	}
//	return 0;
//}