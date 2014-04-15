
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int t,x,y;
	string tmp;
	cin>>t;
	for(int tc=1;tc<=t;tc++)
	{
        y=0;	
		vector<string> pile,hand;
		for(int i=0;i<52;i++)
		{
			cin>>tmp;
			if(i<=26)
			    pile.push_back(tmp);
			else
				hand.push_back(tmp);
		}
		for(int i=0;i<3;i++)
		{
			tmp=pile[(int)pile.size()-1];
			pile.pop_back();
			if(tmp[0]=='A'||tmp[0]=='K'||tmp[0]=='Q'||tmp[0]=='J'||tmp[0]=='T')
				x=10;
			else
				x=tmp[0]-'0';
			y+=x;
			for(int j=0;j<10-x;j++)
				pile.pop_back();
		}
		for(int i=0;i<25;i++)
		{
			pile.push_back(hand[i]);
		}
		cout<<"Case "<<tc<<": "<<pile[y-1]<<endl;
	}
	return 0;
}
