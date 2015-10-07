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
//typedef long long ll;
//
//struct topic
//{
//	unordered_map<string, bool> vis;
//	string name;
//	int counter;
//	int required;
//};
//
//int main()
//{
//	int t,num_topics,req,words;
//	cin >> t;
//	string word,buff;
//	bool once;
//	while (t--)
//	{
//		cin >> num_topics;
//		vector<topic> v(num_topics);
//		for (int i = 0; i < num_topics; i++)
//		{
//			cin >> v[i].name>>words>>v[i].required;
//			for (int j = 0; j < words; j++)
//			{
//				cin >> word;
//				v[i].vis[word] = 0;
//			}
//		}
//		cin.ignore();
//		while (getline(cin, word)&&word!="")
//		{
//			for (int i = 0; i < word.size(); i++)
//				if (!isalpha(word[i]))
//					word[i] = ' ';
//			stringstream ss(word);
//			while (ss >> buff)
//			{
//				for (int i = 0; i < num_topics; i++)
//				{
//					if (v[i].vis.find(buff) != v[i].vis.end())
//					{
//						if (v[i].vis[buff] == 0)
//						{
//							v[i].vis[buff] = 1;
//							v[i].counter++;
//						}
//					}
//				}
//			}
//		}
//		once = false;
//		for (int i = 0; i < num_topics; i++)
//		{
//			if (v[i].counter >= v[i].required)
//			{
//				if (once)
//					cout << ",";
//				cout << v[i].name;
//				once = true;
//			}
//		}
//		if (!once)
//			cout << "SQF Problem.\n";
//		else
//			cout << endl;
//		
//	}
//	return 0;
//}