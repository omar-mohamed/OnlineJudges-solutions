#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main()
{
	int round,correct_size,correct_guess,wrong_guess,guess_size,um_size;
	string correct;
	string guesses;
	while(cin>>round)
	{
		correct_guess=0;
		wrong_guess=0;
		unordered_map<char,bool> um;
		unordered_map<char,bool> guessed;
		if(round==-1)
			break;
		cin>>correct>>guesses;
		guess_size=(int)guesses.size();
		correct_size=(int)correct.size();
		for(int i=0;i<correct_size;i++)
		{
			um[correct[i]]=true;
			guessed[correct[i]]=false;
		}
		um_size=(int)um.size();
		for(int i=0;i<guess_size;i++)
		{
			if(guessed[guesses[i]])
					continue;
			else if(um[guesses[i]])
			{
					guessed[guesses[i]]=true;
					correct_guess++;
					if(correct_guess==um_size)
						break;
			}
			else if(!um[guesses[i]])
			{
					guessed[guesses[i]]=true;
					wrong_guess++;
					if(wrong_guess>=7)
						break;
			}
		}
		cout<<"Round "<<round<<endl;
		if(correct_guess==um_size)
			cout<<"You win."<<endl;
		else if(wrong_guess>=7)
			cout<<"You lose."<<endl;
		else
			cout<<"You chickened out."<<endl;
		

	}
	return 0;
}

