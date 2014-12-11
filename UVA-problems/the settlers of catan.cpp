//#include <iostream>
//#include <stdio.h>
//#include<string.h>
//#include <algorithm>
//using namespace std;
//int graph[50][50], visited[50][50];
//int dfs(int n,int vertices) {
//    int longest = 0;
//	for (int i = 0; i < vertices; i++)
//		if (graph[n][i] && !visited[n][i]) {
//			visited[n][i] = visited[i][n] = 1;
//			longest = max(longest, dfs(i,vertices) + 1);
//			visited[n][i] = visited[i][n] = 0;
//        }
//    return longest;
//}
// 
//int main() {
//	int N, M;
//    while (cin>>N>>M) {
//		if(N==0&&M==0)
//			break;
//		memset(graph, 0, sizeof graph);
//		memset(visited, 0, sizeof visited);
//        int longest = 0;
//        for (int i = 0; i < M; i++) {
//			int n1, n2;
//            cin>>n1>>n2;
//			graph[n1][n2] = graph[n2][n1] = 1;
//        }
//        for (int i = 0; i < N; i++)
//            longest = max(longest, dfs(i,N));
//		cout<<longest<<endl;
//    }
//    return 0;
//}
















//#include<iostream>
//#include<vector>
//#include<stdlib.h>
//#include<utility>
//#include<map>
//#include<queue>
//#include <string>
//using namespace std;
//map<int,vector<int > > graph; 
//map<pair<int,int>,bool> visited;
//vector<int> d(100);
//
//
//void dfs(int v,int n)
//  {
//            d[v]=n;
//			for(int u=0;u<graph[v].size();u++)
//			{
//				pair<int,int> lol,lol2;
//				lol=make_pair(v,graph[v][u]);
//				lol2=make_pair(graph[v][u],v);
//				if(!visited[lol]&&!visited[lol2])
//				{
//					visited[lol]=true;
//					visited[lol2]=true;
//					dfs(graph[v][u],n+1);
//				}
//			}
//   
// }
//
//
//int main()
//{
//	int n,m;
//	while(cin>>n>>m)
//	{
//		if(n==0&&m==0)
//			break;
//		int ans=0;
//		for(int i=0;i<m;i++)
//		{
//			int n1,n2;
//			cin>>n1>>n2;
//			graph[n1].push_back(n2);
//			graph[n2].push_back(n1);
//			visited[make_pair(n1,n2)]=false;
//			visited[make_pair(n2,n1)]=false;
//		}
//
//		for(int i=0;i<n;i++)
//		{
//			d.assign(n,0);
//			dfs(i,0);
//			for(map<pair<int,int>,bool>::iterator it=visited.begin();it!=visited.end();it++)
//				it->second=false;
//           for(int j=0;j<n;j++)
//            if(d[j]>ans)
//                 ans=d[j];
//		}
//		cout<<ans<<endl;
//		graph.clear();
//	}
//	return 0;
//}



