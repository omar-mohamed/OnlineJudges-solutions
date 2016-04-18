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
//int lock;
//int current;
//int buttonNum;
//
//vector<int> buttons;
//
//int BFS()
//{
//	current = current % 10000;
//	lock = lock % 10000;
//	vector<int> dist(10001);
//	vector<bool > vis(10001);
//	queue<int> q;
//	q.push(current);
//	vis[current] = true;
//	while (!q.empty() && !vis[lock])
//	{
//		current = q.front();
//		q.pop();
//		for (int i = 0; i < buttons.size(); i++)
//		{
//			int neigh = (buttons[i] + current) % 10000;
//
//			if (!vis[neigh])
//			{
//				vis[neigh] = true;
//				q.push(neigh);
//				dist[neigh] = dist[current] + 1;
//			}
//		}
//	}
//	if (!vis[lock])
//		return -1;
//	return dist[lock];
//}
//
//int main()
//{
//	int cases = 1;
//	while (scanf("%d%d%d",&current,&lock,&buttonNum))
//	{
//		if (lock == 0 && current == 0 && buttonNum == 0)
//			break;
//		buttons.clear();
//		buttons.resize(buttonNum);
//		for (int i = 0; i < buttonNum; i++)
//		{
//			scanf("%d", &buttons[i]);
//		}
//		printf("Case %d: ", cases++);
//		int ans= BFS();
//		if (ans == -1)
//			printf("Permanently Locked\n");
//		else
//			printf("%d\n", ans);
//	}
//}