#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//д���뽫�������������Ӵ�С�����
//��һ����ʱ��������

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		getchar();//���ڽ��ܻس���
//		int tmp = 0;//��ʱ���������ڽ���
//
//		//�ж�a,b�Ĵ�С����b���򽻻�
//		if (a < b)
//		{
//			tmp = a;
//			a = b;
//			b = tmp;
//		}
//		//�ж�a,c�Ĵ�С����c���򽻻�
//		if (a < c)
//		{
//			tmp = a;
//			a = c;
//			c = tmp;
//		}
//		//�ж�b,c�Ĵ�С����c���򽻻�
//		if (b < c)
//		{
//			tmp = b;
//			b = c;
//			c = tmp;
//		}
//		printf("%d %d %d\n", a, b, c);
//	}
//	return 0;
//}


//������ָ�뷨
void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		getchar();//���ڽ��ջس���
		if (a < b)
			swap(&a, &b);
		if (a < c)
			swap(&a, &c);
		if (b < c)
			swap(&b, &c);
		printf("%d %d %d\n", a, b, c);
	}
	return 0;
}