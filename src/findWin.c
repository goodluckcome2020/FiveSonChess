#include "game.h"
char findWin(char board[ROW][COL], int x, int y, char chess, int count)//�����xy�����������
{
	int num = 1;
	int i = 1;
	int j = 1;
	if (count > ROW * COL)
	{
		return 'e';	//ƽ��
	}

	//if (count >= 5)
	//{
	//
	//	if (board[x][y-1] == chess && board[x][y + 1] == chess )
	//	{
	//		return 'w';			//�������м䣬�����
	//	}
	//	else if (board[x][y + 1] == chess && board[x][y + 2] == chess)
	//	{
	//		return 'w';			//��������ߣ�����
	//	}
	//	else if (board[x][y - 1] == chess && board[x][y - 2] == chess)
	//	{
	//		return 'w';			//�������ұߣ�����
	//	}

	//	else if (board[x + 1][y] == chess && board[x + 2][y] == chess)
	//	{
	//		return 'w';			//�������ϣ�����
	//	}
	//	else if (board[x - 1][y] == chess && board[x + 1][y] == chess)
	//	{
	//		return 'w';			//�������У�����
	//	}
	//	else if (board[x - 1][y] == chess && board[x - 2][y] == chess)
	//	{
	//		return 'w';			//�������£�����
	//	}
	//	else if (board[x + 1][y + 1] == chess && board[x + 2][y + 2] == chess)
	//	{
	//		return 'w';			//�������ϣ�б����
	//	}
	//	else if (board[x - 1][y - 1] == chess && board[x + 1][y + 1] == chess)
	//	{
	//		return 'w';			//�������У�б��
	//	}
	//	else if (board[x - 1][y - 1] == chess && board[x - 2][y - 2] == chess)
	//	{
	//		return 'w';			//�������£�б��
	//	}
	//	
	//	else
	//		return 'n';
	//}


	if (count >= 9)
	{
		/*�����ж�*/
		while (chess == board[x][y - i])		//���ӵط����������4�����Ǹ���
		{
			num++;
			i++;
			if (num == 5)
			{
				return 'w';
			}
		}
		/*�����ж�*/
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

		num = 1;	//��������û5���Ͱ�num��1���ж���������
		i = 1;
		/*�����ж�*/
		while (chess == board[x - i][y])		//���ӵط����ϱ�����
		{
			num++;
			i++;
			if (num == 5)
			{
				return 'w';
			}
		}
		/*�����ж�*/
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

		//�������Ҷ��ж��굽�ж�б����
		num = 1;
		i = 1;
		/*��б���ж�*/
		while (chess == board[x + i][y + i])
		{
			num++;
			i++;
			if (num == 5)
			{
				return 'w';
			}
		}
		//б����ʽ
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

