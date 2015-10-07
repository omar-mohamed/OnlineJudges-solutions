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
//
//int board[8][8]={0};
//vector<vector<int> > all;
//vector<int> curr;
//
//bool isSafe(int row,int col,int rowSize)
//{
//	for(int i=0;i<col;i++)
//	{
//		if(board[row][i]==1)
//			return false;
//	}
//
//	for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--)
//	{
//		if(board[i][j]==1)
//			return false;
//	}
//	for(int i=row+1,j=col-1;i<rowSize&&j>=0;i++,j--)
//	{
//		if(board[i][j]==1)
//			return false;
//	}
//	return true;
//}
//
//void solveQueens(int col,int rowSize,int colSize)
//{
//	if (col == colSize)
//	{
//		all.push_back(curr);
//		return;
//	}
//	for(int i=0;i<rowSize;i++)
//	{
//		if(isSafe(i,col,rowSize))
//		{
//			board[i][col]=1;
//			curr.push_back(i+1);
//			solveQueens(col+1,rowSize,colSize);
//			curr.pop_back();
//			board[i][col]=0;
//		}
//	}
//}
//
//int main()
//{
//	int arr[8],mi,tmp,cases=1;
//	solveQueens(0, 8, 8);
//	while (cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> arr[6] >> arr[7])
//	{
//		mi = 1000000000;
//		for (int i = 0; i < all.size(); i++)
//		{
//			tmp = 0;
//			for (int j = 0; j < all[i].size(); j++)
//				if (arr[j] != all[i][j])
//					++tmp;
//			if (tmp < mi)
//				mi = tmp;
//		}
//		cout <<"Case "<<cases++<<": "<< mi << endl;
//	}
//	return 0;
//}