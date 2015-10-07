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
//int n,ma;
//vector<vector<int> > graph;
//bitset<105> blac;
//vector<int> path;
//
//bool check(int node)
//{
//	for (int i = 0; i < graph[node].size(); i++)
//		if (blac[graph[node][i]])
//			return false;
//	return true;
//}
//int test()
//{
//	int c = 0;
//	for (int i = 1; i <= n; i++)
//		if (blac[i])
//			c++;
//	return c;
//}
//
//void DFS(int node)
//{
//	if (node > n)
//	{
//      int num = test();
//		if (num > ma)
//		{
//			path.clear();
//			for (int i = 1; i <= n; i++)
//				if (blac[i])
//					path.push_back(i);
//			ma = num;
//		}
//		return;
//	}
//
//	if (check(node))
//	{
//		blac[node] = 1;
//		DFS(node + 1);
//		blac[node] = 0;
//	}
//	DFS(node + 1);
//}
//
//int main()
//{
//	int m,k,n1,n2;
//	cin >> m;
//	while (m--)
//	{
//		cin >> n>>k;
//		graph.clear();
//		graph.resize(n + 1);
//		ma = 0;
//		blac = 0;
//		path.clear();
//		for (int i = 0; i < k; i++)
//		{
//			cin >> n1 >> n2;
//			graph[n1].push_back(n2);
//			graph[n2].push_back(n1);
//		}
//		DFS(1);
//		cout << ma << endl;
//		for (int i = 0; i < path.size(); i++)
//		{
//			cout << path[i];
//			if (i != path.size() - 1)
//				cout << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}