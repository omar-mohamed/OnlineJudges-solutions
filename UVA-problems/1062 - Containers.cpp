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
//
//
//int main()
//{
//	string s;
//	int cases = 1;
//	int min,index;
//	while (cin >> s&&s!="end")
//	{
//		vector<stack<char> > v;
//		for (int i = 0; i < s.size(); i++)
//		{
//			min = 10000000;
//			index = -1;
//			for (int j = 0; j < v.size(); j++)
//			{
//				if (!v[j].empty() && v[j].top() >= s[i])
//				{
//					if(v[j].top()-s[i]<min)
//					{
//						min = v[j].top() - s[i];
//						index = j;
//					}
//				}
//			}
//			if (index == -1)
//			{
//				stack<char> st;
//				st.push(s[i]);
//				v.push_back(st);
//			}
//			else
//				v[index].push(s[i]);
//		}
//		cout << "Case " << cases++ << ": " << v.size() << endl;
//	}
//	return 0;
//}