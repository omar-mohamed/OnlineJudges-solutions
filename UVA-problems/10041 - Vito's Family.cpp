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
//	int t,n;
//	cin >> t;
//	int arr[1000];
//	while (t--)
//	{
//		cin >> n;
//		for (int i = 0; i < n; i++)
//			cin >> arr[i];
//		sort(arr, arr + n);
//		int sum;
//		int m = 1000000000;
//		for (int i = 0; i < n; i++)
//		{
//			sum = 0;
//			for (int j = 0; j < n; j++)
//			{
//				if (i != j)
//					sum += abs(arr[i]-arr[j]);
//			}
//			if (sum < m)
//				m = sum;
//		}
//		cout << m << endl;
//	}
//	return 0;
//}