#include "game.h"

char ComputerPlay(char board[ROW][COL],int* count)
{
	char result = ' ';
	
	while (1)
	{
		int x = rand() % ROW;	//0~9
		int y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'x';
			(*count)++;
			
			result = findWin(board, x, y, 'x', *count);
			break;
		}
		
	}
	return result;
}