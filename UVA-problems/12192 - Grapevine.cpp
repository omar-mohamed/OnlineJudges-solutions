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
//int main()
//{
//	int n, m,tmp,q,l,r,ma;
//	vector<int>::iterator e;
//	while (cin >> n>>m&&n&&m)
//	{
//		vector<vector<int> > rows(n);
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < m; j++)
//			{
//				cin >> tmp;
//				rows[i].push_back(tmp);
//			}
//		cin >> q;
//		for (int i = 0; i < q; i++)
//		{
//			cin >> l >> r;
//			ma = 0;
//			vector < pair<int, int> > intervalsR(n);
//			vector < pair<int, int> > intervalsC(m);
//			for (int j = 0; j < n; j++)
//			{
//				e = upper_bound(rows[j].begin(), rows[j].end(), l-1);
//				if(e!= rows[j].end())
//				{
//					int col = e - rows[j].begin();
//					for (int k = ma; k <= min(n, m); k++)
//					{
//						if (j + k < n&&k + col < m&&rows[j + k][k + col] >= l&&rows[j + k][k + col] <= r)
//							ma++;
//						else
//							break;
//					}
//				
//				}
//			}
//			cout << ma << endl;
//		}
//		cout << "-\n";
//	}
//	return 0;
//}