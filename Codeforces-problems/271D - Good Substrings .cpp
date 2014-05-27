#include<iostream>
#include<string>
#include<set>
#include<unordered_map>
#include<map>
using namespace std;

int main()
{
	long long p1 = 10007;
	long long p2 = 1000000000000037;
	long long HashT;
	string s,tany;
	int c,tmp,counter,ans;
	char ay;
	while(cin>>s>>tany>>c)
	{
		HashT=0;
		ay='a';
		tmp=0;
		counter=0;
		unordered_map<long long,bool> visited;
		unordered_map<char,bool> isGood;
		for(int i=0;i<26;i++)
			isGood[ay++]=tany[i]-'0';
		for(int i=0;i<s.size();i++)
		{
			tmp=0;
			HashT=0;
			for(int j=i;j<s.size();j++)
			{
				if(!isGood[s[j]])
					tmp++;
				if(tmp>c)
					break;
				
				HashT=((HashT*p1) % p2 + s[j] ) %p2;
				if(!visited[HashT])
				{
					counter++;
					visited[HashT]=true;
				}
			}
		}
			cout<<counter<<endl;
	}
	return 0;
}