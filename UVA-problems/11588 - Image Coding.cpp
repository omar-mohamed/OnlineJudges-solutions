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
//int main()
//{
//	int t,r,c,m,n;
//	cin >> t;
//	int cases = 1;
//	char arr[25][25];
//	int counter[91];
//	int max ;
//	int ans;
//	memset(counter, 0, sizeof(counter));
//	while (t--)
//	{
//		ans = 0;
//		max = 0;
//		cin >> r >> c >> m >> n;
//		for (int i = 0; i < r; i++)
//			for (int j = 0; j < c; j++)
//			{
//				cin >> arr[i][j];
//				counter[arr[i][j]]++;
//				if (counter[arr[i][j]]>max)
//					max = counter[arr[i][j]];
//			}
//		for (int i = 0; i < r; i++)
//			for (int j = 0; j < c; j++)
//			{
//				if (counter[arr[i][j]] == max)
//				{
//					ans += counter[arr[i][j]] * m;
//					counter[arr[i][j]] = 0;
//				}
//				else if (counter[arr[i][j]] >0)
//				{
//					ans += counter[arr[i][j]] * n;
//					counter[arr[i][j]] = 0;
//				}
//			}
//		cout << "Case " << cases++ <<": "<<ans<< endl;
//	}
//	return 0;
//}