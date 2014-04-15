#include<iostream>
#include<utility>
#include<cmath>
using namespace std;

int knights(int rows,int cols)
{
	int num=0;
	bool white=true;
	for(int i=1;i<=rows;i++)
		for(int j=1;j<=cols;j++)
		{
			if(white)
			{
				num++;
				white=false;
			}
			else
				white=true;
		}
		return num;
}
int kings(int rows,int cols)
{
	int num=0;
	for(int i=1;i<=rows;i+=2)
		for(int j=1;j<=cols;j++)
		{
			if(j%2!=0)
				num++;
		}
		return num;
}
int queensOrRooks(int rows,int cols)
{
	return min(rows,cols);
}
int main()
{
	int cases,rows,cols;
	char piece;
	cin>>cases;
	for(int i=1;i<=cases;i++)
	{
		cin>>piece>>rows>>cols;
		if(piece=='r'||piece=='Q')
			cout<<queensOrRooks(rows,cols)<<endl;
		else if(piece=='K')
			cout<<kings(rows,cols)<<endl;
		else if(piece=='k')
			cout<<knights(rows,cols)<<endl;

	}
	return 0;
}