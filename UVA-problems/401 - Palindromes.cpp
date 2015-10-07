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
//char rev[256];
//
//bool checkMirroredPal(string s)
//{
//	string ori = s;
//	for (int i = 0; i <= s.size()/2; i++)
//	{
//		if (rev[s[i]] != s[s.size() - i - 1])
//			return false;
//		else
//			s[i] = rev[s[i]];
//	}
//	reverse(ori.begin(), ori.end());
//	reverse(s.begin(), s.end());
//	if (s == ori)
//		return true;
//	return false;
//}
//
//
//bool checkMirrored(string s)
//{
//	for (int i = 0; i <= s.size() / 2; i++)
//	{
//		if (rev[s[i]] != s[s.size() - i - 1])
//			return false;
//	}
//	return true;
//}
//
//bool checkPal(string s)
//{
//	for (int i = 0; i <= s.size() / 2; i++)
//	{
//		if (s[i] != s[s.size() - i - 1])
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	string s;
//	for (int i = 0; i < 256; i++)
//		rev[i] = ' ';
//	rev['A'] = 'A';
//	rev['3'] = 'E';
//	rev['E'] = '3';
//	rev['H'] = 'H';
//	rev['I'] = 'I';
//	rev['A'] = 'A';
//	rev['L'] = 'J';
//	rev['J'] = 'L';
//	rev['M'] = 'M';
//	rev['O'] = 'O';
//	rev['S'] = '2';
//	rev['2'] = 'S';
//	rev['T'] = 'T';
//	rev['U'] = 'U';
//	rev['V'] = 'V';
//	rev['W'] = 'W';
//	rev['X'] = 'X';
//	rev['Y'] = 'Y';
//	rev['Z'] = '5';
//	rev['5'] = 'Z';
//	rev['1'] = '1';
//	rev['8'] = '8';
//	while (cin >> s)
//	{
//		if (checkMirroredPal(s))
//			cout <<s<< " -- is a mirrored palindrome.\n";
//		else if(checkMirrored(s))
//			cout << s << " -- is a mirrored string.\n";
//		else if (checkPal(s))
//			cout << s << " -- is a regular palindrome.\n";
//		else
//			cout << s << " -- is not a palindrome.\n";
//		cout << endl;
//	}
//	return 0;
//}