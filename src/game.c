#include "game.h"

int game()
{
	
	srand((unsigned int)time(NULL));
	int count = 0;	//���Ӵ���
	char result = ' ';
	char board[ROW][COL] = { 0 };
	Initboard(board);
	while (1)
	{	
		showboard(board);
		printf("����¡�\n");
		result = PlayerPlay(board,&count);
		showboard(board);
		if (result == 'n')
		{
			printf("�����¡�\n");
			result = ComputerPlay(board, &count);
			if (result == 'w')
			{
				showboard(board);
				printf("����Ӯ\n");
				break;
			}
			else if (result == 'e')
			{
				showboard(board);
				printf("ƽ��\n");
				break;
			}
		}
		else if(result == 'w')
		{
			printf("���Ӯ\n");
			break;
		}
		else
		{
			printf("ƽ��\n");
			break;
		}
	}
	return 0;
}