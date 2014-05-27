#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int Zalgorithm(string s) {
	vector<int> Z(s.size());
	int maximum=0;
	int ans=0;
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
	for(int i=0;i<Z.size();i++)
	{
		if(Z[i]<=maximum&&Z[i]==Z.size()-i)
		{
			maximum=Z[i];
			ans=Z[i];
			break;
		}

		maximum=max(maximum,Z[i]);
	}
	return ans;
}


int main()
{
	string s;
	int ans,output;
	while(cin>>s)
	{
		ans=Zalgorithm(s);
		if(ans!=0)
			cout<<s.substr(s.size()-ans,ans)<<endl;
		else
			cout<<"Just a legend"<<endl;
	}
	return 0;
}