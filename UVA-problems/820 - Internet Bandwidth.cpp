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
//#include<limits.h>
//#include<string>
//#include<string.h>
//#pragma warning(disable: 4996)
//using namespace std;
//typedef unsigned long long ll;
//
//int graph[105][105];
//vector<int> path(105);
//bitset<105> vis;
//int src, sink,pathLength;
//int n;
//int getPath(int current=src, int target=sink, int length=0,int cap=10000000)
//{
//	path[length] = current;
//	if (current == target)
//	{
//		pathLength = length + 1;
//		return cap;
//	}
//	vis[current] = 1;
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (!vis[i] && graph[current][i]>0)
//		{
//			ret=getPath(i, target, length + 1, min(cap,graph[current][i]));
//		}
//		if (ret > 0)
//			break;
//	}
//	return ret;
//}
//
//int maxFlow()
//{
//	int maxflow = 0;
//	while (true)
//	{
//		path.clear();
//		path.resize(102);
//		vis = 0;
//
//		int flow = getPath();
//		if (!flow)
//			break;
//
//		for (int i = 1; i < pathLength; i++)
//		{
//			graph[path[i - 1]][path[i]] -= flow;
//			graph[path[i]][path[i - 1]] += flow;
//		}
//		maxflow += flow;
//	}
//	return maxflow;
//}
//
//int main()
//{
//	int edges;
//	int cases = 1;
//    while(cin>>n&&n)
//    {
//		memset(graph, 0, sizeof(graph));
//		cin >> src >> sink>>edges;
//		for (int j = 0; j < edges; j++)
//		{
//			int n1, n2,w;
//			cin >> n1>>n2>>w;
//			graph[n1][n2]+= w;
//			graph[n2][n1]+= w;
//		}
//		int ans = maxFlow();
//		cout << "Network " << cases++ << endl;
//		cout << "The bandwidth is " << ans << "." << endl;
//		cout << endl;
//	}
//
//	return 0;
//}