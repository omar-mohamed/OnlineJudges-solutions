#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<stdlib.h>
#include<math.h>
using namespace std;

int arr[200003],n;
int Tree[500003],add[500003];
void buildSegTree(int node, int b, int e)
{
	if (b == e)
		Tree[node] = arr[b];
	else 
	{
		buildSegTree(2 * node, b, (b + e) / 2);
		buildSegTree(2 * node + 1, (b + e) / 2 + 1, e);
		Tree[node] = min(Tree[2 * node], Tree[2 * node + 1]);
	}
}

void prepare(int node, int b, int e) 
{
	int mid=(b+e)/2;
	add[2 * node] += add[node];
	add[2 * node + 1] += add[node];
	Tree[2 * node] += add[node];
	Tree[2 * node + 1] +=add[node];
	add[node] = 0;
}

void updateSegTree(int node, int b, int e, int i, int j,int c) 
{
	if(i > e || j < b )
		return ;
	if(b >= i && e <=j)
	{
		Tree[node]+= c;
		add[node] += c;
	}
	else
	{
		prepare(node,b,e);
		updateSegTree(2*node,b,(b+e)/2,i,j,c);
		updateSegTree(2*node+1,(b+e)/2+1,e,i,j,c);
		Tree[node]=min(Tree[node*2],Tree[node*2+1]);
	}
}



int query(int node, int b, int e, int i, int j) {
	if (i > e || j < b)
		return 1000000000;
	if (b >= i && e <= j)
		return Tree[node];
	prepare(node, b, e);
	int p1 = query(2 * node, b, (b + e) / 2, i, j);
	int p2 = query(2 * node + 1, (b + e) / 2 + 1, e, i, j);
	return min(p1, p2);
}

int main()
{
	int n,q;
	string s,sub;
	vector<int> range;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
			cin>>arr[i];
		buildSegTree(1,1,n);
		cin>>q;
		cin.ignore();
		for(int i=0;i<q;i++)
		{
			getline(cin,s);
			istringstream iss(s);
			while (iss>>sub)
			{
				range.push_back(atoi(sub.c_str()));
			} 
			range[0]++;
			range[1]++;
			if(range.size()==3)
			{
				
				if(range[0]>range[1])
				{
					updateSegTree(1,1,n,range[0],n,range[2]);
					updateSegTree(1,1,n,1,range[1],range[2]);
				}
				else
					updateSegTree(1,1,n,range[0],range[1],range[2]);
			}
			else
			{
				if(range[0]>range[1])
					cout<<min(query(1,1,n,range[0],n),query(1,1,n,1,range[1]))<<endl;
				else
					cout<<query(1,1,n,range[0],range[1])<<endl;
			}
			range.clear();
		}
	}
	return 0;
}