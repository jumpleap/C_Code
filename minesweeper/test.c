#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("*******   1.ɨ����Ϸ  *******\n");
	printf("*******   2.�˳�      *******\n");
	printf("*****************************\n");
}

void game()
{
	//������
	char mine[ROWS][COLS] = { 0 };
	//ɨ�׹����ڴ˹��̽���
	char show[ROWS][COLS] = { 0 };

	//��ʼ������
	//���ǡ�1�������ס�0��
	InitBoard(mine, ROWS, COLS, '0');

	//ɨ�׹����У�ʹ��'*'����ʼ��
	InitBoard(show, ROWS, COLS, '*');

	//��ӡ����
	DisplayBoard(show, ROW, COL);

	//������
	setMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//�Ų���
	findMine(mine, show, ROW, COL);
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
				printf("���ѡ������������ѡ��~\n");
				break;
		}
	} while (option);
	return 0;
}