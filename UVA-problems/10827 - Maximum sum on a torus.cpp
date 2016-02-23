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
//int arr[152][152];
//int n;
//
//
//int kadane(vector<int> v)
//{
//	int maximum = 0;
//	int globalMaximum = 0;
//	for (int i = 0; i<v.size(); i++)
//	{
//		maximum += v[i];
//		if (maximum < 0)
//		{
//			maximum = 0;
//			//	startIndex = i;
//		}
//		if (globalMaximum < maximum)
//			globalMaximum = maximum;
//	}
//
//	return globalMaximum;
//}
//
//int circularKadane(vector<int> v)    
//{
//	int firstRun = kadane(v);
//
//	int maxWrap = 0;
//	for (int i = 0; i < v.size(); i++)
//	{
//		maxWrap += v[i];
//		v[i] = -v[i];
//	}
//	maxWrap += kadane(v);
//
//	return max(maxWrap, firstRun);
//}
//
//
//int max2D()
//{
//	int largestSum = arr[0][0];
//	for (int l = 0; l < n;l++)
//	{
//		vector<int> tmp(n);
//		for (int r = l;;)
//		{
//			for (int row = 0; row < n; row++)
//				tmp[row] += arr[row][r];
//
//			int sum = circularKadane(tmp);
//			if (sum > largestSum)
//				largestSum = sum;
//
//			r++;
//			if (r == n)
//				r = 0;
//			if (r == l)
//				break;
//		}
//	}
//	return largestSum;
//}
//
//int main()
//{
//	int t;
//   // freopen("out.txt", "w", stdout);
//	cin >> t;
//	while(t--)
//	{
//		cin >> n;
//		bool allNegative = true;
//		int ma = -100000000;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cin >> arr[i][j];
//				if (arr[i][j]>0)
//				{
//					allNegative = false;
//				}
//				ma = max(ma, arr[i][j]);
//			}
//		}
//		if (allNegative)
//			cout << ma << endl;
//		else
//		{
//			int largest = max2D();
//			cout << largest << endl;
//		}
//	}
//	return 0;
//}