#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//��ʼ��
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	//��ʼ����һ
	/*for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}*/

	//��ʼ������
	memset(&board[0][0], set, sizeof(board[0][0]) * rows * cols);
}


//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	//��ӡ��������
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (int i = 1; i <= row; i++)
	{
		//��ӡ��������
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


//������
void setMine(char mine[ROWS][COLS], int row, int col)
{
	int i = 0;

	//���������
	while (i < MINECOUNT)
	{
		//�����������ֵ
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		//�ж��Ѿ����ù���
		if (mine[x][y] == '1')
		{
			continue;
		}

		//������
		mine[x][y] = '1';
		i++;
	}
}

//�ж���Χ�ж��ٸ�����
int isMine(char mine[ROWS][COLS], int x, int y)
{
	//�ж���Χ�˸������м�����
	return (mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
		+ mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1]
		+ mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');
}

//�Ų���
void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	
	while (count < row*col - MINECOUNT)
	{
		printf("��������Ҫ�Ų�����꣺");
		scanf("%d %d", &x, &y);

		//�����ж�
		if (x < 1 || x > row || y < 1 || y > col)
		{
			printf("����Ƿ�������������~\n");
			continue;
		}
		
		//�жϸõط��ǲ�����
		if (mine[x][y] == '1')
		{
			printf("�ȵ����ˣ���ը��~\n");
			DisplayBoard(mine, row, col);
			break;
		}

		//��ȡ��Χ�м�����
		int ret = isMine(mine, x, y) + '0';//+'0'���ASCII��ֵ��Ӧ����
		show[x][y] = ret;

		//���׳ɹ����Ų�����1
		count++;
		DisplayBoard(show, row, col);
	}

	//���׳ɹ������
	if (count == row * col - MINECOUNT)
	{
		printf("��ϲ�㣬���׳ɹ�~\n");
	}
}