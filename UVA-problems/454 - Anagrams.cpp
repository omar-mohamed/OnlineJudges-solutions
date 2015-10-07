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
//
//int main()
//{
//	int t;
//	cin >> t;
//	string s,nospaces;
//	cin.ignore();
//	getline(cin, s);
//	while (t--)
//	{
//		vector<pair<string, string> > v;
//		while (getline(cin,s)&&s != "")
//		{
//			nospaces = "";
//			for (int i = 0; i < s.size(); i++)
//				if (s[i] != ' ')
//					nospaces += s[i];
//			sort(nospaces.begin(), nospaces.end());
//			v.push_back(make_pair(s, nospaces));
//		}
//		sort(v.begin(), v.end());
//		for (int i = 0; i < v.size(); i++)
//			for (int j = i + 1; j < v.size(); j++)
//				if (v[i].second == v[j].second)
//					cout << v[i].first << " = " << v[j].first << endl;
//		if (t > 0)
//			cout << endl;
//	}
//	return 0;
//}