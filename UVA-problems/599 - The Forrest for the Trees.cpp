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
//#include<set>
//#include<string.h>
//#pragma warning(disable: 4996)
//using namespace std;
//typedef long long ll;
//
//vector<vector<char> > v(257);
//bitset<257> vis;
//
//void DFS(char node)
//{
//	vis[node] = true;
//	for (int i = 0; i < v[node].size(); i++)
//	{
//		if (!vis[v[node][i]])
//			DFS(v[node][i]);
//	}
//}
//
//int main()
//{
//	int t,trees,acorns;
//	cin >> t;
//	char tmp, node1, node2;
//	string s;
//	while (t--)
//	{
//		trees = acorns = 0;
//		v.clear();
//		vis = 0;
//		v.resize(257);
//		while (cin >> s&&s[0] != '*')
//		{
//			v[s[1]].push_back(s[3]);
//			v[s[3]].push_back(s[1]);
//		}
//		cin >> s;
//		for (int i = 0; i < s.size(); i+=2)
//		{
//			if (!vis[s[i]])
//			{
//				DFS(s[i]);
//				if (v[s[i]].size() == 0)
//					acorns++;
//				else
//					trees++;
//			}
//		}
//		cout << "There are " << trees << " tree(s) and " << acorns << " acorn(s).\n";
//	}
//	return 0;
//}