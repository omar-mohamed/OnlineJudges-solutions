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
//	int n;
//	string move,end;
//	while (cin >> n&&n > 0)
//	{
//		end = "+x";
//		for (int i = 0; i < n - 1; i++)
//		{
//			cin >> move;
//			if (move == "No")
//				continue;
//			if (end == "+x")
//			{
//				end = move;
//			}
//			else if (end == "+y")
//			{
//				if (move == "+y")
//					end = "-x";
//				else if (move == "-y")
//					end = "+x";
//			}
//			else if (end == "-y")
//			{
//				if (move == "+y")
//					end = "+x";
//				else if (move == "-y")
//					end = "-x";
//			}
//			else if (end == "+z")
//			{
//				if (move == "+z")
//					end = "-x";
//				else if (move == "-z")
//					end = "+x";
//			}
//			else if (end == "-z")
//			{
//				if (move == "+z")
//					end = "+x";
//				else if (move == "-z")
//					end = "-x";
//			}
//			else
//			{
//				if (move == "-y")
//					end = "+y";
//				else if (move == "+y")
//					end = "-y";
//				else if (move == "+z")
//					end = "-z";
//				else if (move == "-z")
//					end = "+z";
//			}
//		}
//		cout << end << endl;
//	}
//	return 0;
//}