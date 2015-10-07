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
//
//bool vis[100] = { 0 };
//
//int main()
//{
//	int n;
//	int perm;
//	vector<int> plays;
//	plays.push_back(0);
//	vis[0] = true;
//	for (int i = 1; i <= 20; i++)
//	{
//		if (!vis[i])
//		{
//			plays.push_back(i);
//			vis[i] = true;
//		}
//		if (!vis[2*i])
//		{
//			plays.push_back(2*i);
//			vis[2*i] = true;
//		}
//		if (!vis[3*i])
//		{
//			plays.push_back(3*i);
//			vis[3*i] = true;
//		}
//	}
//	if(!vis[50])
//	   plays.push_back(50);
//	while (cin >> n)
//	{
//		if (n <= 0)
//		{
//			cout << "END OF OUTPUT\n";
//			break;
//		}
//		perm = 0;
//		set<vector<int> > comb;
//		for (int i = 0; i < plays.size();i++)
//			for (int j = 0; j < plays.size(); j++)
//				for (int b = 0; b < plays.size(); b++)
//					if (plays[i] + plays[j] + plays[b] == n)
//					{
//						perm++;
//						vector<int> tmp = { plays[i] , plays[j] , plays[b] };
//						sort(tmp.begin(), tmp.end());
//						comb.insert(tmp);
//					}
//		if (perm == 0)
//			cout << "THE SCORE OF " << n << " CANNOT BE MADE WITH THREE DARTS.\n";
//		else
//		{
//			cout << "NUMBER OF COMBINATIONS THAT SCORES " << n << " IS "<<comb.size()<<".\n";
//			cout << "NUMBER OF PERMUTATIONS THAT SCORES " << n << " IS " << perm << ".\n";
//		}
//		cout << "**********************************************************************\n";
//	}
//	return 0;
//}