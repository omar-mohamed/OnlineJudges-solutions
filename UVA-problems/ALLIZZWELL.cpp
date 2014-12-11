//#include<iostream>
//#include<vector>
//#include<utility>
//#include<map>
//#include<set>
//#include<queue>
//#include<string>
//using namespace std;
//
//
//vector<bool> visited(10000);
//map<int,vector <int> > graph;
//	map<int,char> check;
//	int index=1;
//string lol="ALLIZZWELL";
//
//bool DFS(int start)
//{
//	visited[start]=true;
//	if(index==10)
//	{
//		return true;
//	}
//	for(int i=0;i<graph[start].size();i++)
//	{
//		if((check[graph[start][i]]==lol[index])&&!visited[graph[start][i]])
//		{
//			index++;
//			if(DFS(graph[start][i]))
//				return true;
//			index--;
//			visited[graph[start][i]]=false;
//		}
//	}
//	return false;
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
//	int n;
//	cin>>n;
//	for(int k=0;k<n;k++)
//	{
//		cin>>r>>c;
//		visited.assign(visited.size(),false);
//		int arr[105][105];
//		 int ind=1;
//		 bool flag=false;
//		 for(int i=0;i<r;i++)
//			 for(int j=0;j<c;j++)
//			 {
//				 char c;
//				 cin>>c;
//				check[ind]=c;
//				if(c=='.')
//					arr[i][j]=0;
//				else
//				    arr[i][j]=ind++;
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
//	     for(int i=0;i<r;i++)
//		 {
//			 for(int j=0;j<c;j++)
//			 {
//				 if(check[arr[i][j]]=='A')
//				 {
//					 index=1;
//					 visited.assign(visited.size(),false);
//					if( DFS(arr[i][j]))
//					{
//						flag=true;
//						break;
//					}
//				 }
//			 }
//			 if(flag)
//				 break;
//		 }
//			 if(flag)
//				 cout<<"YES"<<endl;
//			 else
//				 cout<<"NO"<<endl;
//			 graph.clear();
//			 check.clear();
//	}
//	return 0;
//}