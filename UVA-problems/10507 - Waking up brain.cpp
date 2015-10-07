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
//#include<list>
//#include <ctime>
//#include<unordered_map>
//#include<string>
//#include<set>
//#include<string.h>
//#pragma warning(disable: 4996)
//using namespace std;
//typedef long long ll;
//
//int main()
//{
//	int n,m;
//	char node1,node2;
//	int counter,rem,years;
//	bool noHope;
//	while (cin >> n)
//	{
//		bitset<257> awake;
//		vector<vector<char> > v(257);
//		cin >> m;
//		for (int i = 0; i < 3; i++)
//		{
//			cin >> node1;
//			awake[node1] = 1;
//		}
//		for (int i = 0; i < m; i++)
//		{
//			cin >> node1 >> node2;
//			v[node1].push_back(node2);
//			v[node2].push_back(node1);
//		}
//		noHope = false;
//		rem = n - 3;
//		years = 0;
//		while (rem)
//		{
//			vector<char> temp;
//			for (int i = 0; i < v.size(); i++)
//			{
//				counter = 0;
//				if (!awake[i])
//				{
//					for (int j = 0; j < v[i].size(); j++)
//					{
//						if (awake[v[i][j]])
//							counter++;
//						if (counter >= 3)
//						{
//							temp.push_back(i);
//							break;
//						}
//					}
//				}
//			}
//			if (temp.size() == 0)
//			{
//				noHope = true;
//				break;
//			}
//			for (int i = 0; i < temp.size(); i++)
//			{
//				awake[temp[i]] = 1;
//				rem--;
//			}
//			years++;
//		}
//		if (noHope)
//			cout << "THIS BRAIN NEVER WAKES UP\n";
//		else
//			cout << "WAKE UP IN, "<<years<<", YEARS\n";
//	}
//	return 0;
//}