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
//
////
////int minElementInShiftedSorted(int arr[], int l, int r)
////{
////	if (l > r)
////		return arr[0];
////	if (l == r)
////		return arr[l];
////
////	int mid = l + (r - l) / 2;
////
////	if (mid < r && arr[mid + 1] < arr[mid])
////		return arr[mid + 1];
////
////	if (mid > l && arr[mid] < arr[mid - 1])
////		return arr[mid];
////
////	if (arr[mid] > arr[l])
////		return minElementInShiftedSorted(arr, mid + 1, r);
////	else
////		return minElementInShiftedSorted(arr, l, mid-1);
////}
////
////void testminElementInShiftedSorted()
////{
////	int arr[] = { 4 ,4 ,5,6,1,2,3 };
////cout << minElementInShiftedSorted(arr, 0, 6);
////}
//
//
//
//
//string compression(string s)
//{
//	if (s.size() <= 1)
//		return s;
//	int size = 1;
//	string tmp = "";
//	tmp+=s[0];
//	char lastChar = s[0];
//	int counter=1;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] != lastChar)
//		{
//			string l = to_string(counter);
//			tmp = tmp + l + s[i];
//			size += l.size();
//			lastChar = s[i];
//			counter = 1;
//		}
//		else
//			counter++;
//	}
//	tmp += to_string(counter);
//	if (tmp.size() > s.size())
//		return s;
//	return tmp;
//}
//
//int main()
//{
//	string s = "abc";
//	cout << compression(s);
//}