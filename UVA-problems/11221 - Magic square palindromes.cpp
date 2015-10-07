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
//char arr[100][100];
//
//void initialize(const string& s,const int& k)
//{
//	int index = 0;
//	for (int i = 0; i < k; i++)
//		for (int j = 0; j < k; j++)
//			arr[i][j] = s[index++];
//}
//
//bool check(const string& s, const int& k)
//{
//	initialize(s, k);
//	string one = "",two="",three="",four="";
//	for (int i = 0; i < k; i++)
//		for (int j = 0; j < k; j++)
//			one += arr[i][j];
//
//	for (int i = 0; i < k; i++)
//		for (int j = 0; j < k; j++)
//			two += arr[j][i];
//
//	if (one != two)
//		return false;
//
//	for (int i = k-1; i >=0; i--)
//		for (int j = k-1; j >= 0; j--)
//			three += arr[i][j];
//
//	if (three != one)
//		return false;
//
//	for (int i = k - 1; i >= 0; i--)
//		for (int j = k - 1; j >= 0; j--)
//			four += arr[j][i];
//
//	if (four != one)
//		return false;
//	return true;
//}
//
//int main()
//{
//	int n;
//	string s;
//	cin >> n;
//	int index = 0;
//	cin.ignore();
//	while (index++!=n)
//	{
//		getline(cin, s);
//		string clean = "";
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (isalpha(s[i]))
//				clean += tolower(s[i]);
//		}
//		cout << "Case #" << index << ":\n";
//		int k = sqrt(clean.size());
//		if (k*k == clean.size())
//		{
//			if (check(clean, k))
//				cout << k << endl;
//			else
//				cout << "No magic :(\n";
//		}
//		else
//			cout << "No magic :(\n";
//	}
//	return 0;
//}