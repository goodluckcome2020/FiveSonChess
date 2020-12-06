#include "game.h"
void showboard(char board[ROW][COL])
{
	

	for (int j = 0; j < COL; j++)
	{
		printf(" ___");
	}
	printf("\n");

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("|");
			printf(" %c ", board[i][j]);
				
		}
		printf("|");
		printf("\n");

		for (int j = 0; j < COL; j++)
		{
			printf("|");
			printf("___");
			
		}
		printf("|");
	
		printf("\n");
		
	}
}