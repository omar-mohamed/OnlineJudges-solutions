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
//int n;
//int nSums[1 << 15];
//int values[1 << 15];
//
//int flipBit(const int& bitmask,const int& index)
//{
//	return bitmask ^ (1<<index);
//}
//
//void calculatenSums(vector<vector<int> >& neighbours, const int& bitmask)
//{
//	int neighbor;
//	nSums[bitmask] = 0;
//	for (int i = 0; i < n; i++)
//	{
//		neighbor = flipBit(bitmask, i);
//		neighbours[bitmask].push_back(neighbor);
//		nSums[bitmask] += values[neighbor];
//	}
//}
//
//int main()
//{
//	int tmp,maxi;
//	while (cin >> n)
//	{
//		maxi = 0;
//		vector<vector<int> > neighbours(1<<n);
//		for (int i = 0; i < (1 << n); i++)
//			cin >> values[i];
//		for (int i = 0; i < (1 << n); i++)
//		{
//			calculatenSums(neighbours, i);
//		}
//		for (int i = 0; i < neighbours.size(); i++)
//		{
//			for (int j = 0; j < neighbours[i].size(); j++)
//			{
//				if (nSums[i] + nSums[neighbours[i][j]]>maxi)
//					maxi = nSums[i] + nSums[neighbours[i][j]];
//			}
//		}
//		cout << maxi << endl;
//	}
//	return 0;
//}