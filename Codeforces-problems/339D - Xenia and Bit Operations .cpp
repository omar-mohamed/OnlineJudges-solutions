#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<stdlib.h>
#include<math.h>
using namespace std;
int elem;
long long arr[131073];
long long Tree[524289],add[524289];
void buildSegTree(int node, int b,int e,bool isOr)
{
	if (b == e)
		Tree[node] = arr[b];
	else 
	{
		buildSegTree(2 * node, b, (b + e) / 2,!isOr);
		buildSegTree(2 * node + 1, (b + e) / 2 + 1, e,!isOr);
		if(isOr)
			Tree[node]=Tree[node*2]|Tree[node*2+1];
		else
			Tree[node]=Tree[node*2]^Tree[node*2+1];
	}
}



void updateSegTree(int node, long long v,bool isOr)
 {
	node += elem - 1;
	Tree[node] = v;
	while (node > 1) 
	{
		node/=2;
		if(isOr)
		    Tree[node] = Tree[node*2]| Tree[(node*2) + 1];
		else
			Tree[node] = Tree[node*2]^ Tree[(node*2) + 1];
		isOr=!isOr;
	}
}

int main()
{
	long long v;
	int m,n,index;
	while(cin>>n>>m)
	{
	    elem=pow(2,n);
		for(int i=1;i<=elem;i++)
			cin>>arr[i];
		if((n+1)%2==0)
		    buildSegTree(1,1,elem,true);
		else
			buildSegTree(1,1,elem,false);
		for(int i=0;i<m;i++)
		{
			cin>>index>>v;
			updateSegTree(index,v,true);
			cout<<Tree[1]<<endl;
		}
	}
	return 0;
}


