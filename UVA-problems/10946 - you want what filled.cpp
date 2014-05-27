#include<iostream>
#include<vector>
#include<utility>
#include<map>
#include<set>
#include<stdio.h>
#include<algorithm>
#include<queue>
using namespace std;


vector<bool> visited(10000);
map<int,vector<int> > graph;
int counting=0;


struct node
{
	int count;
	char hole;
};

bool fast_sort(node n2,node n1)
{
	if(n1.count>n2.count)
		return true;
	else if(n1.count==n2.count)
	{
		if(n1.hole<n2.hole)
			return true;
	}
	return false;
}

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


void up_check(pair<char,int> arr[][105],int row,int col,int max_col,int max_row)
{
	if(row==0)
		return;
	else
	{
		if(arr[row-1][col].first==arr[row][col].first)
			graph[arr[row][col].second].push_back(arr[row-1][col].second);
	}
}

void down_check(pair<char,int> arr[][105],int row,int col,int row_max,int max_col)
{
	if(row==row_max-1)
		return;

	else
	{
		if(arr[row+1][col].first==arr[row][col].first)
			graph[arr[row][col].second].push_back(arr[row+1][col].second);
	}
}

void left_check(pair<char,int> arr[][105],int row,int col,int max_col)
{
	if(col==0)
       return;
	else
	{
		if(arr[row][col-1].first==arr[row][col].first)
			graph[arr[row][col].second].push_back(arr[row][col-1].second);
	}
}

void right_check(pair<char,int> arr[][105],int row,int col,int max_col)
{
	if(col==max_col-1)
		return;
	else
	{
		if(arr[row][col+1].first==arr[row][col].first)
			graph[arr[row][col].second].push_back(arr[row][col+1].second);
	}
}



int main()
{
	int n=1;
	int r,c;
	while(cin>>r>>c)
	{
		if(r==0&&c==0)
			break;
		visited.assign(visited.size(),false);
		pair<char,int> arr[105][105];
		char input[105][105];
		 int ind=1;
		 for(int i=0;i<r;i++)
			 for(int j=0;j<c;j++)
			 {
				 cin>>input[i][j];
				 if(input[i][j]=='.')
				 {
					arr[i][j].first='0';
				     arr[i][j].second=0;
					 visited[arr[i][j].second]=true;
				 }
				 else
				 {
				 arr[i][j].first=input[i][j];
				 arr[i][j].second=ind++;
				 }
			 }

	     for(int i=0;i<r;i++)
			 for(int j=0;j<c;j++)
			 {
				 if(arr[i][j].second!=0)
				 {
					 graph[arr[i][j].second];
					 up_check(arr,i,j,c,r);
					 down_check(arr,i,j,r,c);
					 left_check(arr,i,j,c);
					 right_check(arr,i,j,c);
				 }
			 }
			 vector<node> answer;
	     for(int i=0;i<r;i++)
			 for(int j=0;j<c;j++)
			 {
				 if(!visited[arr[i][j].second])
				 {
					 counting=0;
					 node lol;
					 lol.hole=arr[i][j].first;
					 lol.count= BFS(arr[i][j].second);	 
					 answer.push_back(lol);
				 }
			 }
			 sort(answer.begin(),answer.end(),fast_sort);
			 cout<<"Problem "<<n++<<":"<<endl;
			 for(int i=answer.size()-1;i>-1;i--)
			cout<<answer[i].hole<<" "<<answer[i].count<<endl;
			 graph.clear();
	}
	return 0;
}