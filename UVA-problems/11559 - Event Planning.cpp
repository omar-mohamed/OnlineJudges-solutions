#include<iostream>
using namespace std;
int main()
{
	int n,budget,hotels,weeks;
	while(cin>>n>>budget>>hotels>>weeks)
	{
		int min=100000000,hotel_price,bed;
		for(int i=0;i<hotels;i++)
		{
			cin>>hotel_price;
			for(int j=0;j<weeks;j++)
			{
				cin>>bed;
				if(hotel_price*n<=budget&&bed>=n&&hotel_price*n<min)
					min=hotel_price*n;
			}
		}
		if(min==100000000)
			cout<<"stay home"<<endl;
		else
		cout<<min<<endl;
	}
	return 0;
}