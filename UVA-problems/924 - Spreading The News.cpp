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
//int INF = 10000000;
//vector<vector<int> > graph(2501);
//
//pair<int,int> BFS(int node)
//{
//	queue<int> q;
//	q.push(node);
//	bitset<2501> vis=0;
//	vector<int> counter(2501);
//	vector<int> dist(2501,INF);
//	dist[node] = 0;
//	vis[node] = 1;
//	int maxDay = 0;
//	int maxNumber = 0;
//	while (!q.empty())
//	{
//		node = q.front();
//		q.pop();
//		for (int k = 0; k < graph[node].size(); k++)
//		{
//			int neigh = graph[node][k];
//			if (!vis[neigh])
//			{
//				q.push(neigh);
//				dist[neigh] = dist[node] + 1;
//				counter[dist[neigh]]++;
//				vis[neigh] = 1;
//				if (counter[dist[neigh]]>maxNumber)
//				{
//					maxNumber = counter[dist[neigh]];
//					maxDay = dist[neigh];
//				}
//				else if (counter[dist[neigh]] == maxNumber&&maxDay > dist[neigh])
//				{
//					maxDay = dist[neigh];
//				}
//			}
//		}
//	}
//	return make_pair(maxNumber, maxDay);
//}
//
//
//
//int main()
//{
//	int nodes,num,node;
//	cin >> nodes;
//	for (int i = 0; i < nodes; i++)
//	{
//		cin >> num;
//		for (int j = 0; j < num; j++)
//		{
//			cin >> node;
//			graph[i].push_back(node);
//		}
//	}
//	int t;
//	cin >> t;
//	int source;
//	while (t--)
//	{
//		cin >> source;
//		if (graph[source].empty())
//			cout << "0" << endl;
//		else
//		{
//			pair<int, int> ans = BFS(source);
//			cout << ans.first<< " " << ans.second << endl;
//		}
//	}
//	return 0;
//}