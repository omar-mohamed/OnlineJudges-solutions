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
//
//
//vector<vector<int> > subsets;
//vector<pair<vector<int> ,int> > inters;
//vector<int> ans;
//int arr[21];
//int n, k;
//vector<int> s;
//void generate(int index=0)
//{
//	if (s.size()==k)
//	{
//		subsets.push_back(s);
//		return;
//	}
//	if (index == n)
//		return;
//
//	s.push_back(index);
//	generate(index + 1);
//	s.pop_back();
//
//	generate(index + 1);
//}
//
//int getMax()
//{
//	unordered_map<int,bool> tmp;
//	int max = 0,cur;
//	int sz;
//	for (int i = 0; i < subsets.size(); i++)
//	{
//		cur = 0;
//		tmp.clear();
//		for (int j = 0; j < subsets[i].size(); j++)
//		{
//			cur += arr[subsets[i][j]];
//			tmp[subsets[i][j]] = true;
//		}
//
//		for (int j = 0; j < inters.size(); j++)
//		{
//			sz = 0;
//			for (int l = 0; l < inters[j].first.size(); l++)
//			{
//				if (tmp[inters[j].first[l]])
//					sz++;
//			}
//			if (sz)
//				cur -= (inters[j].second)*(sz-1);
//		}
//		if (cur > max)
//		{
//			max = cur;
//			ans = subsets[i];
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	int t,m,cases=1;
//	vector<int> tmp;
//	while (cin >> n >> k)
//	{
//		if (n == 0 && k == 0)
//			break;
//		subsets.clear();
//		s.clear();
//		for (int i = 0; i < n; i++)
//			cin >> arr[i];
//		cin >> t;
//		inters.resize(t);
//		for (int i = 0; i < t; i++)
//		{
//			cin >> m;
//			tmp.resize(m);
//			for (int j = 0; j < m; j++)
//			{
//				cin >> tmp[j];
//				--tmp[j];
//			}
//			cin >> m;
//			inters[i] = make_pair(tmp, m);
//		}
//		generate();
//		cout << "Case Number  " << cases++ << endl;
//		cout << "Number of Customers: " << getMax() << endl;
//		cout << "Locations recommended: ";
//		for (int i = 0; i < ans.size(); i++)
//		{
//			cout << ans[i]+1;
//			if (i != ans.size() - 1)
//				cout << " ";
//		}
//		cout << endl<<endl;
//	}
//	return 0;
//}