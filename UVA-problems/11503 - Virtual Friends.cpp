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
//	unordered_map<T, int> size;
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
//		for (int i = 1; i <=n ; i++)
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
//	int unionSet(const T& elem1, const T& elem2)
//	{
//		if (Parent.find(elem1) ==Parent.end())
//		{
//			Parent[elem1] = elem1;
//			Rank[elem1] = 0;
//			size[elem1] = 1;
//		}
//		if (Parent.find(elem2) == Parent.end())
//		{
//			Parent[elem2] = elem2;
//			Rank[elem2] = 0;
//			size[elem2] = 1;
//		}
//
//		T set1 = findSet(elem1);
//		T set2 = findSet(elem2);
//
//		if (set1 == set2)
//			return size[set1];
//		if (Rank[set1] > Rank[set2])
//		{
//			Parent[set2] = set1;
//			size[set1] += size[set2];
//			return size[set1];
//		}
//		else if (Rank[set1] < Rank[set2])
//		{
//			Parent[set1] = set2;
//			size[set2] += size[set1];
//			return size[set2];
//		}
//		else
//		{
//			Parent[set1] = set2;
//			Rank[set2]++;
//			size[set2] += size[set1];
//			return size[set2];
//		}
//	}
//};
//
//int main()
//{
//	int t,n;
//	cin >> t;
//	string s, l;
//	while (t--)
//	{
//		Disjoint_Set<string> DS;
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> s >> l;
//			cout << DS.unionSet(s, l) << endl;
//		}
//	}
//	return 0;
//}