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
//vector<vector<int> > alpha;
//int main()
//{
//	int q,index,first;
//	string s;
//	bool matched;
//	vector<int>::iterator up;
//	while (cin >> s)
//	{
//		alpha.clear();
//		alpha.resize(58);
//		cin >> q;
//		for (int i = 0; i < s.size(); i++)
//			alpha[s[i] - 'A'].push_back(i);
//		for (int i = 0; i < q; i++)
//		{
//			index = -1;
//			matched = true;
//			cin >> s;
//			for (int j = 0; j < s.size(); j++)
//			{
//				up = upper_bound(alpha[s[j]- 'A'].begin(), alpha[s[j] - 'A'].end(), index);
//				if (up == alpha[s[j] - 'A'].end())
//				{
//					matched = false;
//					break;
//				}
//				index = *up;
//				if (j == 0)
//					first = index;
//			}
//			if (!matched)
//				cout << "Not matched\n";
//			else
//				cout << "Matched " << first << " " << index << endl;
//		}
//	}
//	return 0;
//}