#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
#pragma warning(disable: 4996)
using namespace std;

int Tree[1200][1200],matrix[1200][1200],n;
void update(int x, int y, int val) 
{
	int y1;
	while (x <= n) 
	{
		y1 = y;
		while (y1 <= n)
		{
			Tree[x][y1] += val;
			y1 += (y1 & -y1);
		}
		x += (x & -x);
	}
}

int getSum(int x, int y) 
{
	int sum = 0;
	int tempY;
	while (x > 0) 
	{
		tempY = y;
		while (tempY > 0) 
		{
			sum += Tree[x][tempY];
			tempY -= (tempY & (-tempY));
		}
		x -= (x & (-x));
	}

	return sum;
}


int main()
{
	int TC,from_i,from_j,to_i,to_j,v;
	char s[10];
	scanf("%d",&TC);
	for(int c=1;c<=TC;c++)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				matrix[i][j]=Tree[i][j]=0;

		while(scanf("%s",s))
		{
			if(s[0]=='E'&&s[1]=='N'&&s[2]=='D')
				break;
			else if(s[0]=='S'&&s[1]=='E'&&s[2]=='T')
			{
				scanf("%d%d%d",&from_i,&from_j,&v);
				update(from_i+1,from_j+1,v-matrix[from_i+1][from_j+1]);
				matrix[from_i+1][from_j+1]=v;
			}
			else
			{
				scanf("%d%d%d%d",&from_i,&from_j,&to_i,&to_j);
				printf("%d\n",getSum(to_i+1,to_j+1)-getSum(from_i,to_j+1)-getSum(to_i+1,from_j)+getSum(from_i,from_j));
			}
		}

			printf("\n");
	}
	return 0;
}
