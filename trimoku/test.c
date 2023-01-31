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

	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		//��ӡ����
		DisplayBoard(board, ROW, COL);
		
		//�ж���Ӯ
		ch = IsWin(board, ROW, COL);
		if (ch != 'c')
			break;

		//��������
		ComputerMove(board, ROW, COL);
		//��ӡ����
		DisplayBoard(board, ROW, COL);

		//�ж���Ӯ
		ch = IsWin(board, ROW, COL);
		if (ch != 'c')
			break;
	}

	//�ж��������ҡ�����Ӯ���䡢ƽ�ֵ����
	if (ch == '*')
	{
		printf("���Ӯ\n\n");
	}
	else if (ch == '#')
	{
		printf("����Ӯ\n\n");
	}
	else
	{
		printf("ƽ��\n\n");
	}
}

int main()
{
	int option = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("��ѡ�����������ѡ��~\n");
				break;
		}

	} while (option);
	return 0;
}