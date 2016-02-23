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
//typedef long long ll;
//int INF = 1000000;
//
//int main()
//{
//	int bach[65];
//	int spouse[65];
//	int n, m,tmp,smallest,counter,cases=1;
//	while (cin >> n >> m&&n!=0&&m!=0)
//	{
//		memset(bach, 0, sizeof(bach));
//		memset(spouse, 0, sizeof(spouse));
//		smallest = INF;
//		counter = 0;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> tmp;
//			bach[tmp]++;
//		}
//		for (int i = 0; i < m; i++)
//		{
//			cin >> tmp;
//			spouse[tmp]++;
//		}
//		for (int i = 60; i >=0 ; i--)
//		{
//			for (int j = 0; j < bach[i]; j++)
//			{
//				int l=i-1, r=i+1;
//				while (true)
//				{
//					if (l < 0 && r>60)
//					{
//						counter++;
//						smallest = min(smallest, i);
//						break;
//					}
//					if (l > 0 && spouse[l]>0)
//					{
//						--spouse[l];
//						break;
//					}
//
//					if (r <= 60 && spouse[r] > 0)
//					{
//						--spouse[r];
//						break;
//					}
//					--l;
//					++r;
//				}
//			}
//		}
//		cout << "Case " << cases++ << ": " << counter;
//		if (counter > 0)
//			cout << " " << smallest << endl;
//		else
//			cout << endl;
//	}
//	return 0;
//}