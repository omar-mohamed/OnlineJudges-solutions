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
//template<class T>
//class Disjoint_Set {
//private:
//	unordered_map<T, T> Parent;
//	unordered_map<T, int> Rank;
//
//public:
//	Disjoint_Set() {}
//	Disjoint_Set(const vector<T>& v)
//	{
//		initSet(v);
//	}
//
//	Disjoint_Set(const int& n)
//	{
//		initSet(n);
//	}
//
//	void initSet(const int& n)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			Parent[i] = i;
//			Rank[i] = 0;
//		}
//	}
//
//	void initSet(const vector<T>& v)
//	{
//		for (int i = 0; i < (int)v.size(); i++)
//		{
//			Parent[v[i]] = v[i];
//			Rank[v[i]] = 0;
//		}
//	}
//	T findSet(const T& elem)
//	{
//		if (Parent[elem] == elem)
//			return elem;
//		else
//			return findSet(Parent[elem]);
//	}
//
//	bool isSameSet(const T& elem1, const T& elem2)
//	{
//		return findSet(elem1) == findSet(elem2);
//	}
//
//	void unionSet(const T& elem1, const T& elem2)
//	{
//		T set1 = findSet(elem1);
//		T set2 = findSet(elem2);
//		if (set1 == set2)
//			return;
//		if (Rank[set1] > Rank[set2])
//			Parent[set2] = set1;
//		else if (Rank[set1] < Rank[set2])
//			Parent[set1] = set2;
//		else
//		{
//			Parent[set1] = set2;
//			Rank[set2]++;
//		}
//
//	}
//};
//
//int main()
//{
//	int t, n, node1, node2, correct, incorrect;
//	char command;
//	string s,buff;
//	cin >> t;
//	while (t--)
//	{
//		correct = incorrect=0;
//		cin >> n;
//		Disjoint_Set<int> DS(n);
//		cin.ignore();
//		while (getline(cin, s) && s != "")
//		{
//			int index = 0;
//			stringstream ss(s);
//			while (ss >> buff)
//			{
//				if (index == 0)
//					command = buff[0];
//				else if (index == 1)
//					node1 = atoi(buff.c_str());
//				else
//					node2 = atoi(buff.c_str());
//				index++;
//			}
//			if (command == 'c')
//				DS.unionSet(node1, node2);
//			else
//			{
//				if (DS.isSameSet(node1, node2))
//					correct++;
//				else
//					incorrect++;
//			}
//		}
//		cout << correct << "," << incorrect << endl;
//		if (t != 0)
//			cout << endl;
//	}
//	return 0;
//}