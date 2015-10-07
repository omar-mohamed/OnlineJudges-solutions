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
//int main()
//{
//	int c,n,t,m,tmp;
//	string s;
//	cin >> c;
//	while (c--)
//	{
//		queue<int> left, right;
//		map<pair<int, bool>, int> dic;
//		//stack<int> ferry;
//		cin >> n >> t >> m;
//		vector<pair<int, bool> > v(m);
//		for (int i = 0; i < m; i++)
//		{
//			cin >> tmp >> s;
//			if (s == "left")
//			{
//				left.push(tmp);
//				v[i] = make_pair(tmp, 1);
//			}
//			else
//			{
//				right.push(tmp);
//				v[i] = make_pair(tmp, 0);
//			}
//		}
//		int time = 0;
//		bool isLeft = 1;
//		int counter = 0;
//		bool tookAny = 0;
//		while (!left.empty() || !right.empty())
//		{
//			tookAny = 0;
//			counter = 0;
//			if (isLeft)
//			{
//				while (!left.empty() && counter < n&&left.front() <= time)
//				{
//					dic[make_pair(left.front(), 1)] = time + t;
//					left.pop();
//					tookAny = 1;
//					counter++;
//				}
//				if (tookAny || (!right.empty() && right.front() <= time))
//				{
//					time += t;
//					isLeft = 0;
//					continue;
//				}
//			}
//			else
//			{
//				while (!right.empty() && counter < n&&right.front() <= time)
//				{
//					dic[make_pair(right.front(), 0)] = time + t;
//					right.pop();
//					tookAny = 1;
//					counter++;
//				}
//				if (tookAny || (!left.empty() && left.front() <= time))
//				{
//					time += t;
//					isLeft = 1;
//					continue;
//				}
//			}
//			time++;
//		}
//		for (int i = 0; i < m; i++)
//			cout << dic[v[i]] << endl;
//		if (c != 0)
//			cout << endl;
//	}
//	return 0;
//}