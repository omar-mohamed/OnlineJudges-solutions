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
//#include<set>
//#include<string.h>
//#pragma warning(disable: 4996)
//using namespace std;
//typedef long long ll;
//
//int n, a, b;
//
//void setABit(const int& index)
//{
//	a = a | (1 << index);
//}
//
//void setBBit(const int& index)
//{
//	b = b | (1 << index);
//}
//
//void compute()
//{
//	bool isA=true;
//	a = 0; b = 0;
//	int index = 0;
//	while (n != 0)
//	{
//		if ((n & 1) == 1)
//		{
//			if (isA)
//			{
//				setABit(index);
//				isA = false;
//			}
//			else
//			{
//				setBBit(index);
//				isA = true;
//			}
//		}
//		n = n >> 1;
//		index++;
//	}
//}
//
//int main()
//{
//	while (cin >> n&&n > 0)
//	{
//		compute();
//		cout << a << " " << b << endl;
//	}
//	return 0;
//}