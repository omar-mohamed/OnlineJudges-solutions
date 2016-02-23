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
//int arr[205][205];
//int n, m;
//int curIndex;
//string encryption;
//
//void check(int startRow, int startCol, int endRow, int endCol)
//{
//	bool foundZero = false;
//	bool foundOne = false;
//	for (int i = startRow; i <= endRow; i++)
//	{
//		for (int j = startCol; j <= endCol; j++)
//		{
//			if (arr[i][j] == 0)
//				foundZero = true;
//			else if (arr[i][j] == 1)
//				foundOne = true;
//			if (foundOne&&foundZero)
//				break;
//		}
//		if (foundOne&&foundZero)
//			break;
//	}
//	if (foundOne&&foundZero)
//		encryption += 'D';
//	else if (foundOne)
//		encryption += '1';
//	else
//		encryption += '0';
//}
//
//void encrypt(int startRow=0, int startCol=0, int endRow=n-1, int endCol=m-1)
//{
//	check(startRow, startCol, endRow, endCol);
//	if (encryption[encryption.size() - 1] != 'D')
//		return;
//
//	int midRow = (startRow + endRow) / 2;
//	int midCol = (startCol + endCol) / 2;
//
//	if (endRow - startRow == 0)
//	{
//		encrypt(startRow, startCol, endRow, midCol);
//		encrypt(startRow, midCol+1, endRow, endCol);
//	}
//
//	else if (endCol - startCol == 0)
//	{
//		encrypt(startRow,startCol, midRow,endCol);
//		encrypt(midRow+1, startCol, endRow, endCol);
//	}
//	else
//	{
//		encrypt(startRow, startCol, midRow, midCol);
//		encrypt(startRow, midCol+1, midRow, endCol);
//		encrypt(midRow+1, startCol, endRow, midCol);
//		encrypt(midRow+1, midCol+1, endRow, endCol);
//	}
//}
//
//void fillArray(int startRow, int startCol, int endRow, int endCol,int val)
//{
//	for (int i = startRow; i <= endRow; i++)
//	{
//		for (int j = startCol; j <= endCol; j++)
//		{
//			arr[i][j] = val;
//		}
//	}
//}
//
//void decrypt(int startRow = 0, int startCol = 0, int endRow = n - 1, int endCol = m - 1)
//{
//	if (curIndex >= encryption.size())
//		return;
//	if (encryption[curIndex] != 'D')
//	{
//		fillArray(startRow, startCol, endRow, endCol,encryption[curIndex]-'0');
//		return;
//	}
//	int midRow = (startRow + endRow) / 2;
//	int midCol = (startCol + endCol) / 2;
//
//	if (endRow - startRow == 0)
//	{
//		curIndex++;
//		decrypt(startRow, startCol, endRow, midCol);
//		curIndex++;
//		decrypt(startRow, midCol + 1, endRow, endCol);
//	}
//
//	else if (endCol - startCol == 0)
//	{
//		curIndex++;
//		decrypt(startRow, startCol, midRow, endCol);
//		curIndex++;
//		decrypt(midRow + 1, startCol, endRow, endCol);
//	}
//	else
//	{
//		curIndex++;
//		decrypt(startRow, startCol, midRow, midCol);
//		curIndex++;
//		decrypt(startRow, midCol + 1, midRow, endCol);
//		curIndex++;
//		decrypt(midRow + 1, startCol, endRow, midCol);
//		curIndex++;
//		decrypt(midRow + 1, midCol + 1, endRow, endCol);
//	}
//}
//
//int main()
//{
//	char mode;
//	while (cin >> mode)
//	{
//		if (mode == '#')
//			break;
//		cin >> n >> m;
//		encryption = "";
//		curIndex = 0;
//		if (mode == 'B')
//		{
//			for (int i = 0; i < n; i++)
//				for (int j = 0; j < m; j++)
//					scanf("%1d", &arr[i][j]);
//			cout <<"D"<<setw(4)<< n <<setw(4)<< m<<endl;
//			if(n!=0&&m!=0)
//			   encrypt();
//			int counter = 0;
//			for (int i = 0; i < encryption.size(); i++)
//			{
//				cout << encryption[i];
//				counter++;
//				if (counter == 50)
//				{
//					cout << endl;
//					counter = 0;
//				}
//			}
//			if(counter!=0)
//			   cout << endl;
//		}
//		else
//		{
//			cin >> encryption;
//			if (n != 0 && m != 0)
//				decrypt();
//			cout << "B" << setw(4) << n << setw(4) << m << endl;
//			int counter = 0;
//			for (int i = 0; i < n; i++)
//				for (int j = 0; j < m; j++)
//				{
//					cout << arr[i][j];
//					counter++;
//					if (counter == 50)
//					{
//						cout << endl;
//						counter = 0;
//					}
//				}
//			if (counter != 0)
//				cout << endl;
//		}
//	}
//}