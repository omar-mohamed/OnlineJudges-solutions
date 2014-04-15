#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool bruteForce(string sub,string s) 
{
	string tmp=sub;
	while(true)
	{
		sub+=tmp;
		if(sub==s)
			return true;
		else if(sub.size()>=s.size())
			break;
	}
	return false;
}

int main()
{
	int tc;
	string s,sub;
	cin>>tc;
	for(int c=1;c<=tc;c++)
	{
		cin>>s;
		int ans=s.size();
		for(int i=1;i<=s.size()/2;i++)
		{
			sub=s.substr(0,i);
			if(bruteForce(sub,s))
			{
				ans=i;
				break;
			}
		}
			cout<<ans<<endl;
			if(c!=tc)
				cout<<endl;
	}
	return 0;
}