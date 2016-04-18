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
//typedef long long ll;
//
//const int INF = 100000000;
//
//
//struct Node
//{
//	string lang1;
//	string lang2;
//	string word;
//
//	Node()
//	{
//		lang1 = "";
//		lang2 = "";
//		word = "";
//	}
//
//	Node(const string& l1,const string& l2,const string& w)
//	{
//		 lang1 = l1;
//		 lang2 = l2;
//		 word = w;
//	}
//
//	bool operator<(const Node& n) const
//	{
//		return word < n.word;
//	}
//};
//
//int m;
//int numberOfFinishNodes;
//string startingLang, finishLang;
//map <Node, vector<Node> >graph;
//vector<Node> nodes;
//
//int dijkstra(const vector<Node>& startingNodes)
//{
//	map<Node, int> dist;
//	map<Node, bool> fin;
//	priority_queue<pair<int, Node> > pq;
//
//	for (int i = 0; i < startingNodes.size(); i++)
//	{
//		pq.push(make_pair(startingNodes[i].word.size(),startingNodes[i]));
//		dist[startingNodes[i]] = startingNodes[i].word.size();
//	}
//	int counter = 0;
//	while (!pq.empty() && counter != numberOfFinishNodes)
//	{
//		Node current = pq.top().second;
//		pq.pop();
//		if (fin[current])
//			continue;
//		if (current.lang1 == finishLang || current.lang2 == finishLang)
//			counter++;
//		fin[current] = true;
//		for (int i = 0; i < graph[current].size(); i++)
//		{
//			Node neigh = graph[current][i];
//			if (!fin[neigh] && ((dist.find(neigh) == dist.end()) || (dist[neigh] > dist[current] + neigh.word.size())))
//			{
//				dist[neigh] = dist[current] + neigh.word.size();
//				pq.push(make_pair(-dist[neigh], neigh));
//			}
//		}
//	}
//	int mi=INF;
//	for (int i = 0; i < m; i++)
//	{
//		if (fin[nodes[i]]&&(nodes[i].lang1==finishLang||nodes[i].lang2==finishLang))
//		{
//			mi = min(dist[nodes[i]], mi);
//		}
//	}
//	if (mi == INF)
//		return -1;
//	return mi;
//}
//
//int main()
//{
////	freopen("out.txt", "w", stdout);
//	while (cin >> m&&m)
//	{
//		graph.clear();
//		cin >> startingLang >> finishLang;
//		vector<Node> startingNodes;
//		nodes.clear();
//		numberOfFinishNodes = 0;
//		for (int i = 0; i < m; i++)
//		{
//			string l1, l2, w;
//			cin >> l1 >> l2 >> w;
//			Node n(l1, l2, w);
//			if (l1 == startingLang || l2 == startingLang)
//			{
//				startingNodes.push_back(n);
//			}
//			if (l1 == finishLang || l2 == finishLang)
//				numberOfFinishNodes++;
//			graph[n];
//			for (int j = 0; j < i; j++)
//			{
//				if (nodes[j].word[0] != n.word[0]&&(nodes[j].lang1==n.lang1||nodes[j].lang1==n.lang2||nodes[j].lang2==n.lang1||nodes[j].lang2==n.lang2))
//				{
//					graph[nodes[j]].push_back(n);
//					graph[n].push_back(nodes[j]);
//				}
//			}
//			nodes.push_back(n);
//		}
//
//		int ans = dijkstra(startingNodes);
//		if (ans == 48)
//			cout << "";
//		if (ans == -1)
//			cout << "impossivel" << endl;
//		else
//			cout << ans << endl;
//	}
//}
