//#include<iostream>
//#include<vector>
//#include<utility>
//#include<map>
//#include<set>
//#include<queue>
//using namespace std;
//
//
//vector<bool> visited(100);
//vector<int> d(100);
//int arr[8][8];
//map<int,vector <int> > graph;
//map<char,int> dic;
//    int xMove[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
//    int yMove[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };
//
//int BFS(int start,int target)
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
//	return d[target];
//}
//
//
//void check(int row,int col)
//{
//	for(int i=0;i<8;i++)
//	{
//		if((row+xMove[i]>-1&&row+xMove[i]<8)&&(col+yMove[i]>-1&&col+yMove[i]<8))
//			graph[arr[row][col]].push_back(arr[row+xMove[i]][col+yMove[i]]);
//	}
//}
//
//
//int main()
//{
//	int r,tr,c,tc;
//	int ind=1;
//	char zZ,zZZ;
//	char temp='a';
//	for(int i=0;i<8;i++)
//		dic[temp++]=i;
//	for(int i=0;i<8;i++)
//		for(int j=0;j<8;j++)
//			arr[i][j]=ind++;
//
//	for(int i=0;i<8;i++)
//		for(int j=0;j<8;j++)
//			{
//				graph[arr[i][j]];
//				check(i,j);
//			 }
//	while(cin>>zZ>>r>>zZZ>>tr)
//	{
//		d.assign(d.size(),0);
//		r--;
//		tr--;
//		c=dic[zZ];
//		tc=dic[zZZ];
//		visited.assign(visited.size(),false);
//			 cout<<"To get from "<<zZ<<r+1<<" to "<<zZZ<<tr+1<<" takes "<<BFS(arr[r][c],arr[tr][tc])<<" knight moves."<<endl;
//	}
//	return 0;
//}