#include "game.h"

int game()
{
	
	srand((unsigned int)time(NULL));
	int count = 0;	//下子次数
	char result = ' ';
	char board[ROW][COL] = { 0 };
	Initboard(board);
	while (1)
	{	
		showboard(board);
		printf("玩家下》\n");
		result = PlayerPlay(board,&count);
		showboard(board);
		if (result == 'n')
		{
			printf("电脑下》\n");
			result = ComputerPlay(board, &count);
			if (result == 'w')
			{
				showboard(board);
				printf("电脑赢\n");
				break;
			}
			else if (result == 'e')
			{
				showboard(board);
				printf("平局\n");
				break;
			}
		}
		else if(result == 'w')
		{
			printf("玩家赢\n");
			break;
		}
		else
		{
			printf("平局\n");
			break;
		}
	}
	return 0;
}