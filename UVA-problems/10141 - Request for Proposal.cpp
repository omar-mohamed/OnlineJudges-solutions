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
//int main()
//{
//	int n, p;
//	bool first = true;
//	string s,ans;
//	int bestR,filled;
//	double minM,mon;
//	int cases = 1;
//	while (cin >> n >> p &&n>0)
//	{
//		cin.ignore();
//		bestR = 0;
//		minM = 100000000000;
//		for (int i = 0; i < n; i++)
//			getline(cin, s);
//		for (int i = 0; i < p; i++)
//		{
//			getline(cin, s);
//			cin >> mon >> filled;
//			cin.ignore();
//			if ((filled > bestR)||(filled == bestR&&mon < minM))
//			{
//				ans = s;
//				bestR = filled;
//				minM = mon;
//			}
//			for (int j = 0; j < filled; j++)
//				getline(cin, s);
//		}
//		if (!first)
//			cout << endl;
//		first = false;
//		cout << "RFP #" <<cases++<<endl ;
//		cout << ans << endl;
//	}
//	return 0;
//}