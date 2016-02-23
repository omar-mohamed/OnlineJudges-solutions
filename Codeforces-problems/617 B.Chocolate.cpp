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
//
//int main()
//{
//	int n;
//	int arr[101];
//	while (cin >> n)
//	{
//		vector<int> ones;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> arr[i];
//			if (arr[i] == 1)
//				ones.push_back(i);
//		}
//		ll ans = 1;
//		if (ones.empty())
//		{
//			cout << "0" << endl;
//			continue;
//		}
//		
//		for (int i = 0; i < ones.size()-1; i++)
//		{
//			ans *= (ones[i + 1] - ones[i]);
//		}
//		cout << ans << endl;
//	}
//}