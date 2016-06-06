#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include<queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include<memory>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include<unordered_map>
#include<limits.h>
#include<string>
#include<string.h>
#pragma warning(disable: 4996)
using namespace std;
typedef  long long ll;
ll INF = 10000000000000;


vector<int> factors(1000001);

void sieve(ll n)
{
	
	factors[0] = factors[1] = 0;

	for (ll i = 2; i <= n; i++)
	{
		if (factors[i]==0)
			for (ll j = i; j <= n; j += i)
				factors[j]++;
	}
	
}

int main()
{
	ll n;
	sieve(1000000);
	while (cin >> n&&n)
	{
		cout << n << " : " << factors[n] << endl;
	}
}