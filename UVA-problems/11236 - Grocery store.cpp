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
//	ll x,y,z,m;
//	int counter = 0;
//
//	for (x = 1; x <= 125;x++)
//		for (y = x; y <= 1600; y++)
//			for (z = y; z <= 1875; z++)
//			{
//				m = (x*y*z);
//				if (m <= 1000000)
//					continue;
//				m -= 1000000;
//				m = ((x + y + z)*1000000) / m;
//
//				if (m < z || (x+y+z) + m > 2000)
//					continue;
//
//				if (fabs((x + y + z + m)  - (x * y * z * m) / 1000000.0) < 1e-9)
//					cout << fixed << setprecision(2) << (double)x / 100.0 << " " << fixed << setprecision(2) << (double)y / 100.0 << " " << fixed << setprecision(2) << (double)z / 100.0 << " " << fixed << setprecision(2) << (double)m / 100.0 << endl;
//			}
//	return 0;
//}