
//#include<iostream>
//#include<vector>
//#include<utility>
//#include<map>
//#include<queue>
//#include<algorithm>
//using namespace std;
//map<int,vector<int> > graph;
//vector<bool> visited(30000);
//vector<vector<vector<double> > > arr;
//int BFS(int start,int target)
//{
//	int count=0;
//	queue<int> q;
//	vector<int> d(30000);
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
//	return d[target];
//}
//
//
//
//void up_check(int row,int col,int level)
//{
//	if(row!=0)
//	{
//		if(arr[level][row-1][col]!=0)
//			graph[arr[level][row][col]].push_back(arr[level][row-1][col]);
//	}
//	if(level!=0)
//	{
//		if(arr[level-1][row][col]!=0)
//			graph[arr[level][row][col]].push_back(arr[level-1][row][col]);
//	}
//}
//
//void down_check(int row,int col,int row_max,int level,int level_max)
//{
//	if(row!=row_max-1)
//	{
//		if(arr[level][row+1][col]!=0)
//			graph[arr[level][row][col]].push_back(arr[level][row+1][col]);
//	}
//	if(level!=level_max-1)
//	{
//		if(arr[level+1][row][col]!=0)
//			graph[arr[level][row][col]].push_back(arr[level+1][row][col]);
//	}
//}
//
//void left_check(int row,int col,int level)
//{
//	if(col==0)
//		return;
//	else
//	{
//		if(arr[level][row][col-1]!=0)
//			graph[arr[level][row][col]].push_back(arr[level][row][col-1]);
//	}
//}
//
//void right_check(int row,int col,int max_col,int level)
//{
//	if(col==max_col-1)
//		return;
//	else
//	{
//		if(arr[level][row][col+1]!=0)
//			graph[arr[level][row][col]].push_back(arr[level][row][col+1]);
//	}
//}
//
//
//
//
//
//
//int main()
//{
//	int l,r,c;
//	while(cin>>l>>r>>c)
//	{
//		if(r==0&&l==0&&c==0)
//			break;
//          arr.resize(l);
//          for (int i = 0; i < l; ++i) 
//		  {
//               arr[i].resize(r);
//			   for (int j = 0; j < r; ++j)
//                     arr[i][j].resize(c);
//            }
//		int start,finish;
//		int index=1;
//		for(int i=0;i<l;i++)
//		   for(int j=0;j<r;j++)
//			  for(int k=0;k<c;k++)
//			  {
//				  char f;
//				  cin>>f;
//				  if(f=='S')
//				  {
//					  start=index;
//					  arr[i][j][k]=index++;
//				  }
//				  else if(f=='E')
//				  {
//					  finish=index;
//					  arr[i][j][k]=index++;
//				  }
//				  else if(f=='#')
//					   arr[i][j][k]=0;
//				  else
//					  arr[i][j][k]=index++;
//			  }
//		for(int i=0;i<l;i++)
//		   for(int j=0;j<r;j++)
//			  for(int k=0;k<c;k++)
//			  {
//				  up_check(j,k,i);
//				  down_check(j,k,r,i,l);
//				  left_check(j,k,i);
//				  right_check(j,k,c,i);
//			  }
//			  int ans=BFS(start,finish);
//			  if(ans==0)
//				  cout<<"Trapped!"<<endl;
//			  else
//				  cout<<"Escaped in "<<ans<<" minute(s)."<<endl;
//			  graph.clear();
//			  visited.assign(visited.size(),false);
//	}
//
//	return 0;
//}

