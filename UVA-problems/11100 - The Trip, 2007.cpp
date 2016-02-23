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
////
////10
////1 2 2 2 3 3 3 3 3 4
//
//
//bool weirdSort(vector<ll> v2, vector<ll> v1)
//{
//	return v2.size() < v1.size();
//}
////12
////1 2 3 4 5 6 7 7 7 99 99 99
//int main()
//{
//	int n;
//	ll tmp;
//	bool first = true;
//	while (cin >> n&&n != 0)
//	{
//		map<ll, queue<vector<ll> > > freq;
//		vector<ll> dimensions;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> tmp;
//			dimensions.push_back(tmp);
//			freq[tmp].push(vector<ll>());
//		}
//		sort(dimensions.begin(), dimensions.end());
//		int smallest = freq.begin()->first;
//		queue<ll> smallestQueue;
//		unordered_map<ll, bool> vis;
//		int ans = n;
//		for (auto& x : freq)
//		{
//			if (x.first > smallest)
//			{
//				if (!vis[x.first])
//				{
//					smallestQueue.push(x.first);
//					vis[x.first] = true;
//				}
//				for (int i = 0; i < x.second.size(); i++)
//				{
//					--ans;
//					vector<ll> children = x.second.front();
//					x.second.pop();
//					vector<ll> toBeAdded = freq[smallest].front();
//					freq[smallest].pop();
//					for (int i = 0; i < toBeAdded.size(); i++)
//					{
//						children.push_back(toBeAdded[i]);
//					}
//					children.push_back(smallest);
//					x.second.push(children);
//
//					if (freq[smallest].empty())
//					{
//						smallest = smallestQueue.front();
//						smallestQueue.pop();
//						if(smallest>=x.first)
//						   break;
//					}
//				}
//			}
//		}
//		if (!first)
//			cout << endl;
//		cout << ans << endl;
//
//		vector<vector<ll> > biggest(ans);
//		for (int i = 0; i < ans; i++)
//		{
//			biggest[i].push_back(dimensions[dimensions.size()-i-1]);
//		}
//
//		int index = dimensions.size() - ans - 1;
//		int group = 0;
//		while(index>=0)
//		{
//			biggest[group].push_back(dimensions[index--]);
//			group++;
//			group = group%ans;
//		}
//		for (int i = 0; i < ans; i++)
//		{
//			for (int j = biggest[i].size()-1; j >= 0; j--)
//			{
//				cout << biggest[i][j];
//				if (j > 0)
//					cout << " ";
//			}
//			cout << endl;
//		}
//		first = false;
//	}
//	return 0;
//}