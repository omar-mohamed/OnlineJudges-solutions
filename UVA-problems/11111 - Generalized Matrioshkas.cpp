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
//	ll val;
//	ll sum ;
//	string s,buff;
//	while (getline(cin, s))
//	{
//		if (s == "")
//			continue;
//		stack<ll> st;
//		stringstream ss(s);
//		bool somethingWrong = 0;
//		while (ss >> buff)
//		{
//			val = atoi(buff.c_str());
//			if (val < 0)
//				st.push(val);
//			else
//			{
//				sum = 0;
//				while (true)
//				{
//					if (st.empty())
//					{
//						somethingWrong = 1;
//						break;
//					}
//					if (st.top() < 0)
//					{
//						if (st.top() != -val)
//							somethingWrong = true;
//						st.pop();
//						st.push(val);
//						break;
//					}
//					else if (sum + st.top() >= val)
//					{
//						somethingWrong = true;
//						st.push(val);
//						break;
//					}
//					sum += st.top();
//					st.pop();
//				}
//
//			}
//			if (somethingWrong)
//				break;
//		}
//		if (somethingWrong ||st.size()!=1||st.top()<0)
//			cout << ":-( Try again.\n";
//		else
//			cout << ":-) Matrioshka!\n";
//	}
//
//	return 0;
//}