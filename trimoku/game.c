#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	//初始化法1：循环
	/*for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}*/

	//初始化法2：取board数组的首地址，然后把数组中的所有字符置为''
	memset(&board[0][0], ' ' , sizeof(board[0][0]) * row * col);
}


//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	//打印棋盘法1：直接每行每行输出
	/*for (int i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i < row - 1)
			printf("---|---|---\n");
	}*/

	//打印棋盘法2：找规律输出
	for (int i = 0; i < row; i++)
	{
		//先搞定数组的输出位置
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//把每个字符输出
			if (j < col - 1)
				printf("|");//最后一个|不输出
		}
		printf("\n");

		//打印的---|要少一行
		if (i < row - 1)
		{
			for (int i = 0; i < row; i++)
			{
				printf("---");
				if (i < row - 1)
					printf("|");//最后一个|不输出
			}
			printf("\n");
		}
	}
}


//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("玩家下棋：\n");
	int x = 0;
	int y = 0;
	
	while (1)
	{
		printf("请输入你要下棋的位置(坐标范围:(1-%d,1-%d))：", row, col);
		scanf("%d %d", &x, &y);

		//把不存在的情况排除
		if (x<1 || x > row || y < 1 || y > col)
		{
			printf("你输出的坐标错误，请重新输入~\n\n");
			continue;
		}
		
		//排除坐标已经占用的情况
		if (board[x - 1][y - 1] != ' ')
		{
			printf("该位置已经被占用了，请重新输入坐标~\n\n");
			continue;
		}

		board[x - 1][y - 1] = '*';
		break;
	}
}

//判断棋盘是否已满
int IsFull(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			//判断坐标是不是为空格
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

//判断输赢：*：玩家赢，#：电脑赢 q：平局 c：继续
char IsWin(char board[ROW][COL], int row, int col)
{
	//判断横着是否连成3个
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}

	//判断竖着是否连成3个
	for (int i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	
	//判断交叉线是否连成3个
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[0][2];

	//判断棋盘是否已满
	if (IsFull(board, row, col))
	{
		printf("棋盘已满\n");
		return 'q';
	}

	//都没有的情况
	return 'c';
}

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋：\n");
	int x = 0;
	int y = 0;
	
	while (1)
	{
		x = rand() % row;
		y = rand() % col;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}