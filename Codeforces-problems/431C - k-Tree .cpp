#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include<queue>
#include <stack>
#include <bitset>
#include <algorithm>
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
#include<string>
#include<string.h>
using namespace std;
int n,k,d;
long long dp[500][2];
long long solve(long long pathLength,bool passed)
{
    if(pathLength>n)
    {
        return 0;
    }
    else if(pathLength==n&&passed)
    {
        return 1;
    }
    long long &ret=dp[pathLength][passed];
    if(ret!=-1)
        return ret;
    ret=0;
    for(int i=1;i<=k;i++)
    {
        passed=passed||i>=d;
        ret=(ret+solve(pathLength+i ,passed))%1000000007;
    }
    return ret;
}

int main()
{
    while(cin>>n>>k>>d)
    {
        memset(dp,-1,sizeof(dp));
        cout<<solve(0,false)<<endl;
    }
    return 0;
}