//#include<iostream>
//#include<string>
//#include<math.h>
//#include<cmath>
//#include<iomanip>
//#include<stdio.h>
//#include <algorithm>
//#include<string.h>
//#include<vector>
//#pragma warning(disable: 4996)
//using namespace std;
//
//bool test(int k,int m) 
//{
//	int rem = k;
//	int index = ((m-1) % (2*k));
//	int size = 2 * k;
//	while (true)
//	{
//		if (index < k&&rem > 0)
//			return false;
//		rem--;
//		if (rem == 0)
//			return true;
//		index += (m-1);
//		index = (index%--size);
//	}
//	return false;
//}
//
//int main()
//{
//	int k;
//	int ans[2 * 14 + 1];
//	for (int i = 1; i <= 14; i++)
//		for (int j = i;; j++)
//		{
//			if (test(i, j))
//			{
//				ans[i] = j;
//				break;
//			}
//		}
//	while (cin >> k&&k!=0)
//	{
//		cout << ans[k] << endl;
//	}
//	return 0;
//}