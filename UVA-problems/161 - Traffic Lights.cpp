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
//struct state {
//	int current;
//	string status;
//};
//
//state states[105];
//
//int arr[105];
//
//bool check(const int& size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (states[i].status != "green")
//			return false;
//	}
//	return true;
//}
//
//string simulate(const int& size)
//{
//	int seconds = 0;
//	int minutes = 0;
//	int hours = 0;
//	bool firstOrange = false;
//	while (!firstOrange)
//	{
//		for (int i = 0; i < size; i++)
//		{
//			states[i].current++;
//			if (states[i].status == "green"&&states[i].current == arr[i] - 5)
//			{
//				states[i].status = "yellow";
//				firstOrange = true;
//			}
//		}
//		seconds++;
//		if (seconds == 60)
//		{
//			seconds = 0;
//			minutes++;
//			if (minutes == 60)
//			{
//				minutes = 0;
//				hours++;
//			}
//		}
//	}
//
//	while (true)
//	{
//		for (int i = 0; i < size; i++)
//		{
//			states[i].current++;
//			if (states[i].status == "green"&&states[i].current == arr[i] - 5)
//				states[i].status = "yellow";
//
//			else if (states[i].status == "yellow"&&states[i].current==arr[i])
//			{
//				states[i].current = 0;
//				states[i].status = "red";
//			}
//			else if (states[i].status == "red"&&states[i].current == arr[i])
//			{
//				states[i].current = 0;
//				states[i].status = "green";
//			}
//		}
//		seconds++;
//		if (seconds == 60)
//		{
//			seconds = 0;
//			minutes++;
//			if (minutes == 60)
//			{
//				minutes = 0;
//				hours++;
//			}
//		}
//		if (hours == 5 && seconds > 0)
//			return "Signals fail to synchronise in 5 hours";
//		else if (check(size))
//		{
//			string sec,min,h;
//			if (seconds < 10)
//				sec = "0" + to_string(seconds);
//			else
//				sec = to_string(seconds);
//			if (minutes < 10)
//				min = "0" + to_string(minutes);
//			else
//				min = to_string(minutes);
//			h = "0" + to_string(hours);
//			return h + ":" + min + ":" + sec;
//		}
//	}
//
//}
//
//int main()
//{
//	int size;
//	while (true)
//	{
//		size = 2;
//		cin >> arr[0] >> arr[1] >> arr[2];
//		if (arr[0] == arr[1] && arr[1] == arr[2] && arr[1] == 0)
//			break;
//		else if (arr[2] != 0)
//		{
//			size = 3;
//			while (cin >> arr[size])
//			{
//				if (arr[size] == 0)
//					break;
//				size++;
//			}
//		}
//		for (int i = 0; i < size; i++)
//		{
//			states[i].current = 0;
//			states[i].status = "green";
//
//		}
//
//		cout << simulate(size) << endl;
//	}
//	return 0;
//}