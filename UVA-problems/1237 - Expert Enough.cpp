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
//	int t,n,q,num;
//	int counter;
//	string s;
//	scanf("%d", &t);
//	while (t--)
//	{
//		unordered_map<string, pair<int, int> > dic;
//		scanf("%d", &n);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> s;
//			scanf("%d%d", &dic[s].first, &dic[s].second);
//		}
//		scanf("%d", &q);
//		for (int i = 0; i < q; i++)
//		{
//			scanf("%d", &num);
//			counter = 0;
//			for (const auto& x : dic)
//			{
//				if (x.second.first <= num&&x.second.second >= num)
//				{
//					counter++;
//					s = x.first;
//				}
//				if (counter >= 2)
//					break;
//			}
//			if (counter == 1)
//				cout << s << endl;
//			else
//				printf("UNDETERMINED\n");
//		}
//		if (t != 0)
//			printf("\n");
//	}
//	return 0;
//}