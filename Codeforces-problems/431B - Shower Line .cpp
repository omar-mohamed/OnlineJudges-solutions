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
#include<unordered_map>
using namespace std;
int main()
{
    int arr[6][6];
    long long max,lol;
    vector<int> tmp;
    while(cin>>arr[0][0]>>arr[0][1]>>arr[0][2]>>arr[0][3]>>arr[0][4])
    {
        max=0;
        vector<int> q;
        q.push_back(1);
        q.push_back(2);
        q.push_back(3);
        q.push_back(4);
        q.push_back(5);
        for(int i=1;i<5;i++)
            for(int j=0;j<5;j++)
                cin>>arr[i][j];
        do
        {
            tmp=q;
            lol=0;
            while(!tmp.empty())
            {
                for(int i=0;i<tmp.size()-1;i+=2)
                {
                    lol+=arr[tmp[i]-1][tmp[i+1]-1]+arr[tmp[i+1]-1][tmp[i]-1];
                }
                tmp.erase(tmp.begin(),tmp.begin()+1);
            }
            if(lol>max)
                max=lol;
        }while (next_permutation(q.begin(),q.end()));
        cout<<max<<endl;
    }
    return 0;
}