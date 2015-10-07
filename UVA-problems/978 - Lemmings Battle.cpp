//#include<iostream>
//#include<string>
//#include<math.h>
//#include<cmath>
//#include<iomanip>
//#include<stdio.h>
//#include <algorithm>
//#include<string.h>
//#include<vector>
//#include<list>
//#include<sstream>
//#include<unordered_map>
//#include<set>
//#include<utility>
//#include<map>
//#include<queue>
//#pragma warning(disable: 4996)
//using namespace std;
//
////multiset<int> heap;
////heap.insert(10);
////heap.insert(10);
////heap.insert(5);
////set<int>::iterator it= heap.end();
////it--;
////cout << *it<<" ";
////heap.erase(it);
////it = heap.end();
////it--;
////cout << *it << " ";
////heap.erase(it);
////it = heap.end();
////it--;
////cout << *it << " ";
////heap.erase(it);
////if (heap.empty())
////	cout << "empty now\n" << endl;
//int g_lemmings[100001],b_lemmings[100001];
//int main()
//{
//	int t,tmp,battles,green,blue;
//	cin >> t;
//	while (t--)
//	{
//		priority_queue<int> g, b;
//		cin >>battles>> green >> blue;
//		for (int i = 0; i < green; i++)
//		{
//			cin >> tmp;
//			g.push(tmp);
//		}
//
//		for (int i = 0; i < blue; i++)
//		{
//			cin >> tmp;
//			b.push(tmp);
//		}
//
//		while (!g.empty() && !b.empty())
//		{
//			for (int i = 0; i < battles; i++)
//			{
//				if (!g.empty() && !b.empty())
//				{
//					g_lemmings[i] = g.top();
//					g.pop();
//					b_lemmings[i] = b.top();
//					b.pop();
//				}
//				else
//				{
//					battles = i;
//					break;
//				}
//			}
//
//			for (int i = 0; i < battles; i++)
//			{
//				if (g_lemmings[i] > b_lemmings[i])
//					g.push(g_lemmings[i] - b_lemmings[i]);
//				else if(g_lemmings[i] < b_lemmings[i])
//					b.push(b_lemmings[i] - g_lemmings[i]);
//			}
//		}
//
//		if (b.empty() && g.empty())
//			cout << "green and blue died\n";
//		else if (!b.empty())
//		{
//			cout << "blue wins" << endl;
//			while (!b.empty())
//			{
//				cout << b.top() << endl;
//				b.pop();
//			}
//		}
//		else
//		{
//			cout << "green wins" << endl;
//            while(!g.empty())
//			{
//				cout << g.top() << endl;
//				g.pop();
//			}
//		}
//		if (t)
//			cout << endl;
//	}
//	return 0;
//}