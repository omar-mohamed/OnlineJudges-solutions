#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct card
{
	int priority;
	int order;
	char shape;
	char order_shape;
};
bool weird_sort(card c2,card c1)
{
	if(c1.priority>c2.priority)
		return true;
	else if(c1.priority==c2.priority)
	{
		if(c1.order>c2.order)
			return true;
	}
	return false;
}
int main()
{
	char dealer,tmp_prio,tmp_order;
	int dealer_int;
	while(cin>>dealer)
	{
		if(dealer=='#')
			break;
		vector<card> N,S,E,W;
		if(dealer=='S')
			dealer_int=0;
		else if(dealer=='W')
			dealer_int=1;
		else if(dealer=='N')
			dealer_int=2;
		else if(dealer=='E')
			dealer_int=3;
		for(int i=0;i<52;i++)
		{
			dealer_int++;
			dealer_int=dealer_int%4;
			cin>>tmp_prio>>tmp_order;
			card c;
			c.shape=tmp_prio;
			c.order_shape=tmp_order;
			if(tmp_prio=='C')
				c.priority=1;
			else if(tmp_prio=='D')
				c.priority=2;
			else if(tmp_prio=='S')
				c.priority=3;
			else if(tmp_prio=='H')
				c.priority=4;
			if(tmp_order=='T')
				c.order=10;
			else if(tmp_order=='J')
				c.order=11;
			else if(tmp_order=='Q')
				c.order=12;
			else if(tmp_order=='K')
				c.order=13;
			else if(tmp_order=='A')
				c.order=14;
			else
				c.order=tmp_order-'0';
			if(dealer_int==0)
			{
				S.push_back(c);
			}
			else if(dealer_int==1)
			{
				W.push_back(c);
			}
			else if(dealer_int==2)
			{
				N.push_back(c);
			}
			else if(dealer_int==3)
			{
				E.push_back(c);
			}
		}
		sort(N.begin(),N.end(),weird_sort);
		sort(S.begin(),S.end(),weird_sort);
		sort(E.begin(),E.end(),weird_sort);
		sort(W.begin(),W.end(),weird_sort);
		int S_size=(int)S.size();
		int W_size=(int)W.size();
		int E_size=(int)E.size();
		int N_size=(int)N.size();
		cout<<"S: ";
		for(int i=0;i<S_size;i++)
		{
			cout<<S[i].shape<<S[i].order_shape;
			if(i!=S_size-1)
				cout<<" ";
		}
		cout<<endl;
		cout<<"W: ";
		for(int i=0;i<W_size;i++)
		{
			cout<<W[i].shape<<W[i].order_shape;
			if(i!=W_size-1)
				cout<<" ";
		}
		cout<<endl;
		cout<<"N: ";
		for(int i=0;i<N_size;i++)
		{
			cout<<N[i].shape<<N[i].order_shape;
			if(i!=N_size-1)
				cout<<" ";
		}
		cout<<endl;
		cout<<"E: ";
		for(int i=0;i<E_size;i++)
		{
			cout<<E[i].shape<<E[i].order_shape;
			if(i!=E_size-1)
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}