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
//const int MAX=2000500;
//
//int Tree[MAX];
//int arr[100005];
//int n;
//
//
//void buildTree(int node,int s = 1, int e = n)
//{
//	if (s == e)
//	{
//		if(arr[s]==0)
//		   Tree[node] = 0;
//		else if(arr[s]<0)
//			Tree[node] = -1;
//		else
//			Tree[node] = 1;
//	}
//	else
//	{
//		buildTree(2 * node, s, (s + e) / 2);
//		buildTree(2 * node+1, ((s + e) / 2) + 1, e);
//		Tree[node] = Tree[2 * node] * Tree[2 * node + 1];
//	}
//}
//
//
//void update(int node,int index, int v,int s=1,int e=n)
//{
//	if (s == e)
//	{
//		if (v == 0)
//			Tree[node] = 0;
//		else if (v < 0)
//			Tree[node] = -1;
//		else
//			Tree[node] = 1;
//		return;
//	}
//	int mid = (s + e) / 2;
//	if (index <= mid)
//		update(2*node,index, v, s, mid);
//	else
//		update(2*node+1,index, v, mid+1, e);
//
//	Tree[node] = Tree[2 * node] * Tree[2 * node + 1];
//}
//
//int query(int node, int i, int j, int s = 1, int e = n)
//{
//	if (i > e || j < s)
//		return 1;
//	if (s >= i&&e <= j)
//		return Tree[node];
//	int max1 = query(2 * node, i, j, s, (s + e) / 2);
//	int max2 = query(2 * node + 1, i, j, ((s + e) / 2) + 1, e);
//	return max1* max2;
//}
//
//
//int main()
//{
//	int order,l,r,res;
//	char o;
//	while (cin >> n>>order)
//	{
//		for (int i = 1; i <= n; i++)
//			cin >> arr[i];
//		buildTree(1);
//		for (int i = 0; i < order; i++)
//		{
//			cin >> o>>l>>r;
//			if (o == 'C')
//				update(1,l, r);
//			else
//			{
//				res = query(1, l, r);
//				if (res == 0)
//					cout << "0";
//				else if (res > 0)
//					cout << "+";
//				else
//					cout << "-";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}