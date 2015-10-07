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
//vector<string> sequences;
//stack<char> st;
//string source, target;
//
//void solve(string seq, int targetIndex,int sourceIndex)
//{
//	if (targetIndex == (int)target.size())
//	{
//		sequences.push_back(seq);
//		return;
//	}
//	if (sourceIndex < source.size())
//	{
//		st.push(source[sourceIndex]);
//		solve(seq + 'i', targetIndex,sourceIndex+1);
//		st.pop();
//	}
//	if (!st.empty() && st.top() == target[targetIndex])
//	{
//		st.pop();
//		solve(seq + 'o',targetIndex+1,sourceIndex);
//		st.push(target[targetIndex]);
//	}
//}
//
//int main()
//{
//	while (cin >> source >> target)
//	{
//		sequences.clear();
//		while (!st.empty())
//		{
//			st.pop();
//		}
//		solve("", 0,0);
//		cout << "[\n";
//		for (int i = 0; i < (int)sequences.size(); i++)
//		{
//			for (int j = 0; j < (int)sequences[i].size(); j++)
//			{
//				cout << sequences[i][j];
//				if (j != (int)sequences[i].size() - 1)
//					cout << " ";
//			}
//			//if(i!= (int)sequences.size()-1)
//			  cout << endl;
//		}
//		cout << "]\n";
//	}
//	return 0;
//}