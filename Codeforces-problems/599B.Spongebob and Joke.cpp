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
//	int n, m,tmp;
//	while (cin >> n >> m)
//	{
//		bool amg = false;
//		bool imp = false;
//		vector<vector<int> > v(100001);
//		vector<int> ans;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> tmp;
//			v[tmp].push_back(i);
//		}
//
//		for (int i = 0; i < m; i++)
//		{
//			cin >> tmp;
//			if (v[tmp].empty())
//				imp = true;
//			else if (v[tmp].size()>1)
//				amg = true;
//			else
//				ans.push_back(v[tmp][0]+1);
//
//		}
//		if (imp)
//			cout << "Impossible\n";
//		else if (amg)
//			cout << "Ambiguity\n";
//		else
//		{
//			cout << "Possible\n";
//			for (int i = 0; i < ans.size(); i++)
//				cout << ans[i] << " ";
//			cout << endl;
//		}
//	}
//	return 0;
//}