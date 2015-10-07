//#include<iostream>
//#include<string>
//#include<math.h>
//#include<cmath>
//#include<iomanip>
//#include<stdio.h>
//#include <algorithm>
//#include<string.h>
//#include<vector>
//#include<list>
//#include<sstream>
//#include<unordered_map>
//#include<set>
//#pragma warning(disable: 4996)
//using namespace std;
//
//int priority[1000];
//
//void computePrio()
//{
//	int prio = 1;
//	for (char i = 'a'; i <= 'z'; i++)
//	{
//		priority[toupper(i)] = prio++;
//		priority[i] = prio++;
//	}
//}
//
//bool weirdsort(string s2, string s1)
//{
//	for (int i = 0; i < s1.size(); i++)
//	{
//		if (priority[s2[i]] < priority[s1[i]])
//			return true;
//		else if (priority[s2[i]] > priority[s1[i]])
//			return false;
//	}
//	return false;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	string s;
//	computePrio();
//	while (t--)
//	{
//		cin >> s;
//		sort(s.begin(), s.end());
//		vector<string> words;
//		do
//		{
//			words.push_back(s);
//		} while (next_permutation(s.begin(), s.end()));
//		sort(words.begin(), words.end(),weirdsort);
//		for (auto word : words)
//		{
//			cout << word << endl;
//		}
//	}
//	return 0;
//}