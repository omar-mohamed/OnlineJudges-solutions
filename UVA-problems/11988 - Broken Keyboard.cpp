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
//	string s,ans;
//	while (cin >> s)
//	{
//		ans = "";
//		bool pushBack = 1;
//		list<string> l;
//		string tmp="";
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s[i] == '[')
//			{
//				if (pushBack)
//				{
//					l.push_back(tmp);
//				}
//				else
//					l.push_front(tmp);
//				pushBack = 0;
//				tmp = "";
//				continue;
//			}
//			else if (s[i] == ']')
//			{
//				if (pushBack)
//				{
//					l.push_back(tmp);
//				}
//				else
//					l.push_front(tmp);
//				tmp = "";
//				pushBack = 1;
//				continue;
//			}
//			tmp += s[i];
//		}
//		if (pushBack)
//		{
//			l.push_back(tmp);
//		}
//		else
//			l.push_front(tmp);
//		for (auto x : l)
//		{
//			cout << x;
//		}
//		cout << endl;
//	}
//	return 0;
//}