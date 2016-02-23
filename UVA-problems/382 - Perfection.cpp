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
//typedef unsigned long long ll;
//
//void div(int x)
//{
//	int sum = 1;
//	int i;
//	for (i = 2; i*i < x; i++)
//	{
//		if (x%i == 0)
//		{
//			sum += x / i;
//			sum += i;
//		}
//	}
//	if (i*i == x)
//		sum += i;
//	if (sum == x)
//		cout << setw(5) << x << "  PERFECT" << endl;
//	else if(sum<x)
//		cout << setw(5) << x << "  DEFICIENT" << endl;
//	else
//		cout << setw(5) << x << "  ABUNDANT" << endl;
//}
//
//int main()
//{
//	//freopen("out.txt", "w", stdout);
//	string input;
//	cout << "PERFECTION OUTPUT" << endl;
//	while (getline(cin, input))
//	{
//		stringstream ss(input);
//		string buff = "";
//		
//		while (ss >> buff)
//		{
//			int x = atoi(buff.c_str());
//			if (x == 0)
//				break;
//			else if (x == 1)
//				cout << setw(5) << x << "  DEFICIENT" << endl;
//			else
//				div(x);
//		}
//	}
//	cout << "END OF OUTPUT" << endl;
//}