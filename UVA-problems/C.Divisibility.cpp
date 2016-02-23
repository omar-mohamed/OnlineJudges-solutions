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
//#include<limits.h>
//#include<string>
//#include<string.h>
//#pragma warning(disable: 4996)
//using namespace std;
//typedef long long ll;
//
//int main()
//{
//	ll k, a, b,tmpA;
//	
//	while (cin >> k >> a >> b)
//	{
//		if (a < 0 && b < 0)
//		{
//			swap(a, b);
//			a = -a;
//			b = -b;
//		}
//		b /= k;
//		tmpA = a / k;
//		if (tmpA*k != a)
//		{
//			if (a < 0)
//			{
//				a = tmpA - 1;
//				cout << b - a<< endl;
//			}
//			else
//			{
//				a = tmpA + 1;
//				cout << b - a + 1 << endl;
//			}
//		}
//		else 
//		{
//			a = tmpA;
//			cout << b - a + 1 << endl;
//		}
//	}
//}