#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int graph[205][205];
vector<int> colors(205);

bool isSafe (int v,int color,int size)
{
	for(int i=0;i<size;i++)
		if(graph[v][i]&&color==colors[i])
			return false;
	return true;
}

bool BiColor(int v,int size)
{
	if(v==size)
		return true;

		for(int c=1;c<=2;c++)
		{
			if(isSafe(v,c,size))
			{
				colors[v]=c;
				if (BiColor (v+1,size))
                    return true;
				colors[v]=0;
			}
		}
	return false;
}


int main()
{
	int nodes,edges;
	while(cin>>nodes)
	{
		colors.assign(colors.size(),false);
		if(nodes==0)
			break;
		for(int i=0;i<nodes;i++)
			for(int j=0;j<nodes;j++)
				graph[i][j]=false;
		cin>>edges;
		for(int i=0;i<edges;i++)
		{
			int row,col;
			cin>>row>>col;
			graph[row][col]=true;
			graph[col][row]=true;
		}
	if (!BiColor(0,nodes))
           cout<<"NOT BICOLORABLE."<<endl;
	else
		cout<<"BICOLORABLE."<<endl;
	}

    return 0;
}