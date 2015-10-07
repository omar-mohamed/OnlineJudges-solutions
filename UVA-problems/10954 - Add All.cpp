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
//int main()
//{
//	int n,tmp;
//	ll ans,sum;
//	while (cin >> n&&n>0)
//	{
//		ans = sum=0;
//		priority_queue<int> pq;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> tmp;
//			pq.push(-tmp);
//		}
//		while (pq.size()>1)
//		{
//			sum = -pq.top();
//			pq.pop();
//			sum += -pq.top();
//			pq.pop();
//			ans += sum;
//			pq.push(-sum);
//		}
//		cout << ans << endl;
//	}
//	return 0;
//}