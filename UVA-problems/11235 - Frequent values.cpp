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
//int arr[100001];
//int n;
//unordered_map<int, int> freq;
//void buildTree(int node,int s = 1, int e = n)
//{
//	if (s == e)
//		Tree[node] =freq[arr[s]];
//	else
//	{
//		buildTree(2 * node, s, (s + e) / 2);
//		buildTree(2 * node+1, ((s + e) / 2) + 1, e);
//		Tree[node] = max(Tree[2 * node], Tree[2 * node + 1]);
//	}
//}
//
//int query(int node, int i, int j, int s = 1, int e = n)
//{
//	if (i > e || j < s)
//		return 0;
//	if (s >= i&&e <= j)
//		return Tree[node];
//	int max1 = query(2 * node, i, j, s, (s + e) / 2);
//	int max2 = query(2 * node + 1, i, j, ((s + e) / 2) + 1, e);
//	return max(max1, max2);
//}
//
//
//int main()
//{
//	int last,q,l,r,first;
//	while (cin >> n)
//	{
//		if (n == 0)
//			break;
//		cin >> q;
//		freq.clear();
//		unordered_map<int, int> start;
//		cin >> arr[1];
//		last = arr[1];
//		start[last] = 1;
//		freq[last] = 1;
//		for (int i = 2; i <= n; i++)
//		{
//			cin >> arr[i];
//			if (arr[i] != last)
//			{
//				start[arr[i]] = i;
//				freq[arr[i]] = 1;
//				last = arr[i];
//			}
//			else
//				freq[arr[i]]++;
//		}
//		buildTree(1);
//		for (int i = 1; i <= q; i++)
//		{
//			cin >> l >> r;
//			if (arr[l] == arr[r])
//				cout << r-l+1<<endl;
//			else
//			{
//				first = (start[arr[l]] + freq[arr[l]]) - l;
//				last = r - start[arr[r]]+1;
//				if (first + last == r - l + 1)
//					cout << max(first, last) << endl;
//				else
//				   cout << max(first, max(last, query(1, (start[arr[l]] + freq[arr[l]]),start[arr[r]]-1)))<<endl;
//			}
//		}
//	}
//	return 0;
//}