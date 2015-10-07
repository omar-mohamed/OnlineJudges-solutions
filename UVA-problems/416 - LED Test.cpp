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
//int n;
//
//int digit[10] = { 0x7E, 0x30, 0x6D, 0x79, 0x33, 0x5B, 0x5F, 0x70, 0x7F, 0x7B };
//vector<int> v;
//
//void setBit(int& n,const int& index,const int& value)
//{
//	if(value==1)
//		n= n | (1<<index);
//	else
//		n= n &~(1<<index);
//}
//
//
//bool match;
//void solve(int index, int counter, int bad)
//{
//	if (index == n)
//	{
//		match = true;
//		return;
//	}
//	if ((bad&v[index]) == 0)
//	{
//		if (((v[index] ^ digit[counter])&v[index]) == 0)
//			solve(index + 1, counter - 1, bad | (v[index] ^ digit[counter]));
//	}
//}
//
//
//
//int main()
//{
//	char tmp;
//	int num ,index;
//	while (cin >> n&&n > 0)
//	{
//		v.resize(n);
//		for (int i = 0; i < n; i++)
//		{
//			num = 0;
//			index = 6;
//			for (int j = 0; j < 7; j++)
//			{
//				cin >> tmp;
//				if (tmp == 'Y')
//					setBit(num, index, 1);
//				--index;
//			}
//			v[i] = num;
//		}
//		match = false;
//		for (int i = 9; i >= n-1; i--)
//		{
//			solve(0, i, 0);
//			if (match)
//				break;
//		}
//		if (match)
//			cout << "MATCH\n";
//		else
//			cout << "MISMATCH\n";
//	}
//	return 0;
//}