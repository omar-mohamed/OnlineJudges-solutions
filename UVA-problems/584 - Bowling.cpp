//#include<iostream>
//#include<string>
//#include<iomanip>
//#include<algorithm>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//int countLanes(const vector<char>& arr)
//{
//	double lanes = 0;
//	for (int i = 0; i < arr.size(); i++)
//	{
//		if (arr[i] == 'X')
//			lanes++;
//	}
//	lanes += (arr.size() - lanes) / 2.0;
//	return (int)ceil(lanes);
//}
//
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		if (s == "Game Over")
//			break;
//		vector<char> arr;
//		for (int i = 0; i < s.size(); i+=2)
//		{
//			arr.push_back(s[i]);
//		}
//		int ans = 0;
//		int lanes = countLanes(arr);
//		int end = arr.size();
//		if (lanes > 10)
//		{
//			if (arr[arr.size() - 2] == '/')
//				end = arr.size() - 1;
//			else
//				end = arr.size() - 2;
//		}
//		for (int i = 0; i < end; i++)
//		{
//			if (isdigit(arr[i]))
//				ans += arr[i] - '0';
//			else if (arr[i] == '/')
//			{
//				ans = ans + 10 + (isdigit(arr[i + 1]) ? arr[i + 1] - '0' : 10);
//				ans -= arr[i - 1] - '0';
//			}
//			else if (arr[i] == 'X')
//			{
//				if (arr[i + 2] == '/')
//					ans += 20;
//				else
//				{
//					ans = ans + 10 + (isdigit(arr[i + 1]) ? arr[i + 1] - '0' : 10);
//					ans = ans + (isdigit(arr[i + 2]) ? arr[i + 2] - '0' : 10);
//				}
//			}
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}