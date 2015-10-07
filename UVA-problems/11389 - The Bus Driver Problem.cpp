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
//	int n, d, r,indexD,indexN;
//	int ans ,fin;
//	while (cin >> n >> d >> r&&n&&d&&r)
//	{
//		vector<int> day(n),night(n);
//		for (int i = 0; i < n; i++)
//			cin >> day[i];
//		for (int i = 0; i < n; i++)
//			cin >> night[i];
//		sort(day.begin(), day.end());
//		sort(night.begin(), night.end());
//		indexD = 0;
//		indexN = n - 1;
//		ans = fin=0;
//		while (indexD < n)
//		{
//			ans = day[indexD++] + night[indexN--];
//			if (ans > d)
//				fin += (ans - d)*r;
//		}
//		cout << fin << endl;
//	}
//	return 0;
//}