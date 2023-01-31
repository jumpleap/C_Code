#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("**********************************\n");
	printf("*******         1.play     *******\n");
	printf("*******         0.exit     *******\n");
	printf("**********************************\n");
}

void game()
{
	char board[ROW][COL];
	char ch = '0';

	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		//打印棋盘
		DisplayBoard(board, ROW, COL);
		
		//判断输赢
		ch = IsWin(board, ROW, COL);
		if (ch != 'c')
			break;

		//电脑下棋
		ComputerMove(board, ROW, COL);
		//打印棋盘
		DisplayBoard(board, ROW, COL);

		//判断输赢
		ch = IsWin(board, ROW, COL);
		if (ch != 'c')
			break;
	}

	//判断情况：玩家、电脑赢、输、平局的情况
	if (ch == '*')
	{
		printf("玩家赢\n\n");
	}
	else if (ch == '#')
	{
		printf("电脑赢\n\n");
	}
	else
	{
		printf("平局\n\n");
	}
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
				printf("你选择错误，请重新选择~\n");
				break;
		}

	} while (option);
	return 0;
}