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
//ll arr[1000005];
//ll inversions ;
//
//void mergeHalves(int l, int mid, int h)
//{
//	int i = l, j = mid + 1;
//	vector<ll> v(h - l + 1);
//	int index = 0;
//	while (i <= mid&&j <= h)
//	{
//		if (arr[i]<=arr[j])
//			v[index++] = arr[i++];
//		else
//		{
//			inversions += (mid - i + 1);
//			v[index++] = arr[j++];
//		}
//	}
//	while (i <= mid)
//		v[index++] = arr[i++];
//	while (j <= h)
//		v[index++] = arr[j++];
//	for (i = l, index = 0; i <= h; i++, index++)
//		arr[i] = v[index];
//}
//
//void mergeSort(int l, int h)
//{
//	if (l < h)
//	{
//		int mid = l + (h - l) / 2;
//		mergeSort(l, mid);
//		mergeSort(mid+1, h);
//		mergeHalves(l, mid, h);
//	}
//}
//
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		inversions = 0;
//		for (int i = 0; i < n; i++)
//			cin >> arr[i];
//		mergeSort(0, n - 1);
//		cout << inversions << endl;
//	}
//	return 0;
//}