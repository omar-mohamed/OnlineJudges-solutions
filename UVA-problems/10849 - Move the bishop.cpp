#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int cases,n_queries,n,b_r,b_c,goal_r,goal_c;
	cin>>cases;
	for(int tc=0;tc<cases;tc++)
	{
		cin>>n_queries>>n;
		for(int i=0;i<n_queries;i++)
		{
			cin>>b_r>>b_c>>goal_r>>goal_c;
			if(b_r==goal_r&&b_c==goal_c)
				cout<<"0"<<endl;
			else if(abs(b_r-goal_r)==abs(b_c-goal_c))
				cout<<"1"<<endl;
			else if((abs(b_r-goal_r)+abs(b_c-goal_c))%2==0)
				cout<<"2"<<endl;
			else
				cout<<"no move"<<endl;
		}
	}
	return 0;
}

