//#include<iostream>
//#include<string>
//#include<iomanip>
//#include<algorithm>
//using namespace std;
//
//char board[50][50];
//bool vis[50][50] = {0};
//
//void markR(int row,int col)
//{
//	int tmpR, tmpC;
//	tmpR = row;
//	tmpC = col;
//	while (tmpR >= 20 )
//	{
//		vis[tmpR--][tmpC] = true;
//		if (board[tmpR][tmpC] != ' ')
//			break;
//	}
//
//	tmpR = row;
//	tmpC = col;
//	while (tmpR <28)
//	{
//		vis[tmpR++][tmpC] = true;
//		if (board[tmpR][tmpC] != ' ')
//			break;
//	}
//
//	tmpR = row;
//	tmpC = col;
//	while (tmpC >= 20)
//	{
//		vis[tmpR][tmpC--] = true;
//		if (board[tmpR][tmpC] != ' ')
//			break;
//	}
//
//	tmpR = row;
//	tmpC = col;
//	while (tmpC < 28)
//	{
//		vis[tmpR][tmpC++] = true;
//		if (board[tmpR][tmpC] != ' ')
//			break;
//	}
//}
//
//void markN(int row, int col)
//{
//	vis[row + 2][col + 1] = vis[row + 2][col - 1] = vis[row - 2][col - 1] = vis[row - 2][col + 1] = vis[row + 1][col - 2] = vis[row - 1][col - 2] = vis[row + 1][col + 2] = vis[row - 1][col + 2] = true;
//}
//
//void markB(int row, int col)
//{
//	int tmpR, tmpC;
//	tmpR = row;
//	tmpC = col;
//	while (tmpR >= 20 && tmpC >= 20)
//	{
//		vis[tmpR--][tmpC--] = true;
//		if (board[tmpR][tmpC] != ' ')
//			break;
//	}
//
//	tmpR = row;
//	tmpC = col;
//	while (tmpR >= 20 && tmpC < 28)
//	{
//		vis[tmpR--][tmpC++] = true;
//		if (board[tmpR][tmpC] != ' ')
//			break;
//	}
//
//	tmpR = row;
//	tmpC = col;
//	while (tmpR <28 && tmpC >= 20)
//	{
//		vis[tmpR++][tmpC--] = true;
//		if (board[tmpR][tmpC] != ' ')
//			break;
//	}
//
//	tmpR = row;
//	tmpC = col;
//	while (tmpR < 28 && tmpC < 28)
//	{
//		vis[tmpR++][tmpC++] = true;
//		if (board[tmpR][tmpC] != ' ')
//			break;
//	}
//
//}
//
//int check()
//{
//	for (int i = 20; i < 28; i++)
//		for (int j = 20; j < 28; j++)
//		{
//			if (board[i][j] == 'P')
//			{
//				vis[i - 1][j + 1] = vis[i - 1][j - 1] = true;
//			}
//
//			else if (board[i][j] == 'p')
//			{
//				vis[i + 1][j + 1] = vis[i + 1][j - 1] = true;
//			}
//			else if (board[i][j] == 'r' || board[i][j] == 'R')
//			{
//				markR(i, j);
//			}
//			else if (board[i][j] == 'n' || board[i][j] == 'N')
//			{
//				markN(i, j);
//			}
//			else if (board[i][j] == 'b'||board[i][j] == 'B')
//			{
//				markB(i, j);
//			}
//			else if (board[i][j] == 'q' || board[i][j] == 'Q')
//			{
//				markB(i, j);
//				markR(i, j);
//			}
//			else if (board[i][j] == 'k' || board[i][j] == 'K')
//			{
//				vis[i][j + 1] = vis[i][j - 1] = vis[i + 1][j] = vis[i + 1][j - 1] = vis[i + 1][j + 1] = vis[i - 1][j] = vis[i - 1][j + 1] = vis[i - 1][j - 1] = true;
//			}
//		}
//	int res = 0;
//	for (int i = 20; i < 28; i++)
//		for (int j = 20; j < 28; j++)
//		{
//			if (vis[i][j] == false && board[i][j] == ' ')
//				res++;
//		}
//	return res;
//}
//
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		int row = 20;
//		int col = 20;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (isdigit(s[i]))
//			{
//				for (int j = 0; j < s[i] - '0'; j++)
//				{
//					vis[row][col] = false;
//					board[row][col++] = ' ';
//				}
//			}
//			else if (isalpha(s[i]))
//			{
//				vis[row][col] = false;
//				board[row][col++] = s[i];
//			}
//			else
//			{
//				row++;
//				col=20;
//			}
//		}
//
//		cout<< check()<<endl;
//
//	}
//	return 0;
//}