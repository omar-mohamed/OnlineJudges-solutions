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
//bool check(const vector<queue<int> > &v,const stack<int> &car)
//{
//	for (int i = 0; i < v.size(); i++)
//		if (!v[i].empty())
//			return false;
//	if (car.empty())
//		return true;
//	return false;
//}
//
//
//int main()
//{
//	int t,current,stations,capacity_car,capacity_platformB,tmp,bag,time;
//	cin >> t;
//	while (t--)
//	{
//		cin >> stations >> capacity_car >> capacity_platformB;
//		stack<int> car;
//		vector<queue<int> > v(stations);
//		for (int i = 0; i < stations; i++)
//		{
//			cin >> tmp;
//			for (int j = 0; j < tmp; j++)
//			{
//				cin >> bag;
//				v[i].push(bag);
//			}
//		}
//		current = 0;
//		time = 0;
//		bool finished;
//		while (true)
//		{
//			if (current == stations)
//				current = 0;
//			while (!car.empty())
//			{
//				if (car.top() - 1 == current)
//				{
//					car.pop();
//					time++;
//				}
//				else
//				{
//					if (v[current].size() < capacity_platformB)
//					{
//						time++;
//						v[current].push(car.top());
//						car.pop();
//					}
//					else
//						break;
//				}
//			}
//			while (!v[current].empty())
//			{
//				if (car.size() < capacity_car)
//				{
//					time++;
//					car.push(v[current].front());
//					v[current].pop();
//				}
//				else
//					break;
//			}
//			if (check(v, car))
//				break;
//			time += 2;
//			current++;
//		}
//		cout << time << endl;
//	}
//	return 0;
//}