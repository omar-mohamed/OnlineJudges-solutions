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
//	int t,size;
//	int left , right ;
//	string s,buff;
//	cin >> t;
//	cin.ignore();
//	int cases = 1;
//	while (t--)
//	{
//		size = 0;
//		unordered_map<string, bool> vis;
//		unordered_map<string, int>	counter;
//		vector<string> arr(100005);
//		while (getline(cin, s))
//		{
//			if (s == "END")
//				break;
//			for (int i = 0; i < s.size(); i++)
//				if (!isalpha(s[i]))
//					s[i] = ' ';
//			stringstream ss(s);
//			while (ss >> buff)
//			{
//				vis[buff] = true;
//				arr[size++] = buff;
//				counter[buff] = -1;
//			}
//		}
//		int diff = size;
//		set<int> tree;
//		for (int i = 0; i < size; i++)
//		{
//			if(counter[arr[i]]>=0)
//			   tree.erase(counter[arr[i]]);
//			counter[arr[i]] = i;
//			tree.insert(i);
//			if (tree.size() == vis.size())
//			{
//				if (diff > *tree.rbegin() - *tree.begin())
//				{
//					diff = *tree.rbegin() - *tree.begin();
//					left = *tree.begin();
//					right = *tree.rbegin();
//				}
//			}
//		}
//
//		cout <<"Document "<<cases++<<": "<< left+1 << " " << right+1 << endl;
//
//	}
//	return 0;
//}