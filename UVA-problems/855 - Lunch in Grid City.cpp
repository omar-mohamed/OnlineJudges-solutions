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
//int main()
//{
//	int t,roads,avenues,friends;
//	cin >> t;
//	while (t--)
//	{
//		cin >> roads >> avenues >> friends;
//		vector<int> first(friends),second(friends);
//		for (int i = 0; i < friends; i++)
//			cin >> first[i] >> second[i];
//		sort(first.begin(), first.end());
//		sort(second.begin(), second.end());
//		if (friends % 2 == 0)
//			cout << "(Street: " << first[(friends / 2) - 1] << ", Avenue: " << second[(friends / 2) - 1] << ")\n";
//		else
//			cout << "(Street: " << first[(friends / 2)] << ", Avenue: " << second[(friends / 2)] << ")\n";
//	}
//	return 0;
//}