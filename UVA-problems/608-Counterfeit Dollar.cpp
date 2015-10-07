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
//struct coin {
//	bool even;
//	int up;
//	int down;
//	coin()
//	{
//		up = 0;
//		down = 0;
//		even = false;
//	}
//};
//
//
//int main()
//{
//	int t;
//	cin >> t;
//	string left, right, res;
//	int max;
//	bool light;
//	char ans;
//	while (t--)
//	{
//		coin arr[256];
//		for (int b = 0; b < 3; b++)
//		{
//			cin >> left >> right >> res;
//			if (res == "even")
//			{
//				for (int i = 0; i < left.size(); i++)
//				{
//					arr[left[i]].even = true;
//					arr[right[i]].even = true;
//				}
//
//			}
//			else if (res == "up")
//			{
//				for (int i = 0; i < left.size(); i++)
//				{
//					if (!arr[left[i]].even)
//						arr[left[i]].down++;
//					if (!arr[right[i]].even)
//						arr[right[i]].up++;
//				}
//			}
//
//			else
//			{
//				for (int i = 0; i < left.size(); i++)
//				{
//					if (!arr[left[i]].even)
//						arr[left[i]].up++;
//					if (!arr[right[i]].even)
//						arr[right[i]].down++;
//				}
//
//			}
//		}
//		max = -1;
//	    light = false;
//		ans;
//		for (char i = 'A'; i <= 'L'; i++)
//		{
//			if (!arr[i].even)
//			{
//				if (arr[i].down > max)
//				{
//					max = arr[i].down;
//					light = false;
//					ans = i;
//				}
//				if (arr[i].up > max)
//				{
//					max = arr[i].up;
//					light = true;
//					ans = i;
//				}
//			}
//		}
//		if (light)
//			cout << ans << " is the counterfeit coin and it is light.\n";
//		else
//			cout << ans << " is the counterfeit coin and it is heavy.\n";
//	}
//	return 0;
//}