#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<stdlib.h>
#include<string>
#include<map>
using namespace std;
int main()
{
	int c;
	cin>>c;
	int shuffles,tmp;
	vector<int> deck(52),old(52);
	string suit,face,line;
	for(int tc=1;tc<=c;tc++)
	{
		for(int i=0;i<52;i++)
		{
			deck[i]=old[i]=i;
		}
		int arr[101][52];
		vector<int> moves;
		cin>>shuffles;
		for(int i=0;i<shuffles;i++)
		{
			for(int j=0;j<52;j++)
			{
				cin>>tmp;
				arr[i][j]=tmp-1;
			}
		}

		cin.ignore();
		while(true)
		{
			getline(cin,line);
			if(line=="")
				break;
			tmp=atoi(line.c_str());
			moves.push_back(tmp);
		}
		int moves_size=(int)moves.size();
		for(int i=0;i<moves_size;i++)
		{
			for(int j=0;j<52;j++)
			{
				deck[j]=old[arr[moves[i]-1][j]];
			}
			old=deck;
		}

		for(int i=0;i<52;i++)
		{
			if(deck[i]<=12)
				suit="Clubs";
			else if(deck[i]<=25)
				suit="Diamonds";
			else if(deck[i]<=38)
				suit="Hearts";
			else
				suit="Spades";
			deck[i]%=13;
			if(deck[i]==12)
				face="Ace";
			else if(deck[i]==11)
				face="King";
			else if(deck[i]==10)
				face="Queen";
			else if(deck[i]==9)
				face="Jack";
			else
				face="normal";
			if(face=="normal")
				cout<<deck[i]+2<<" of "<<suit<<endl;
			else
				cout<<face<<" of "<<suit<<endl;
		}
		if(tc!=c)
			cout<<endl;
	}
	return 0;
}
