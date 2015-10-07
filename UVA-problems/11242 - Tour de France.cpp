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
//
//int main()
//{
//	int n, m,index;
//	double ma;
//	while (cin >> n)
//	{
//		if (n == 0)
//			break;
//		cin >> m;
//		vector<double> v(n*m),rear(m),front(n);
//		for (int i = 0; i < n; i++)
//			cin >> front[i];
//		for (int i = 0; i < m; i++)
//			cin >> rear[i];
//		index = 0;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < m; j++)
//				v[index++]=rear[j] / front[i];
//		sort(v.begin(), v.end());
//		ma = -100;
//		for (int i = 1; i < v.size(); i++)
//			if ((v[i] / v[i - 1])>ma)
//				ma = (v[i] / v[i - 1]);
//		printf("%.2lf\n", ma);
//	}
//	return 0;
//}