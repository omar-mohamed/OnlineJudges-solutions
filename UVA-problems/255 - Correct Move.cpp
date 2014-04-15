#include<iostream>
#include<string.h>
using namespace std;
int board[9][9];
bool check_move(int queen_x,int queen_y,int king_x,int king_y,int move_x,int move_y)
{
	if(queen_x==move_x&&queen_y==move_y)
		return false;
	else if(queen_x==move_x||queen_y==move_y)
	{
		for(int i=queen_x;i<8;i++)
		{
			if(i==king_x&&queen_y==king_y)
				break;
			else if(i==move_x&&queen_y==move_y)
				return true;
		}
		for(int i=queen_x;i>=0;i--)
		{
			if(i==king_x&&queen_y==king_y)
				break;
			else if(i==move_x&&queen_y==move_y)
				return true;
		}
		for(int i=queen_y;i<8;i++)
		{
			if(queen_x==king_x&&i==king_y)
				break;
			else if(queen_x==move_x&&i==move_y)
				return true;
		}
		for(int i=queen_y;i>=0;i--)
		{
			if(queen_x==king_x&&i==king_y)
				break;
			else if(queen_x==move_x&&i==move_y)
				return true;
		}
	}
	return false;
}

bool check_allowed(int king_x,int king_y,int move_x,int move_y)
{
	if(king_x+1==move_x&&king_y==move_y)
		return false;
	else if(king_x-1==move_x&&king_y==move_y)
		return false;
	else if(king_x==move_x&&king_y+1==move_y)
		return false;
	else if(king_x==move_x&&king_y-1==move_y)
		return false;
	return true;
}

bool check_traped(int king_x,int king_y,int move_x,int move_y)
{
	bool tmp[9][9];
	memset(tmp,true,sizeof(tmp));
	for(int i=move_x;i<8;i++)
		{
			if(i==king_x&&move_y==king_y)
				break;
			tmp[i][move_y]=false;
		}
	for(int i=move_x;i>=0;i--)
		{
			if(i==king_x&&move_y==king_y)
				break;
			tmp[i][move_y]=false;
		}
	for(int i=move_y;i<8;i++)
		{
			if(move_x==king_x&&i==king_y)
				break;
			tmp[move_x][i]=false;
		}
	for(int i=move_y;i>=0;i--)
		{
			if(move_x==king_x&&i==king_y)
				break;
			tmp[move_x][i]=false;
		}
	if(king_x+1<8)
	{
		if(tmp[king_x+1][king_y])
			return true;
	}
	if(king_x-1>=0)
	{
		if(tmp[king_x-1][king_y])
			return true;
	}
	if(king_y+1<8)
	{
		if(tmp[king_x][king_y+1])
			return true;
	}
	if(king_y-1>=0)
	{
		if(tmp[king_x][king_y-1])
			return true;
	}
	return false;
}
int main()
{
	int counter=0,king_x,king_y,queen_x,queen_y,move_x,move_y;
	int king_pos,queen_pos,move_queen;
	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
			board[i][j]=counter++;
	while(cin>>king_pos>>queen_pos>>move_queen)
	{
		for(int i=0;i<8;i++)
			for(int j=0;j<8;j++)
			{
				if(board[i][j]==king_pos)
				{
					king_x=i;
					king_y=j;
				}
				if(board[i][j]==queen_pos)
				{
					queen_x=i;
					queen_y=j;
				}
			   if(board[i][j]==move_queen)
				{
					move_x=i;
					move_y=j;
				}
			}
		if(king_pos==queen_pos)
			cout<<"Illegal state"<<endl;
		else if(!check_move(queen_x,queen_y,king_x,king_y,move_x,move_y))
			cout<<"Illegal move"<<endl;
		else if(!check_allowed(king_x,king_y,move_x,move_y))
		    cout<<"Move not allowed"<<endl;
		else if(check_traped(king_x,king_y,move_x,move_y))
			cout<<"Continue"<<endl;
		else
			cout<<"Stop"<<endl;
	}
	return 0;
}

