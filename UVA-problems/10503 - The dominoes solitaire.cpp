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
//int spaces,m;
//
//struct domino {
//	int side1;
//	int side2;
//};
//domino l, r;
//vector<domino> cards;
//bitset<15> vis;
//bool solve(int rem, int last)
//{
//	if (rem == 0)
//	{
//		if (last == r.side1)
//			return true;
//		return false;
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		if (vis[i])
//			continue;
//		if (cards[i].side1 == last)
//		{
//			vis[i] = 1;
//			if (solve(rem - 1, cards[i].side2))
//				return true;
//			vis[i] = 0;
//		}
//		else if (cards[i].side2 == last)
//		{
//			vis[i] = 1;
//			if (solve(rem - 1, cards[i].side1))
//				return true;
//			vis[i] = 0;
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	while (cin >> spaces&&spaces>0)
//	{
//		cin >> m;
//		vis = 0;
//		cards.resize(m);
//		cin >> l.side1 >> l.side2>>r.side1>>r.side2;
//		for (int i = 0; i < m; i++)
//			cin >> cards[i].side1 >> cards[i].side2;
//		if (solve(spaces, l.side2))
//		   cout << "YES\n";
//		else
//			cout << "NO\n";
//	}
//	return 0;
//}