#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//初始化
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	//初始化法一
	/*for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}*/

	//初始化法二
	memset(&board[0][0], set, sizeof(board[0][0]) * rows * cols);
}


//打印界面
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	//打印横向索引
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (int i = 1; i <= row; i++)
	{
		//打印竖向索引
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


//布置雷
void setMine(char mine[ROWS][COLS], int row, int col)
{
	int i = 0;

	//随机设置雷
	while (i < MINECOUNT)
	{
		//随机生成坐标值
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		//判断已经设置过雷
		if (mine[x][y] == '1')
		{
			continue;
		}

		//设置雷
		mine[x][y] = '1';
		i++;
	}
}

//判断周围有多少个坐标
int isMine(char mine[ROWS][COLS], int x, int y)
{
	//判断周围八个坐标有几个雷
	return (mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
		+ mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1]
		+ mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');
}

//排查雷
void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	
	while (count < row*col - MINECOUNT)
	{
		printf("请输入你要排查的坐标：");
		scanf("%d %d", &x, &y);

		//坐标判断
		if (x < 1 || x > row || y < 1 || y > col)
		{
			printf("坐标非法，请重新输入~\n");
			continue;
		}
		
		//判断该地方是不是雷
		if (mine[x][y] == '1')
		{
			printf("踩到雷了，被炸死~\n");
			DisplayBoard(mine, row, col);
			break;
		}

		//获取周围有几个雷
		int ret = isMine(mine, x, y) + '0';//+'0'免得ASCII码值对应不上
		show[x][y] = ret;

		//排雷成功，排查量少1
		count++;
		DisplayBoard(show, row, col);
	}

	//排雷成功的情况
	if (count == row * col - MINECOUNT)
	{
		printf("恭喜你，排雷成功~\n");
	}
}