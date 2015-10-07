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
//unordered_map<string, string> toShortcut{make_pair("AA","A"),make_pair("AB","AB"),make_pair("AO","A"),make_pair("BB","B"),make_pair("BO","B"),make_pair("OO","O") };
//unordered_map<string,vector< string> > fromShortcut;
//set<string> v;
//void fromCombinations(string s1, string s2)
//{
//
//	string s;
//	for (int i = 0; i < s1.size(); i++)
//	{
//		for (int j = 0; j < s2.size(); j++)
//		{
//			s = "";
//			s += s1[i];
//			s += s2[j];
//			if (toShortcut.find(s) != toShortcut.end())
//				v.insert(toShortcut[s]);
//		}
//	}
//}
//
//
//
//bool compare(string s1,string s2,const string& s3)
//{
//
//	string s;
//	for (int i = 0; i < s1.size(); i++)
//	{
//		for (int j = 0; j < s2.size(); j++)
//		{
//			s = "";
//			s += s1[i];
//			s += s2[j];
//			if (toShortcut.find(s) != toShortcut.end())
//			{
//				if (toShortcut[s] == toShortcut[s3])
//					return true;
//			}
//
//		}
//	}
//	return false;
//}
//
//void toCombinations(const string& s1, const string& s2)
//{
//
//	for (auto x : toShortcut)
//	{
//		if (compare(x.first, s1, s2)|| compare(s1, x.first, s2))
//			v.insert(x.second);
//		
//	}
//
//}
//
//int main()
//{
//	string p1, p2, c;
//	int cases=1;
//	fromShortcut["A"].push_back( "AA");
//	fromShortcut["A"].push_back("AO");
//	fromShortcut["B"].push_back("BB");
//	fromShortcut["B"].push_back("BO");
//	fromShortcut["AB"].push_back("AB");
//	fromShortcut["O"].push_back("OO");
//	while (cin >> p1 >> p2 >> c)
//	{
//		if (p1 == "E")
//			break;
//		v.clear();
//		if (p1 == "?" || p2 == "?")
//		{
//			if (p1 == "?")
//			{
//				for (int x = 0; x < fromShortcut[p2.substr(0, p2.size() - 1)].size(); x++)
//				{
//					for (int y = 0; y < fromShortcut[c.substr(0, c.size() - 1)].size(); y++)
//					{
//						toCombinations(fromShortcut[p2.substr(0, p2.size() - 1)][x], fromShortcut[c.substr(0, c.size() - 1)][y]);
//					}
//				}
//				if (v.empty())
//					cout << "Case " << cases << ": IMPOSSIBLE " << p2 << " " << c<<endl;
//				else if (v.size() == 1)
//					cout << "Case " << cases << ": " << (*v.begin())+'-'<< " " << p2 << " " << c << endl;
//				else if (p2[p2.size() - 1] == '-'&& c[c.size() - 1] == '+')
//				{
//					cout << "Case " << cases << ": {";
//					int index = 0;
//					for (auto ss : v)
//					{
//						cout << ss + '+';
//						if (index++ != v.size() - 1)
//							cout << ", ";
//					}
//					cout << "} " << p2 << " " << c << endl;
//				}
//				else
//				{
//					cout << "Case " << cases << ": {";
//					int index = 0;
//					for (auto ss : v)
//					{
//						cout << ss + '+'<<", "<< ss + '-';
//						if (index++ != v.size() - 1)
//							cout << ", ";
//					}
//					cout << "} " << p2 << " " << c << endl;
//				}
//			}
//			else
//			{
//				for (int x = 0; x < fromShortcut[p1.substr(0, p1.size() - 1)].size(); x++)
//				{
//					for (int y = 0; y < fromShortcut[c.substr(0, c.size() - 1)].size(); y++)
//						toCombinations(fromShortcut[p1.substr(0, p1.size() - 1)][x], fromShortcut[c.substr(0, c.size() - 1)][y]);
//				}
//				if (v.empty())
//					cout << "Case " << cases << ": " << p1 << " IMPOSSIBLE " << c << endl;
//				else if (v.size() == 1)
//					cout << "Case " << cases << ": " << p1 << " "<< (*v.begin()) + '-' <<" " << c << endl;
//				else if(p1[p1.size() - 1] =='-'&& c[c.size() - 1]=='+')
//				{
//					cout << "Case " << cases << ": "<<p1<<" {";
//					int index = 0;
//					for (auto ss : v)
//					{
//						cout << ss + '+';
//						if (index++ != v.size() - 1)
//							cout << ", ";
//					}
//					cout << "} " << c << endl;
//				}
//				else
//				{
//					cout << "Case " << cases << ": " << p1 << " {";
//					int index = 0;
//					for (auto ss : v)
//					{
//						cout << ss + '+'<< ", "<< ss + '-';
//						if (index++ != v.size() - 1)
//							cout << ", ";
//					}
//					cout << "} " << c << endl;
//				}
//			}
//		}
//		else
//		{
//			for (int x = 0; x < fromShortcut[p2.substr(0, p2.size() - 1)].size(); x++)
//			{
//				for (int y = 0; y < fromShortcut[p1.substr(0, p1.size() - 1)].size(); y++)
//				{
//					fromCombinations(fromShortcut[p2.substr(0, p2.size() - 1)][x], fromShortcut[p1.substr(0, p1.size() - 1)][y]);
//					fromCombinations(fromShortcut[p1.substr(0, p1.size() - 1)][y], fromShortcut[p2.substr(0, p2.size() - 1)][x]);
//				}
//			}
//
//			cout << "Case " << cases << ": " << p1 << " "<<p2<<" ";
//			if (v.empty())
//				cout << "IMPOSSIBLE\n";
//			else if (v.size() == 1 && p1[p1.size() - 1] == '-'&& p2[p2.size() - 1] == '-')
//				cout << (*v.begin()) + '-' << endl;
//			else if (p1[p1.size() - 1] =='-'&& p2[p2.size() - 1]=='-')
//			{
//				cout << "{";
//				int index = 0;
//				for (auto ss : v)
//				{
//					cout << ss + '-';
//					if (index++ != v.size() - 1)
//						cout << ", ";
//				}
//				cout << "}" <<endl;
//			}
//			else
//			{
//				cout << "{";
//				int index = 0;
//				for (auto ss : v)
//				{
//					cout << ss + '+'<<", "<< ss + '-';
//					if (index++ != v.size() - 1)
//						cout << ", ";
//				}
//				cout << "}" << endl;
//			}
//		}
//		cases++;
//	}
//	return 0;
//}