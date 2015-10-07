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
//int main()
//{
//	string s;
//	priority_queue<pair<int,int> > pq;
//	unordered_map<int, int> dic;
//	int id,k, period;
//	while (cin >> s&&s != "#")
//	{
//		cin >> id >> period;
//		dic[id] = period;
//		pq.push(make_pair(-period, -id));
//	}
//	cin >> k;
//	for (int i = 0; i < k; i++)
//	{
//		cout << -pq.top().second<<endl;
//		pq.push(make_pair(pq.top().first -dic[-pq.top().second], pq.top().second));
//		pq.pop();
//	}
//	return 0;
//}