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
//#include<set>
//#include<string.h>
//#pragma warning(disable: 4996)
//using namespace std;
//typedef long long ll;
//
//ll sz, p;
//int row, col;
//int rowP, colP;
//void recognize()
//{
//	if (sz*sz == p)
//		return;
//	if ((sz*sz) - (sz)+1 <= p)
//	{
//		row =p-( (sz*sz) - (sz)+1 )+1 + rowP;
//	}
//
//	else if ((sz*sz) - (2 * sz) + 2 <= p)
//	{
//		row = row - (sz)+1;
//		col= p - ((sz*sz) - (2*sz)+2) + 1 +colP;
//	}
//	else if ((sz*sz) - (3 * sz) + 3 <= p)
//	{
//		col = col - (sz)+1;
//		row = p - ((sz*sz) - (3 * sz) + 3) + 1;
//		row = (sz - row)+1 + rowP;
//	}
//	else
//	{
//		col = p - ((sz*sz) - (4 * sz) + 5) + 1;
//		col = (sz- col) + colP;
//	}
//
//}
//
//int main()
//{
//	
//	while (cin >> sz >> p&&sz != 0 && p != 0)
//	{
//		 row = sz;
//		 col = sz;
//		 rowP = colP = 0;
//		 if (p == 1)
//		 {
//			 cout << "Line = " << sz / 2 + 1 << ", column = " << sz / 2 + 1 << ".\n";
//			 continue;
//		 }
//		while ((sz-2)*(sz-2) >= p)
//		{
//			row--;
//			col--;
//			rowP++;
//			colP++;
//			sz -= 2;
//		}
//		recognize();
//		cout << "Line = " << row << ", column = " << col << ".\n";
//	}
//	return 0;
//}