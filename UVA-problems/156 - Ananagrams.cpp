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
//struct word
//{
//	string original;
//	int count;
//};
//
//string wordToLower(string s)
//{
//	for (int i = 0; i < s.size(); i++)
//		s[i] = tolower(s[i]);
//	return s;
//}
//
//int main()
//{
//	unordered_map<string, word> dic;
//	string s;
//	string buff,tmp;
//	set<string> anangrams;
//	while (getline(cin, s))
//	{
//		if (s == "#")
//			break;
//		stringstream ss(s);
//		buff = "";
//		while (ss >> buff)
//		{
//			tmp = wordToLower(buff);
//			sort(tmp.begin(), tmp.end());
//			dic[tmp].count++;
//			if(dic[tmp].count==1)
//			   dic[tmp].original = move(buff);
//		}
//	}
//	for (auto x : dic)
//	{
//		if (x.second.count == 1)
//			anangrams.insert(x.second.original);
//	}
//	for (auto word : anangrams)
//		cout << word << endl;
//}