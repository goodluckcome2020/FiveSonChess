#include "game.h"
void menu()
{
	int input = 0;
	do
	{
		
		printf("��ѡ��0(�˳�)/1(��ʼ)\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳�\n");
			break;
		case 1:
			printf("��ʼ\n");
			game();
			break;
		default:
			printf("��������\n");
			break;
		}
	} while (input);
}