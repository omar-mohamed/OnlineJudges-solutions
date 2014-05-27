#include<iostream>
#include<vector>
#include<utility>
#include<map>
#include<set>
#include<stdio.h>
#include<queue>
using namespace std;


vector<bool> visited(10000);
map<int,vector <int> > graph;
bool first=true;
int counting=0;
int BFS(int start)
{
	queue<int> q;
	q.push(start);
	visited[start]=true;
	while(!q.empty())
	{
		int v;
		v=q.front();
		q.pop();
		counting++;
		for(int i=0;i<graph[v].size();i++)
		{
			if(!visited[graph[v][i]])
			{
				visited[graph[v][i]]=true;
				q.push(graph[v][i]);
			}
		}
	}
	return counting;
}


void up_check(int arr[][105],int row,int col,int max_col,int max_row)
{
	if(row==0)
		return;
	else
	{
		if(arr[row-1][col]!=0)
			graph[arr[row][col]].push_back(arr[row-1][col]);
	}
}

void down_check(int arr[][105],int row,int col,int row_max,int max_col)
{
	if(row==row_max-1)
		return;

	else
	{
		if(arr[row+1][col]!=0)
			graph[arr[row][col]].push_back(arr[row+1][col]);
	}
}

void left_check(int arr[][105],int row,int col,int max_col)
{
	if(col==0)
	{
		if(arr[row][max_col-1]!=0)
			graph[arr[row][0]].push_back(arr[row][max_col-1]);
	}
	else
	{
		if(arr[row][col-1]!=0)
			graph[arr[row][col]].push_back(arr[row][col-1]);
	}
}

void right_check(int arr[][105],int row,int col,int max_col)
{
	if(col==max_col-1)
	{
		if(arr[row][0]!=0)
			graph[arr[row][max_col-1]].push_back(arr[row][0]);
	}
	else
	{
		if(arr[row][col+1]!=0)
			graph[arr[row][col]].push_back(arr[row][col+1]);
	}
}



int main()
{
	int r,c;
	while(cin>>r>>c)
	{
		if(r==0||c==0)
			break;
		visited.assign(visited.size(),false);
		int arr[105][105];
		char input[105][105];
		 int ind=1;
		 for(int i=0;i<r;i++)
			 for(int j=0;j<c;j++)
				 cin>>input[i][j];
		 int cur_x,cur_y;
		 cin>>cur_x>>cur_y;
		 for(int i=0;i<r;i++)
			 for(int j=0;j<c;j++)
			 {
				 if(input[i][j]==input[cur_x][cur_y])
				 {
					 arr[i][j]=ind++;
				 }
				 else
					 arr[i][j]=0;
			 }
	     for(int i=0;i<r;i++)
			 for(int j=0;j<c;j++)
			 {
				 if(arr[i][j]!=0)
				 {
					 graph[arr[i][j]];
					 up_check(arr,i,j,c,r);
					 down_check(arr,i,j,r,c);
					 left_check(arr,i,j,c);
					 right_check(arr,i,j,c);
				 }
			 }
			 BFS(arr[cur_x][cur_y]);
			 set<int> ans;
			 for(int i=1;i<=graph.size();i++)
			 {
				 if(!visited[i])
				 {
					 counting=0;
					 ans.insert(BFS(i));
				 }
			 }
			 set<int>::iterator it=ans.end();
			 if(!ans.empty())
			 {
			 it--;
			 cout<<*it<<endl;
			 }
			 else
				 cout<<"0"<<endl;
			 graph.clear();
	}
	return 0;
}