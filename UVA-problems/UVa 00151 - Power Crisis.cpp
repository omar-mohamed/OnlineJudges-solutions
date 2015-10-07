//#include<iomanip>
//#include<iostream>
//#include<algorithm>
//#include<math.h>
//#include<vector>
//#include<string.h>
//using namespace std;
//
//int addMod(int index, int n, int m, int vis[])
//{
//	while (m)
//	{
//		index++;
//		if (index > n)
//			index = 1;
//		if (!vis[index])
//			m--;
//	}
//	return index;
//}
//
//bool check(int n, int m)
//{
//	int vis[101];
//	memset(vis, 0, sizeof(vis));
//	int rem = n;
//	int index = 1;
//
//	while (true)
//	{
//		if (!vis[index])
//		{
//			vis[index] = true;
//			rem--;
//		}
//		if (index == 13 && rem > 0)
//			return false;
//		else if (index == 13 && rem == 0)
//			return true;
//		index = addMod(index, n, m, vis);
//	}
//	return false;
//}
//
//int main()
//{
//	int n, m;
//	while (cin >> n && n != 0)
//	{
//		for (int i = 1;; i++)
//		{
//			if (check(n, i))
//			{
//				cout << i << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}