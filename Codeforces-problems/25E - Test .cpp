#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int Zalgorithm(string s,int rev_size) {
	vector<int> Z(s.size());
	int addFrom=0,max=0;
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
		for(int i=rev_size;i<Z.size();i++)
		{
			if(Z[i]>max&&Z[i]==Z.size()-i)
			{
				addFrom=Z[i];
				max=Z[i];
			}
			if(Z[i]==rev_size)
			{
				addFrom=Z[i];
				break;
			}
		}
		return addFrom;
}


int main()
{
	vector<string> lol(3);
	string lolol;
	int min;
	int tmp;
	int from;
	while(cin>>lol[0]>>lol[1]>>lol[2])
	{
		min=100000037;
		tmp=0;
		sort(lol.begin(),lol.end());
		do
		{
			tmp=0;
			from=Zalgorithm(lol[1]+' '+lol[0],lol[1].size());
			lolol=lol[0]+lol[1].substr(from,lol[1].size()-from);
			from+=Zalgorithm(lol[2]+' '+lolol,lol[2].size());
			tmp+=lol[1].size()+lol[0].size()+lol[2].size()-from;
			if(tmp<min)
				min=tmp;

		}while(next_permutation(lol.begin(),lol.end()));
		cout<<min<<endl;
	}
	return 0;
}