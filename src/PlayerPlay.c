#include "game.h"
char PlayerPlay(char board[ROW][COL],int* count)
{
	char result = ' ';
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("�����룺��\n");
		scanf("%d %d", &x, &y);
		if (x < 1 || y< 1 || x > ROW || y > COL || board[x-1][y-1] != ' ')
		{
			printf("��������Υ��\n");
			
		}
		else
		{
			board[x - 1][y - 1] = '*';
			(*count)++;
		
			result =  findWin(board, x - 1, y - 1, '*', *count);
			break;
		}
	}
	return result;
}