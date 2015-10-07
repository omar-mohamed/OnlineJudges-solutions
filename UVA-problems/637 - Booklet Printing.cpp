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
//struct page {
//	pair<string, string> front;
//	pair<string, string> back;
//	page()
//	{
//		front.first = front.second = back.first = back.second = "Blank";
//	}
//};
//
//int main()
//{
//	int n,num_pages;
//	int p;
//	while (cin >> n&&n>0)
//	{
//		num_pages = ceil(n / 4.0);
//		vector<page> v(n);
//		p = 1;
//		for (int i = 0; i < num_pages&&p <= n; i++)
//		{
//			v[i].front.second = to_string(p++);
//			if (p > n)
//				break;
//			v[i].back.first = to_string(p++);
//		}
//
//		for (int i = num_pages -1; i >= 0&&p<=n; i--)
//		{
//			v[i].back.second = to_string(p++);
//			if (p > n)
//				break;
//			v[i].front.first = to_string(p++);
//		}
//		cout << "Printing order for " <<n<<" pages:"<< endl;
//		for (int i = 0; i < num_pages; i++)
//		{
//			if(v[i].front.first!="Blank"||v[i].front.second != "Blank")
//			   cout << "Sheet " << i + 1 << ", front: " << v[i].front.first << ", " << v[i].front.second << endl;
//			if (v[i].back.first != "Blank"||v[i].back.second != "Blank")
//			  cout << "Sheet " << i + 1 << ", back : " << v[i].back.first << ", " << v[i].back.second << endl;
//		}
//	}
//	return 0;
//}