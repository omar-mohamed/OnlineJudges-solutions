//#include<iostream>
//#include<string>
//#include<math.h>
//#include<cmath>
//#include<iomanip>
//#include<stdio.h>
//#include <algorithm>
//#include<string.h>
//#include<vector>
//#pragma warning(disable: 4996)
//using namespace std;
//
//
//int main()
//{
//	int t,num_players,specials,num_rolls,roll,from,to,move,playerIndex;
//	bool no_Win;
//	scanf("%d", &t);
//	int ladders_snakes[101];
//	for (int c = 0; c < t; ++c)
//	{
//		playerIndex = 0;
//		no_Win = true;
//		scanf("%d%d%d", &num_players, &specials, &num_rolls);
//		vector<int> players(num_players,1);
//		memset(ladders_snakes, 0, sizeof(ladders_snakes));
//		for (int i = 0; i < specials; ++i)
//		{
//			scanf("%d%d", &from, &to);
//			ladders_snakes[from] = to;
//		}
//
//		for (int i = 0; i < num_rolls; ++i)
//		{
//			scanf("%d", &roll);
//			if (no_Win)
//			{
//				move = players[playerIndex] + roll;
//				if (move > 100)
//					move = 100;
//				if (ladders_snakes[move] != 0)
//					players[playerIndex] = ladders_snakes[move];
//				else
//					players[playerIndex] = move;
//				if (players[playerIndex] == 100)
//					no_Win = false;
//				playerIndex++;
//				if (playerIndex == num_players)
//					playerIndex = 0;
//			}
//		}
//
//		for (int i = 0; i < num_players; ++i)
//		{
//			printf("Position of player %d is %d.\n", i + 1, players[i]);
//		}
//	}
//
//	return 0;
//}