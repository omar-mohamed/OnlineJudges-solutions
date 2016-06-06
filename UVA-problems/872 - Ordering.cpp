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
//
//ll setBit(ll bitmask, int index,int val)
//{
//	if (val == 1)
//	{
//		ll one = 1;
//		return (bitmask | (one << index));
//	}
//	else
//	{
//		ll one = 1;
//		return (bitmask &~(one << index));
//	}
//}
//
//ll getBit(ll bitmask, int index)
//{
//	return ((bitmask >> index) & 1);
//}
//
//bool printedOnce ;
//
//void backtracking(const vector<char>& nodes, const vector<vector<char> > &graph, const vector<vector<char> > &graphRev,string path,int bitmask,char currentNode)
//{
//	if (path.size()==nodes.size())
//	{
//		printedOnce = true;
//		for (int i = 0; i < path.size(); i++)
//		{
//			cout << path[i];
//			if (i != path.size() - 1)
//				cout << " ";
//		}
//		cout << endl;
//		return;
//	}
//
//	for (int i = 0; i < nodes.size(); i++)
//	{
//		if (!getBit(bitmask, i))
//		{
//
//			bool checkParent = true;
//
//			for (int j = 0; j < graphRev[nodes[i]].size(); j++)
//			{
//				char parent = graphRev[nodes[i]][j];
//				for (int k = 0; k < nodes.size(); k++)
//				{
//					if (nodes[k] == parent)
//					{
//						if (!getBit(bitmask, k))
//						{
//							checkParent = false;
//						}
//						break;
//					}
//				}
//				if (!checkParent)
//					break;
//			}
//
//			if (checkParent)
//				backtracking(nodes, graph, graphRev, path + nodes[i], setBit(bitmask, i, 1), nodes[i]);
//
//		}
//	}
//}
//
//
//
//
//int main()
//{
//	int t;
//	cin >> t;
//	cin.ignore();
//	for (int c = 0; c < t; c++)
//	{
//		vector<char> nodes;
//		vector<vector<char> > graph(300);
//		vector<vector<char> > graphRev(300);
//
//		string s;
//		getline(cin, s);
//		getline(cin, s);
//		stringstream ss(s);
//		string buf;
//
//		while (ss >> buf)
//		{
//			nodes.push_back(buf[0]);
//		}
//
//		getline(cin, s);
//		stringstream ss2(s);
//		int sets = nodes.size();
//		printedOnce = false;
//		bitset<300> nonStartingNodes=0;
//
//		while (ss2 >> buf)
//		{
//			graph[buf[0]].push_back(buf[2]);
//			graphRev[buf[2]].push_back(buf[0]);
//			nonStartingNodes[buf[2]] = 1;
//		}
//
//		sort(nodes.begin(), nodes.end());
//
//		for (int i = 0; i < nodes.size(); i++)
//		{
//			if (!nonStartingNodes[nodes[i]])
//			{
//				string path = "";
//				path += nodes[i];
//				backtracking(nodes, graph,graphRev, path, setBit(0, i, 1), nodes[i]);
//			}
//		}
//
//		if (!printedOnce)
//			cout << "NO" << endl;
//
//         if (c != t - 1)
//			cout << endl;
//	}
//}
