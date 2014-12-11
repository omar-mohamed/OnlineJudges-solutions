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
//vector<int> Mouse_d(10000);
//vector<int> cat1_d(10000);
//vector<int> cat2_d(10000);
//vector<int> targets;
//map<int,vector <int> > graph;
//
//void BFS(int start,int cases)
//{
//	vector<int> d(10000);
//	queue<int> q;
//	d[start]=0;
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
//	if(cases==1)
//		Mouse_d=d;
//	else if(cases==2)
//		cat1_d=d;
//	else
//		cat2_d=d;
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
//void Target(int arr[][105],int max_row,int max_col)
//{
//	for(int i=0;i<max_row;i++)
//	{
//		targets.push_back(arr[i][0]);
//		targets.push_back(arr[i][max_col-1]);
//	}
//
//	for(int i=0;i<max_col;i++)
//	{
//		targets.push_back(arr[0][i]);
//		targets.push_back(arr[max_row-1][i]);
//	}
//}
//
//int main()
//{
//	int r,c,queries;
//	while(cin>>r>>c)
//	{
//		if(r==0||c==0)
//			break;
//		visited.assign(visited.size(),false);
//		int arr[105][105];
//		 int ind=1;
//		 for(int i=0;i<r;i++)
//			 for(int j=0;j<c;j++)
//					 arr[i][j]=ind++;
//		
//	     for(int i=0;i<r;i++)
//			 for(int j=0;j<c;j++)
//			 {
//					 graph[arr[i][j]];
//					 up_check(arr,i,j,c);
//					 down_check(arr,i,j,r,c);
//					 left_check(arr,i,j);
//					 right_check(arr,i,j,c);
//			 }
//			 cin>>queries;
//			 Target(arr,r,c);
//			 for(int i=0;i<queries;i++)
//			 {
//				 bool test=false;
//				 int mouse_row,mouse_col,cat_row,cat_col,cat2_row,cat2_col;
//				 cin>>mouse_row>>mouse_col>>cat_row>>cat_col>>cat2_row>>cat2_col;
//				 BFS(arr[mouse_row-1][mouse_col-1],1);
//				 visited.assign(visited.size(),false);
//				 BFS(arr[cat_row-1][cat_col-1],2);
//				 visited.assign(visited.size(),false);
//				 BFS(arr[cat2_row-1][cat2_col-1],3);
//				 visited.assign(visited.size(),false);
//				  for(int i=0;i<targets.size();i++)
//			            {
//							if(Mouse_d[targets[i]]<cat1_d[targets[i]]&&Mouse_d[targets[i]]<cat2_d[targets[i]])
//							{
//								test=true;
//								break;
//							}
//			            }
//				  if(test)
//					  cout<<"YES"<<endl;
//				  else
//					  cout<<"NO"<<endl;
//			 }
//			 graph.clear();
//			 cat1_d.clear();
//			 cat2_d.clear();
//			 Mouse_d.clear();
//			 targets.clear();
//	}
//	return 0;
//}