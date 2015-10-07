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
//int kadane(const vector<int>& v,const int& startRow)
//{
//	int largestSum = 0, sum = 0;
//	bool once = 0;
//	for (int i = startRow; i < v.size(); i++)
//	{
//		sum += v[i];
//		if (sum < 0)
//			sum = 0;
//		else if (largestSum < sum)
//		{
//			largestSum = sum;
//			once = true;
//		}
//	}
//	if (once)
//		return largestSum;
//	else
//	{
//		largestSum = v[startRow];
//		for (int j = startRow+1; j < v.size(); j++)
//			if (v[j]>largestSum)
//				largestSum = v[j];
//	}
//	return largestSum;
//}
//
//int max2D(const int& row,const int& col,const int& l,const int& rowStart)
//{
//	int largestSum = arr[0][0];
//	for (int i = l; i < col; i++)
//	{
//		vector<int> tmp(row);
//		for (int j = i; j < col; j++)
//		{
//			for (int k = rowStart; k < row; k++)
//				tmp[k] += arr[k][j];
//
//			int sum = kadane(tmp, rowStart);
//			if (sum > largestSum)
//				largestSum = sum;
//		}
//	}
//	return largestSum;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while(t--)
//	{
//		cin >> n;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//				cin >> arr[i][j];
//		for (int i = 0; i < n; i++)
//			for (int j = n; j < 2 * n - 1; j++)
//				arr[i][j] = arr[i][j - n];
//		for (int i = n; i < 2*n-1; i++)
//			for (int j = 0; j < 2*n-1; j++)
//				arr[i][j] = arr[i-n][j];
//		//cout << max2D(n, n, 0, 0) << endl;
//		//cout << max2D(2 * n - 1, 2 * n - 1, n - 1, n - 1);
//		cout << max2D(2*n-1, 2 * n - 1, n-1, 0);
//		//cout <<max(max2D(n, n, 0,0),max(max2D(2*n-1, n, 0,n-1), max2D(n,2*n-1,n-1,0)) ) << endl;
//	}
//	return 0;
//}