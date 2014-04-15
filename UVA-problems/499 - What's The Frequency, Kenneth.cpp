#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	string input;
	while(getline(cin,input))
	{
		map<char,int> m;
		string ans="";
		for(int i=0;i<input.size();i++)
		{
			if(isalpha(input[i]))
			  m[input[i]]++;
		}
		int max=0;
		for(map<char,int>::iterator it=m.begin();it!=m.end();it++)
		{
			if(it->second>max)
				max=it->second;
		}
		for(map<char,int>::iterator it=m.begin();it!=m.end();it++)
		{
			if(it->second==max)
				ans+=it->first;
		}
		sort(ans.begin(),ans.end());
		cout<<ans<<" "<<max<<endl;
	}
	return 0;
}

