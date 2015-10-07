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
//#include<list>
//#include <ctime>
//#include<unordered_map>
//#include<string>
//#include<set>
//#include<string.h>
//#pragma warning(disable: 4996)
//using namespace std;
//typedef long long ll;
//
//bool empty(const vector<list<pair<int, int> > >& v)
//{
//	for (int i = 1; i < v.size(); i++)
//		if (!v[i].empty())
//			return false;
//	return true;
//}
//
//int main()
//{
//	int n, m,nonZero,tmp,row;
//	while (cin >> n >> m)
//	{
//		vector<list<pair<int,int> > > v(n + 1);
//		
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> nonZero;
//			list<int> l;
//			vector<pair<int, int> > temp(nonZero);
//			for (int j = 0; j < nonZero; j++)
//				cin >> temp[j].first;
//			for (int j = 0; j < nonZero; j++)
//			{
//				cin >> temp[j].second;
//				v[i].push_back(temp[j]);
//			}
//		}
//
//		cout << m << " " << n << endl;
//		row = 1;
//		while (row<=m)
//		{
//			vector<pair<int, int> > temp;
//			for (int i = 1; i <= n; i++)
//			{
//				if (!v[i].empty()&&v[i].front().first==row)
//				{
//					temp.push_back(make_pair(i, v[i].front().second));
//					v[i].pop_front();
//				}
//			}
//			cout << temp.size();
//			for (int i = 0; i < temp.size(); i++)
//				cout << " " << temp[i].first;
//			cout << endl;
//			for (int i = 0; i < temp.size(); i++)
//			{
//				cout << temp[i].second;
//				if (i != temp.size() - 1)
//					cout << " ";
//			}
//			cout << endl;
//			row++;
//		}
//
//	}
//	return 0;
//}