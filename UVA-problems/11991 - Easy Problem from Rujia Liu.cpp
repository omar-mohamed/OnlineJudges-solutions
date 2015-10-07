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
//	int n,q,tmp,k,num;
//	while (cin >> n >> q)
//	{
//		vector<vector<int > > v(1000001);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> tmp;
//			v[tmp].push_back(i + 1);
//		}
//		for (int i = 0; i < q; i++)
//		{
//			cin >> k >> num;
//			if (k-1 < v[num].size())
//				cout << v[num][k - 1] << endl;
//			else
//				cout << "0\n";
//		}
//	}
//	return 0;
//}