#include "game.h"
void menu()
{
	int input = 0;
	do
	{
		
		printf("请选择0(退出)/1(开始)\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出\n");
			break;
		case 1:
			printf("开始\n");
			game();
			break;
		default:
			printf("输入有误\n");
			break;
		}
	} while (input);
}