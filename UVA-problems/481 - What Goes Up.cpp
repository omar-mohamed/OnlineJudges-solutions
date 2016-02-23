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
//typedef long long ll;
//
//vector<ll> v(1000000);
//
////-3
////-4
////-2
////0
////8
////5
////1
////-1
////11
////15
////8
////4
////-1
////2
////7
////2
////7
////456
////3568
////234
////5
////234
////234523
////6
//
//vector<int> LIS(int n)
//{
//	vector<int> parent(n);
//	vector<int> IS(n+1);
//	int length = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int low = 1;
//		int high = length;
//		while (low <= high)
//		{
//			int mid = ceil((low + high) / 2);
//			if (v[IS[mid]] < v[i])
//				low = mid + 1;
//			else
//				high = mid - 1;
//		}
//		int pos = low;
//		parent[i] = IS[pos - 1];
//		IS[pos] = i;
//		length = max(length, pos);
//	}
//	int k = IS[length];
//	vector<int> vv(length);
//
//	for (int i = length-1; i >= 0; i--)
//	{
//		vv[i]=k;
//		k = parent[k];
//	}
//	cout << length << endl;
//	cout << "-" << endl;
//	return vv;
//}
//
//
////3 1 5 2 6 4 9
//int main()
//{
//	int n = 0;
//	while (cin >> v[n++]) {  }
//	vector<int> ans=LIS(n);
//	for (int i = 0; i <ans.size(); i++)
//		cout << v[ans[i]] << endl;
//	return 0;
//}