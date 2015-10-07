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
//	double well, up,ori, down,per;
//	double current;
//	int days;
//	bool succ;
//	while (cin >> well >> up >> down >> per)
//	{
//		succ = false;
//		if (well == 0)
//			break;
//		current = 0.0;
//		per /= 100.0;
//		days = 0;
//		ori = up;
//		while (current>=0)
//		{
//			days++;
//			if(up>0)
//			  current += up;
//			if (current > well)
//			{
//				succ = true;
//				break;
//			}
//			up -= ori*per;
//			current -= down;
//		}
//		if (succ)
//			cout << "success on day " << days << endl;
//		else
//			cout << "failure on day " << days << endl;
//	}
//	return 0;
//}