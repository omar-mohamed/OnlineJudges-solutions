#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;
string ans;
bool dealerTurn;
vector<string> dealer,nondealer,deck;
void take_deck( vector<string>& taker,vector<string>& deck)
{
	for(int i=0;i<deck.size();i++)
	{
		taker.insert(taker.begin(),deck[i]);
	}
	deck.clear();
}
void face_sequence(vector<string> &victem,vector<string> &deck,char symbol,bool dealerIsVictim)
{
	int seq;
	if(symbol=='A')
		seq=4;
	else if(symbol=='K')
		seq=3;
	else if(symbol=='Q')
		seq=2;
	else if(symbol=='J')
		seq=1;
	for(int i=0;i<seq;i++)
	{
		if(!victem.empty())
		{
			deck.push_back(victem[victem.size()-1]);
			victem.erase(victem.begin()+victem.size()-1);
			if(deck[deck.size()-1][1]=='A'||deck[deck.size()-1][1]=='Q'||deck[deck.size()-1][1]=='K'||deck[deck.size()-1][1]=='J')
			{
				if(dealerIsVictim)
					face_sequence(nondealer,deck,deck[deck.size()-1][1],!dealerIsVictim);
				else
					face_sequence(dealer,deck,deck[deck.size()-1][1],!dealerIsVictim);
				return;
			}
		}
		else
		{
			if(dealerIsVictim==true)
			 ans="nondealer";
			else
				ans="dealer";
			return;
		}
	}
	if(dealerIsVictim)
	{
		dealerTurn=false;
		take_deck(nondealer,deck);
	}
	else
	{
		dealerTurn=true;
		take_deck(dealer,deck);
	}
}
int main()
{
	string tmp;
	while(true)
	{
		deck.clear();
		dealer.clear();
		nondealer.clear();
		ans="";
		for(int i=0;i<52;i++)
		{
			cin>>tmp;
			if(i==0&&tmp=="#")
				return 0;
			if(i%2==0)
				nondealer.push_back(tmp);
			else
				dealer.push_back(tmp);
		}
		for(int i=0;;i++)
		{
			if(i%2==0)
			{
				if(!nondealer.empty())
					deck.push_back(nondealer[nondealer.size()-1]);
				else
				{
					ans="dealer";
					break;
				}
				nondealer.erase(nondealer.begin()+nondealer.size()-1);
				if(deck[deck.size()-1][1]=='A'||deck[deck.size()-1][1]=='Q'||deck[deck.size()-1][1]=='K'||deck[deck.size()-1][1]=='J')
				{
					face_sequence(dealer,deck,deck[deck.size()-1][1],true);
					if(!dealerTurn)
						i++;
				}
			}
			else
			{
				if(!dealer.empty())
					deck.push_back(dealer[dealer.size()-1]);
				else
				{
					ans="nondealer";
					break;
				}
				dealer.erase(dealer.begin()+dealer.size()-1);
				if(deck[deck.size()-1][1]=='A'||deck[deck.size()-1][1]=='Q'||deck[deck.size()-1][1]=='K'||deck[deck.size()-1][1]=='J')
				{
					face_sequence(nondealer,deck,deck[deck.size()-1][1],false);
					if(dealerTurn)
						i++;
				}
			}
			if(ans!="")
				break;
		}
		if(ans=="dealer")
			cout<<"1 "<<setw(2)<<dealer.size()<<endl;
		else
			cout<<"2 "<<setw(2)<<nondealer.size()<<endl;
	}
	return 0;
}