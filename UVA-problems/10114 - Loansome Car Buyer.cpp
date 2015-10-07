//#include<iostream>
//#include<string>
//#include<math.h>
//#include<cmath>
//#include<iomanip>
//#include<stdio.h>
//#include <algorithm>
//#include<string.h>
//#include<vector>
//#include<list>
//#include<sstream>
//#include<unordered_map>
//#include<set>
//#include<utility>
//#include<map>
//#pragma warning(disable: 4996)
//using namespace std;
//
//int main()
//{
//	double deps[105];
//	int index,begin;
//	double months, loan, price, dep,rem;
//	while (cin >> months >> loan >> price >> dep)
//	{
//		if (months < 0)
//			break;
//		for (int i = 0; i < months; i++)
//			deps[i] = 0;
//		for (int i = 0; i < dep; i++)
//		{
//			cin >> index;
//			cin >> deps[index];
//		}
//		for (int i = 0; i <= months; i++)
//		{
//			if (deps[i] == 0)
//				deps[i] = deps[i - 1];
//		}
//		begin = 0;
//		rem = price;
//		price = (loan + price)*(1.0-deps[0]);
//		loan = rem / months;
//		if (rem < price)
//		{
//			cout << "0 months\n";
//			continue;
//		}
//		else
//		{
//			while (rem >= price)
//			{
//				begin++;
//				price = price*(1.0-deps[begin]);
//				rem -= loan;
//			}
//		}
//		if (begin == 1)
//			cout << "1 month\n";
//		else
//			cout << begin << " months\n";
//	}
//	return 0;
//}