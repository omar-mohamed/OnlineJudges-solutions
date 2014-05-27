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

long long sumTree[4000009],minTree[4000009];
int arr[500009];
void buildsumSegTree(int node, int b, int e)
{
    if (b == e)
        sumTree[node] = arr[b];
    else 
    {
        buildsumSegTree(2 * node, b, (b + e) / 2);
        buildsumSegTree(2 * node + 1, (b + e) / 2 + 1, e);
        sumTree[node] = sumTree[2 * node]+ sumTree[2 * node + 1];
    }
}

long long sumquery(int node, int b, int e, int i, int j) {
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return sumTree[node];
    return sumquery(2 * node, b, (b + e) / 2, i, j)+ sumquery(2 * node + 1, (b + e) / 2 + 1, e, i, j);

}

void buildminSegTree(int node, int b, int e)
{
    if (b == e)
        minTree[node] = arr[b];
    else 
    {
        buildminSegTree(2 * node, b, (b + e) / 2);
        buildminSegTree(2 * node + 1, (b + e) / 2 + 1, e);
        minTree[node] = minTree[2 * node]+ minTree[2 * node + 1];
    }
}

long long minquery(int node, int b, int e, int i, int j) {
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return minTree[node];
    return  minquery(2 * node, b, (b + e) / 2, i, j)+ minquery(2 * node + 1, (b + e) / 2 + 1, e, i, j);
}

int main()
{
    int n,q,t,l,r;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        buildsumSegTree(1,1,n);
        sort(arr+1,arr+n+1);
        buildminSegTree(1,1,n);
        cin>>q;
        for(int i=0;i<q;i++)
        {
            cin>>t>>l>>r;
            if(t==1)
                cout<<sumquery(1,1,n,l,r)<<endl;
            else
                cout<<minquery(1,1,n,l,r)<<endl;
        }
    }
    return 0;
}