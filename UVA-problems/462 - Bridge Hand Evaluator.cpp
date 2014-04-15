#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	string arr[15];
	while(cin>>arr[0])
	{
		int max=0;
		map<char,int> suit_count;
		suit_count['S']=suit_count['H']=suit_count['D']=suit_count['C']=0;
		bool trump=false;
		bool isbid=false;
		bool no_bid=false;
		for(int i=1;i<13;i++)
		{
			cin>>arr[i];
		}
		bool KS,KH,KD,KC,QS,QH,QD,QC,JS,JH,JD,JC,S_stopped,H_stopped,D_stopped,C_stopped;
		KS=KH=KD=KC=QS=QH=QD=QC=JS=JH=JD=JC=S_stopped=H_stopped=D_stopped=C_stopped=false;
		int bid=0;
		for(int i=0;i<13;i++)
		{
			suit_count[arr[i][1]]++;
			if(arr[i][0]=='A')
			{
				bid+=4;
				if(arr[i][1]=='S')
					S_stopped=true;
				else if(arr[i][1]=='H')
					H_stopped=true;
				else if(arr[i][1]=='D')
					D_stopped=true;
				else if(arr[i][1]=='C')
					C_stopped=true;
			}
			else if(arr[i][0]=='K')
			{
				bid+=3;
				if(arr[i][1]=='S')
					KS=true;
				else if(arr[i][1]=='H')
					KH=true;
				else if(arr[i][1]=='D')
					KD=true;
				else if(arr[i][1]=='C')
					KC=true;
			}
			else if(arr[i][0]=='Q')
			{
				bid+=2;
				if(arr[i][1]=='S')
					QS=true;
				else if(arr[i][1]=='H')
					QH=true;
				else if(arr[i][1]=='D')
					QD=true;
				else if(arr[i][1]=='C')
					QC=true;
			}
			else if(arr[i][0]=='J')
			{
				bid+=1;
				if(arr[i][1]=='S')
					JS=true;
				else if(arr[i][1]=='H')
					JH=true;
				else if(arr[i][1]=='D')
					JD=true;
				else if(arr[i][1]=='C')
					JC=true;
			}
		}
		if((KS&&suit_count['S']>=2)||(QS&&suit_count['S']>=3))
			S_stopped=true;
		if((KH&&suit_count['H']>=2)||(QH&&suit_count['H']>=3))
			H_stopped=true;
		if((KD&&suit_count['D']>=2)||(QD&&suit_count['D']>=3))
			D_stopped=true;
		if((KC&&suit_count['C']>=2)||(QC&&suit_count['C']>=3))
			C_stopped=true;
		if(KS&&suit_count['S']==1)
			bid--;
		if(KH&&suit_count['H']==1)
			bid--;
		if(KD&&suit_count['D']==1)
			bid--;
		if(KC&&suit_count['C']==1)
			bid--;
		if(QS&&((suit_count['S']==1)||(suit_count['S']==2)))
			bid--;
		if(QH&&((suit_count['H']==1)||(suit_count['H']==2)))
			bid--;
		if(QD&&((suit_count['D']==1)||(suit_count['D']==2)))
			bid--;
		if(QC&&((suit_count['C']==1)||(suit_count['C']==2)))
			bid--;
		if(JS&&((suit_count['S']==1)||(suit_count['S']==2)||suit_count['S']==3))
			bid--;
		if(JH&&((suit_count['H']==1)||(suit_count['H']==2)||suit_count['H']==3))
			bid--;
		if(JD&&((suit_count['D']==1)||(suit_count['D']==2)||suit_count['D']==3))
			bid--;
		if(JC&&((suit_count['C']==1)||(suit_count['C']==2)||suit_count['C']==3))
			bid--;
		if(bid>=16&&S_stopped&&H_stopped&&D_stopped&&C_stopped)
			trump=true;
		char ans;
		for(map<char,int>::iterator it=suit_count.begin();it!=suit_count.end();it++)
		{
			if(it->second==0||it->second==1)
				bid+=2;
			else if(it->second==2)
				bid++;
			if(it->second>=max)
			{
				max=it->second;
				ans=it->first;
			}
		}
		if(bid>=14)
			isbid=true;
		else if(bid<14)
			no_bid=true;
		if(trump)
			cout<<"BID NO-TRUMP"<<endl;
		else if(isbid)
			cout<<"BID "<<ans<<endl;
		else if(no_bid)
			cout<<"PASS"<<endl;
	}
	return 0;
}




