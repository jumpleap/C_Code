#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����һ������������ʮλ��

/*
//��һ��/10%10 --> /10��õ�10ʮλ���λ��%10�õ���λ
int main()
{
	int num = 0;
	while (scanf("%d", &num) != EOF)
	{
		printf("num��ʮλ���ǣ�%d\n", num / 10 % 10);
	}
	return 0;
}
*/

//������%100/10
//��λ��%10,ʮλ��%100/10,ǧλ��%1000/10

int main()
{
	int num = 0;
	while (scanf("%d", &num) != EOF)
	{
		printf("num��ʮλ���ǣ�%d\n", num %100 / 10);
	}
	return 0;
}