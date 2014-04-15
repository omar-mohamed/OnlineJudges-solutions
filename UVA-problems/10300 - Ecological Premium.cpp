#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		int sum=0;
		cin>>n;
		for(int j=0;j<n;j++)
		{
			int one ,two,three;
			cin>>one>>two>>three;
			sum+=one*three;
		}
		cout<<sum<<endl;
	}
	return 0;
}

