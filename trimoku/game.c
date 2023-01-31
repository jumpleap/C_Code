#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col)
{
	//��ʼ����1��ѭ��
	/*for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}*/

	//��ʼ����2��ȡboard������׵�ַ��Ȼ��������е������ַ���Ϊ''
	memset(&board[0][0], ' ' , sizeof(board[0][0]) * row * col);
}


//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	//��ӡ���̷�1��ֱ��ÿ��ÿ�����
	/*for (int i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i < row - 1)
			printf("---|---|---\n");
	}*/

	//��ӡ���̷�2���ҹ������
	for (int i = 0; i < row; i++)
	{
		//�ȸ㶨��������λ��
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//��ÿ���ַ����
			if (j < col - 1)
				printf("|");//���һ��|�����
		}
		printf("\n");

		//��ӡ��---|Ҫ��һ��
		if (i < row - 1)
		{
			for (int i = 0; i < row; i++)
			{
				printf("---");
				if (i < row - 1)
					printf("|");//���һ��|�����
			}
			printf("\n");
		}
	}
}


//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("������壺\n");
	int x = 0;
	int y = 0;
	
	while (1)
	{
		printf("��������Ҫ�����λ��(���귶Χ:(1-%d,1-%d))��", row, col);
		scanf("%d %d", &x, &y);

		//�Ѳ����ڵ�����ų�
		if (x<1 || x > row || y < 1 || y > col)
		{
			printf("������������������������~\n\n");
			continue;
		}
		
		//�ų������Ѿ�ռ�õ����
		if (board[x - 1][y - 1] != ' ')
		{
			printf("��λ���Ѿ���ռ���ˣ���������������~\n\n");
			continue;
		}

		board[x - 1][y - 1] = '*';
		break;
	}
}

//�ж������Ƿ�����
int IsFull(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			//�ж������ǲ���Ϊ�ո�
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

//�ж���Ӯ��*�����Ӯ��#������Ӯ q��ƽ�� c������
char IsWin(char board[ROW][COL], int row, int col)
{
	//�жϺ����Ƿ�����3��
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}

	//�ж������Ƿ�����3��
	for (int i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	
	//�жϽ������Ƿ�����3��
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[0][2];

	//�ж������Ƿ�����
	if (IsFull(board, row, col))
	{
		printf("��������\n");
		return 'q';
	}

	//��û�е����
	return 'c';
}

//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("�������壺\n");
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