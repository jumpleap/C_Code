#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����һ��int��Χ�ڵ�����Ҫ�����������
*/

int main()
{
	int num = 0;
	while (scanf("%d", &num) != EOF)
	{
		while (num)
		{
			//��ӡβ��
			printf("%d", num % 10);
			//�õ���һ��β��
			num /= 10;
		}
		puts("");//����
	}
	return 0;
}