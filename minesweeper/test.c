#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("*******   1.扫雷游戏  *******\n");
	printf("*******   2.退出      *******\n");
	printf("*****************************\n");
}

void game()
{
	//设置雷
	char mine[ROWS][COLS] = { 0 };
	//扫雷过程在此过程进行
	char show[ROWS][COLS] = { 0 };

	//初始化雷区
	//雷是‘1’，非雷‘0’
	InitBoard(mine, ROWS, COLS, '0');

	//扫雷过程中，使用'*'给初始化
	InitBoard(show, ROWS, COLS, '*');

	//打印界面
	DisplayBoard(show, ROW, COL);

	//布置雷
	setMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//排查雷
	findMine(mine, show, ROW, COL);
}

int main()
{
	int option = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("你的选择有误，请重新选择~\n");
				break;
		}
	} while (option);
	return 0;
}