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
//int arr[6][6];
//
//bool finish()
//{
//	for (int i = 1; i <= 3; i++)
//		for (int j = 1; j <= 3; j++)
//			if (arr[i][j] == 1)
//				return false;
//	return true;
//}
//
//void f()
//{
//	int sum;
//	int tmp[6][6];
//	for (int i = 1; i <= 3; i++)
//		for (int j = 1; j <= 3; j++)
//		{
//			sum = arr[i - 1][j] + arr[i + 1][j] + arr[i][j + 1]+arr[i][j - 1];
//			sum = sum % 2;
//			tmp[i][j] = sum;
//		}
//	for(int i = 1; i <= 3; i++)
//		for (int j = 1; j <= 3; j++)
//		{
//			arr[i][j] = tmp[i][j];
//		}
//}
//
//int main()
//{
//	int t;
//	int index;
//	cin >> t;
//	while (t--)
//	{
//		index = 0;
//		memset(arr, 0, sizeof(arr));
//		for (int i = 1; i <= 3; i++)
//			for (int j = 1; j <= 3; j++)
//				scanf("%1d", &arr[i][j]);
//		if (finish())
//			cout << "-1\n";
//		else
//		{
//			while (true)
//			{
//				f();
//				if (finish())
//				{
//					cout << index << endl;
//					break;
//				}
//				index++;
//			}
//		}
//		
//	}
//	return 0;
//}