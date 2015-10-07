//#include<iostream>
//#include<string>
//#include<math.h>
//#include<cmath>
//#include<iomanip>
//#include <algorithm>
//using namespace std;
//
//char check(char arr[][200], int r, int c)
//{
//	int a = 0;
//	if (arr[r][c + 1] == '*')
//		a++;
//	if (arr[r][c - 1] == '*')
//		a++;
//	if (arr[r + 1][c] == '*')
//		a++;
//	if (arr[r - 1][c] == '*')
//		a++;
//	if (arr[r + 1][c + 1] == '*')
//		a++;
//	if (arr[r - 1][c + 1] == '*')
//		a++;
//	if (arr[r + 1][c - 1] == '*')
//		a++;
//	if (arr[r - 1][c - 1] == '*')
//		a++;
//	return a + '0';
//}
//
//int main()
//{
//	int n, m,t=1;
//	char mines[200][200];
//	while (cin >> n >> m)
//	{
//		for (int i = 0; i < 200; i++)
//			for (int j = 0; j < 200; j++)
//			{
//				mines[i][j] = ' ';
//			}
//
//		if (n == 0 && m == 0)
//			break;
//		for (int i = 50; i < n+50; i++)
//			for (int j = 50; j < m+50; j++)
//				cin >> mines[i][j];
//		if (t > 1)
//			cout << endl;
//		cout << "Field #" << t++ << ":\n";
//		for (int i = 50; i < n + 50; i++)
//		{
//			for (int j = 50; j < m + 50; j++)
//			{
//				if (mines[i][j] != '*')
//					mines[i][j] = check(mines, i, j);
//				cout << mines[i][j];
//			}
//			cout << endl;
//		}
//
//
//	}
//	return 0;
//}