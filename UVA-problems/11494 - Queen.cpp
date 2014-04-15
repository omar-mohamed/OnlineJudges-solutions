#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int Q_r,Q_c,goal_r,goal_c;
	while(cin>>Q_r>>Q_c>>goal_r>>goal_c)
	{
		if(Q_r==0&&Q_c==0&&goal_r==0&&goal_c==0)
			break;
		if(Q_r==goal_r&&Q_c==goal_c)
			cout<<"0"<<endl;
		else if(Q_r==goal_r||Q_c==goal_c||(abs(Q_r-goal_r)==abs(Q_c-goal_c)))
			cout<<"1"<<endl;
		else 
			cout<<"2"<<endl;
	}
	return 0;
}