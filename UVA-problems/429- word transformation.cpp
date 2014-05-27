#include<iostream>
#include<vector>
#include<stdlib.h>
#include<utility>
#include<map>
#include<queue>
#include<sstream>
#include<stdio.h>
#include <string>
using namespace std;
typedef map<string,bool> lol;
map<string,vector<string> > graph;
map<string,int> d;
vector<string> words;
lol visited;


int BFS(string start,string target)
{
	queue<string> q;
	q.push(start);
	d[start]=0;
	visited[start]=true;
	while(!q.empty())
	{
		string v;
		v=q.front();
		q.pop();
		for(int i=0;i<graph[v].size();i++)
		{
			if(!visited[graph[v][i]])
			{
				d[graph[v][i]]=d[v]+1;
				visited[graph[v][i]]=true;
				q.push(graph[v][i]);
			}
		}
	}
	return d[target];
}

void InitGraph()
{
	int check;
	for(int i=0;i<words.size();i++)
	{
		for(int j=0;j<words.size();j++)
		{
			check=0;
			if(words[i].size()==words[j].size())
			{
				for(int k=0;k<words[i].size();k++)
				{
					if(words[i][k]!=words[j][k])
						check++;
					if(check>1)
						break;
				}
				if(check==1)
				{
					graph[words[i]].push_back(words[j]);
					graph[words[j]].push_back(words[i]);
				}
			}
		}
	}
}


int main()
{
	int n;
	string buf;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		string k;
		while(cin>>k)
		{
			if(k=="*")
				break;
			words.push_back(k);
			visited[k]=false;
		}
		InitGraph();
		getchar();
		while(getline(cin,k))
		{
			if(k=="")
				break;
			stringstream ss(k);
			vector<string> p;
			ss<<k;
			while(ss>>buf)
				p.push_back(buf);
			cout<<p[0]<<" "<<p[1]<<" "<<BFS(p[0],p[1])<<endl;
			d.clear();
			for(lol::iterator it=visited.begin();it!=visited.end();++it)
				it->second=false;
		}
		graph.clear();
		if(i<n)
			cout<<endl;
	}
	return 0;
}