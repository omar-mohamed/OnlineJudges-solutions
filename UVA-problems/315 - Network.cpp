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
//int INF = 1000000;
//
//int lowCount[1000];
//int visCount[1000];
//vector<vector<int> > graph;
//bitset<1000> vis;
//int ti;
//int articulationPoints;
//
//void DFS(int node,int parent=-1)
//{
//	vis[node] = 1;
//	visCount[node] = lowCount[node] = ti++;
//	int numOfChildren = 0;
//	bool isArticulated = false;
//	for (int i = 0; i < graph[node].size(); i++)
//	{
//		int neigh = graph[node][i];
//		if (neigh == parent)
//			continue;
//		if (!vis[neigh])
//		{
//			DFS(neigh,node);
//			if (visCount[node] <= lowCount[neigh])
//				isArticulated = true;
//			else
//			    lowCount[node] = min(lowCount[node], lowCount[neigh]);
//			numOfChildren++;
//		}
//		else
//		{
//			lowCount[node] = min(lowCount[node], visCount[neigh]);
//		}
//	}
//	if ((parent == -1 && numOfChildren >= 2) || (parent != -1 && isArticulated))
//		articulationPoints++;
//}
//
//
//int main()
//{
//	int n;
//	string line;
//	while (cin >> n&&n)
//	{
//		graph.clear();
//		articulationPoints = 0;
//		ti = 0;
//
//		memset(lowCount,0,sizeof(lowCount));
//		memset(visCount,0,sizeof(visCount));
//
//		graph.resize(n + 1);
//		vis = 0;
//		cin.ignore();
//		while (getline(cin, line))
//		{
//			if (line != "0")
//			{
//				stringstream ss(line);
//				string buff;
//				bool first = true;
//				int node;
//				while (ss >> buff)
//				{
//					if (buff == "0")
//						break;
//					if (first)
//						node = atoi(buff.c_str());
//					else
//					{
//						graph[node].push_back(atoi(buff.c_str()));
//						graph[atoi(buff.c_str())].push_back(node);
//					}
//					first = false;
//				}
//			}
//			else
//				break;
//		}
//		DFS(1);
//		cout << articulationPoints << endl;
//	}
//}