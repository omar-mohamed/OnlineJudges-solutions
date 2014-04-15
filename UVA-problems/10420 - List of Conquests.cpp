#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	string country,girl;
	map<string,int> lol;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>country;
		cin.ignore();
		getline(cin,girl);
		lol[country]++;
	}
	for(map<string,int>::iterator it=lol.begin();it!=lol.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}


