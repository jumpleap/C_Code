#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����������������Χ-231~231-1�������������������

/*
//��һ����ʱ��������
int main()
{
	int a = 0, b = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		int temp = a;
		a = b;
		b = temp;
		printf("a=%d,b=%d\n",a, b);
	}
	return 0;
}
*/

/*
//������Ͷ����
int main()
{
	int a = 0, b = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		printf("a=%d,b=%d\n", b, a);//����λ��
	}
	return 0;
}
*/


//���������
//���ʱ������������������ȵĻ������Ϊ0
//0���κ���������������
int main()
{
	int a = 0, b = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		a = a ^ b;
		b = a ^ b; // b = a ^ b ^ b = a
		a = a ^ b; // a = a ^ a ^ b = b
		printf("a=%d,b=%d\n", a, b);
	}
	return 0;
}