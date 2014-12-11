//#include<iostream>
//#include<string.h>
//using namespace std;
//int main()
//{
//	int r,c,tx,ty,arr[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}},counter=0,counter1=0;
//	while(cin>>r>>c)
//	{
//		counter=0,counter1=0;
//		if(r==0 && c==0)
//		break;
//		char graph[105][105]={0};
//		for(int i=0;i<r;i++)
//		{
//			for(int j=0;j<c;j++)
//				cin>>graph[i][j];
//		}
//		for(int y=0;y<r;y++)
//		{
//			counter=0;
//			for(int x=0;x<c;x++)
//			{
//				if(graph[y][x]=='*')
//				{
//					for(int u=0;u<8;u++)
//					{
//						tx=y+arr[u][0];
//						ty=x+arr[u][1];
//						if(tx>=0 &&tx<r && ty>=0 &&ty<c && graph[tx][ty]=='*')
//							counter++;
//					}
//					if(counter==0)
//						counter1++;
//				}
//			}
//		}
//		cout<<counter1<<endl;
//	}
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<utility>
//#include<map>
//#include<set>
//#include<queue>
//using namespace std;
//
//
//vector<bool> visited(10000);
//map<int,vector <int> > graph;
//int stars_count=0;
//void BFS(int start)
//{
//	queue<int> q;
//	q.push(start);
//	visited[start]=true;
//	if(graph[start].empty())
//		stars_count++;
//	while(!q.empty())
//	{
//		int v;
//		v=q.front();
//		q.pop();
//		for(int i=0;i<graph[v].size();i++)
//		{
//			if(!visited[graph[v][i]])
//			{
//				visited[graph[v][i]]=true;
//				q.push(graph[v][i]);
//			}
//		}
//	}
//}
//
//
//void up_check(int arr[][105],int row,int col,int max_col)
//{
//	if(row==0)
//		return;
//	else
//	{
//		if(arr[row-1][col]!=0)
//			graph[arr[row][col]].push_back(arr[row-1][col]);
//		if(col!=0&&arr[row-1][col-1]!=0)
//			graph[arr[row][col]].push_back(arr[row-1][col-1]);
//		if(col!=max_col-1&&arr[row-1][col+1]!=0)
//			graph[arr[row][col]].push_back(arr[row-1][col+1]);
//	}
//}
//
//void down_check(int arr[][105],int row,int col,int row_max,int max_col)
//{
//	if(row==row_max-1)
//		return;
//	else
//	{
//		if(arr[row+1][col]!=0)
//			graph[arr[row][col]].push_back(arr[row+1][col]);
//		if(col!=0&&arr[row+1][col-1])
//			graph[arr[row][col]].push_back(arr[row+1][col-1]);
//		if(col!=max_col-1&&arr[row+1][col+1]!=0)
//			graph[arr[row][col]].push_back(arr[row+1][col+1]);
//	}
//}
//
//void left_check(int arr[][105],int row,int col)
//{
//	if(col==0)
//		return;
//	else
//	{
//		if(arr[row][col-1]!=0)
//			graph[arr[row][col]].push_back(arr[row][col-1]);
//	}
//}
//
//void right_check(int arr[][105],int row,int col,int max_col)
//{
//	if(col==max_col-1)
//		return;
//	else
//	{
//		if(arr[row][col+1]!=0)
//			graph[arr[row][col]].push_back(arr[row][col+1]);
//	}
//}
//
//
//
//int main()
//{
//	int r,c;
//	while(cin>>r>>c)
//	{
//		if(r==0||c==0)
//			break;
//		visited.assign(visited.size(),false);
//		vector<int> index;
//		int arr[105][105];
//		 int ind=1;
//		 for(int i=0;i<r;i++)
//			 for(int j=0;j<c;j++)
//			 {
//				 char c;
//				 cin>>c;
//				 if(c=='*')
//				 {
//					 index.push_back(ind);
//					 arr[i][j]=ind++;
//				 }
//				 else
//					 arr[i][j]=0;
//			 }
//	     for(int i=0;i<r;i++)
//			 for(int j=0;j<c;j++)
//			 {
//				 if(arr[i][j]!=0)
//				 {
//					 graph[arr[i][j]];
//					 up_check(arr,i,j,c);
//					 down_check(arr,i,j,r,c);
//					 left_check(arr,i,j);
//					 right_check(arr,i,j,c);
//				 }
//			 }
//			 for(int i=0;i<index.size();i++)
//			 {
//				 if(!visited[index[i]])
//				 {
//					 BFS(index[i]);
//				 }
//			 }
//			 cout<<stars_count<<endl;
//			 graph.clear();
//			 stars_count=0;
//	}
//	return 0;
//}