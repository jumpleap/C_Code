#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//ʵ�ֲ�������Ϸ(1-100)

void menu()
{
	printf("*****************************************\n");
	printf("*****     1.��ʼ��Ϸ  0.������Ϸ    *****\n");
	printf("*****************************************\n");
}

void game() 
{
	int guess = 0;
	int guessNum = rand() % 100 + 1;//rand()�ܷ��ص����ֵ��32767
	//printf("%d\n", guessNum);//��ӡҪ�µ����鿴�Ƿ�����߼�

	//��ѭ�����в�����
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess < guessNum)
		{
			printf("��С��\n");
		}
		else if (guess > guessNum)
		{
			printf("�´���\n");
		}
		else
		{
			//�¶��ˣ��˳�ѭ��
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	int option = 0;
	//�������������
	srand((unsigned int)time(NULL));
	do
	{
		menu();//�˵�
		printf("��ѡ��>");
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
				printf("ѡ�����������ѡ��\n");
				break;
		}

	} while (option != 0);
	return 0;
}