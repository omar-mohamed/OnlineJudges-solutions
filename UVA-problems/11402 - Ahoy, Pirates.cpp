//#include <vector>
//#include <list>
//#include <map>
//#include <set>
//#include <deque>
//#include<queue>
//#include <stack>
//#include <bitset>
//#include <algorithm>
//#include<memory>
//#include <functional>
//#include <numeric>
//#include <utility>
//#include <sstream>
//#include <iostream>
//#include <iomanip>
//#include <cstdio>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include<unordered_map>
//#include<string>
//#include<string.h>
//#pragma warning(disable: 4996)
//using namespace std;
//typedef long long ll;
//
//const int MAX = 2548050;
//
//
//int Tree[MAX];
//
//int flag[MAX];
//
//char pirates[MAX];
//
//int setSize;
//
//
//
//void buildTree(int node,int s = 1, int e = setSize)
//{
//	if (s == e)
//		Tree[node] = pirates[s]-'0';
//	else
//	{
//		buildTree(2 * node, s, (s + e) / 2);
//		buildTree(2 * node+1, ((s + e) / 2) + 1, e);
//		Tree[node] = Tree[2 * node]+ Tree[2 * node + 1];
//	}
//}
//
//void prepare(int node,int b,int e) 
//{
//	
//	if (flag[node] == 1)
//	{
//		Tree[node] = 0;
//		if(b!=e)
//		   flag[2 * node] = flag[2 * node + 1] = 1;
//	}
//	else if (flag[node] == 2)
//	{
//		Tree[node] = e - b + 1;
//		if (b != e)
//		  flag[2 * node] = flag[2 * node + 1] = 2;
//	}
//	else
//	{
//		Tree[node] = (e - b + 1) - Tree[node];
//		flag[2 * node] = 3 - flag[2 * node];
//		flag[2 * node + 1] = 3 - flag[2 * node + 1];
//	}
//	flag[node] = 0;
//
//}
//
//void updateSegTree(int node, int i, int j,int mode,int b=1,int e= setSize)
//{
//
//	if (flag[node] != 0)
//		prepare(node, b, e);
//
//	if(i > e || j < b )
//		return ;
//	if(b >= i && e <=j)
//	{
//		flag[node] = mode;
//		prepare(node, b, e);
//	}
//	else
//	{
//		updateSegTree(2*node,i,j,mode,b,(b+e)/2);
//		updateSegTree(2*node+1,i,j,mode,(b+e)/2+1,e);
//		Tree[node]=Tree[node*2]+Tree[node*2+1];
//	}
//}
//
//int query(int node, int i, int j, int s = 1, int e = setSize)
//{
//	if (flag[node] != 0)
//		prepare(node, s, e);
//
//	if (i > e || j < s)
//		return 0;
//	if (s >= i&&e <= j)
//		return Tree[node];
//
//	int sum1 = query(2 * node, i, j, s, (s + e) / 2);
//	int sum2 = query(2 * node + 1, i, j, ((s + e) / 2) + 1, e);
//	return sum1+ sum2;
//}
//
//
//int main()
//{
//	int t,cases=1,sets,reps,q,l,r,answer;
//	string toAdd;
//	char order;
//	scanf("%d", &t);
//	while (t--)
//	{
//		answer = 1;
//		setSize = 1;
//		memset(flag, 0, sizeof(flag));
//		scanf("%d", &sets);
//		for (int i = 0; i < sets; i++)
//		{
//			scanf("%d", &reps);
//			cin >> toAdd;
//			for (int j = 0; j < reps; j++)
//				for (int k = 0; k < toAdd.size(); k++)
//					pirates[setSize++] = toAdd[k];
//		}
//		buildTree(1);
//		scanf("%d", &q);
//		printf("Case %d:\n", cases++);
//		for (int i = 0; i < q; i++)
//		{
//			cin >> order >> l >> r;
//			l++;
//			r++;
//			if (order == 'F')
//				updateSegTree(1, l, r, 2);
//			else if(order=='E')
//				updateSegTree(1, l, r, 1);
//			else if (order == 'I')
//				updateSegTree(1, l, r, 3);
//			else
//				printf("Q%d: %d\n",answer++ ,query(1, l, r));
//		}
//	}
//	return 0;
//}