#include<iostream>
#include<cmath>
#include<utility>
using namespace std;
int knights(int rows,int cols)
{
	int num=0;
	if(rows>=3&&cols>=3)
	{
	  if(rows*cols%2==0)
		  num= (rows*cols)/2;
	  else
		  num= ((rows*cols)+1)/2;
	}
	else
	{
	   if(rows==0||cols==0)
			num=0;
	   else if(rows==1||cols==1)
			num= max(rows,cols);
		else
		{
			num=4;
			int emta=1;
			int counter=max(rows,cols);
			for(int i=2;i<counter;i++)
			{
				emta%=4;
				if(emta==3)
					num+=2;
				else if(emta==0)
					num+=2;
				emta++;
			}
		}
	}
	return num;
}
int main()
{
	int r,c;
	while(cin>>r>>c)
	{
		if(r==0&&c==0)
			break;
		cout<<knights(r,c)<<" knights may be placed on a "<<r<<" row "<<c<<" column board."<<endl;
	}
	return 0;
}