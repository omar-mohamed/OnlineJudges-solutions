#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int Zalgorithm(string s) {
	vector<int> Z(s.size());
	int addFrom=0;
	int max=0;
	int l = 0, r = 0;
	for (int i = 1; i < s.size(); ++i)
	{
		if (Z[i - l] <= r - i)
			Z[i] = Z[i - l];
		else 
		{
			l = i;
			if (i > r)
				r = i;
			for (Z[i] = r - i; r < s.size(); ++r, ++Z[i])
				if (s[r] != s[Z[i]])
					break;
			--r;
		}
	}
	for(int i=s.size()/2;i<Z.size();i++)
	{
		if(Z[i]==Z.size()-i&&Z[i]>max)
		{
			addFrom=Z[i];
			max=Z[i];
		}
	}
	return addFrom;
}

int main()
{
	string rev,s;
	int addFrom;
	while(cin>>rev)
	{
		s=rev;
		reverse(rev.begin(),rev.end());
		addFrom= Zalgorithm(rev+' '+s);
		for(int i=addFrom;i<rev.size();i++)
		{
			s+=rev[i];
		}
		cout<<s<<endl;
	}
	return 0;
}