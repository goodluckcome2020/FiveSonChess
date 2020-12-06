#include "game.h"
char findWin(char board[ROW][COL], int x, int y, char chess, int count)//这里的xy是数组的坐标
{
	int num = 1;
	int i = 1;
	int j = 1;
	if (count > ROW * COL)
	{
		return 'e';	//平局
	}

	//if (count >= 5)
	//{
	//
	//	if (board[x][y-1] == chess && board[x][y + 1] == chess )
	//	{
	//		return 'w';			//棋子在中间，横向加
	//	}
	//	else if (board[x][y + 1] == chess && board[x][y + 2] == chess)
	//	{
	//		return 'w';			//棋子在左边，横向
	//	}
	//	else if (board[x][y - 1] == chess && board[x][y - 2] == chess)
	//	{
	//		return 'w';			//棋子在右边，横向
	//	}

	//	else if (board[x + 1][y] == chess && board[x + 2][y] == chess)
	//	{
	//		return 'w';			//棋子在上，竖向
	//	}
	//	else if (board[x - 1][y] == chess && board[x + 1][y] == chess)
	//	{
	//		return 'w';			//棋子在中，竖向
	//	}
	//	else if (board[x - 1][y] == chess && board[x - 2][y] == chess)
	//	{
	//		return 'w';			//棋子在下，竖向
	//	}
	//	else if (board[x + 1][y + 1] == chess && board[x + 2][y + 2] == chess)
	//	{
	//		return 'w';			//棋子在上，斜向右
	//	}
	//	else if (board[x - 1][y - 1] == chess && board[x + 1][y + 1] == chess)
	//	{
	//		return 'w';			//棋子在中，斜向
	//	}
	//	else if (board[x - 1][y - 1] == chess && board[x - 2][y - 2] == chess)
	//	{
	//		return 'w';			//棋子在下，斜向
	//	}
	//	
	//	else
	//		return 'n';
	//}


	if (count >= 9)
	{
		/*向左判断*/
		while (chess == board[x][y - i])		//下子地方的左边连续4个都是该子
		{
			num++;
			i++;
			if (num == 5)
			{
				return 'w';
			}
		}
		/*向右判断*/
		i = 1;
		while (chess == board[x][y + i])
		{
			num++;
			i++;
			if (num == 5)
			{
				return 'w';
			}
		}

		num = 1;	//左右连续没5个就把num归1，判断上下连续
		i = 1;
		/*向上判断*/
		while (chess == board[x - i][y])		//下子地方的上边连续
		{
			num++;
			i++;
			if (num == 5)
			{
				return 'w';
			}
		}
		/*向下判断*/
		i = 1;	
		while (chess == board[x + i][y])
		{
			num++;
			i++;
			if (num == 5)
			{
				return 'w';
			}
		}

		//上下左右都判断完到判断斜方向
		num = 1;
		i = 1;
		/*向斜下判断*/
		while (chess == board[x + i][y + i])
		{
			num++;
			i++;
			if (num == 5)
			{
				return 'w';
			}
		}
		//斜向上式
		i = 1;
		while (chess == board[x - i][y - i])
		{
			num++;
			i++;
			if (num == 5)
			{
				return 'w';
			}
		}
		return 'n';

	}
	else
		return 'n';
}

