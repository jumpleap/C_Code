#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	//C������һ���ֺ�(;)�����ľ���һ�����
//	;//�����
//	int a = 10;//���
//	return 0;//�����һ�����
//}

//C���Ե������ࣺ���ʽ��䡢����������䡢������䡢������䡢�����
//void print()
//{
//	printf("cute!\n");
//}
//
//int main()
//{
//	//1.���ʽ���
//	int a = 10;
//	//2.�����������
//	print();
//	//3.�������
//	int i = 0;
//	for (i = 0; i < 10; i++);
//	//i<10�ǿ������
//	//4.�������
//	int b = (a++, ++a, a--);
//	return 0;
//}


//1��C�����У�0��NULL��ʾ�٣���0��ʾ��
//2��һ��{}����һ�������
//int main()
//{
//	int a = 0;
//	int* p = NULL;
//
//	if (a)
//	{
//		printf("hello\n");
//	}
//	else
//	{
//		printf("see you\n");//see you
//	}
//
//	if (p)
//	{
//		printf("null\n");
//	}
//	else
//	{
//		printf("true\n");//true
//	}
//	return 0;
//}


//����֧���:if�����ʽ��
//int main()
//{
//	int a = 1;
//	if (a)
//	{
//		printf("a = %d\n", a);//1
//	}
//	return 0;
//}

//˫��֧��if�����ʽ��{ } else{ }
//���if�ı��ʽΪ�棬ִ��if{ }�������䣬��ִ֮��else{ }��������
//int main()
//{
//	int a = 0;
//	if (a)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");//haha
//	}
//	return 0;
//}

//���֧��if�����ʽ��{ } else if�����ʽ��{ } else if�����ʽ��{ } ���� else {}
//���� �Ǹ��ı��ʽΪ����ִ���Ǹ����������Ϊ�棬��ִ������else{ }�еĴ���

//int main()
//{
//	int a = 10;
//	int b = 11;
//	int c = 10;
//
//	if (a == b)
//	{
//		printf("a����b\n");
//	}
//	else if (b == c)
//	{
//		printf("b����c\n");
//	}
//	else if (a == c)
//	{
//		printf("a����c\n");//a����c
//	}
//	else
//	{
//		printf("������������ȣ�����\n");
//	}
//	return 0;
//}


////if�е��໥Ƕ��
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age > 18)
//	{
//		if (age > 30)
//		{
//			printf("����\n");
//		}
//		else
//		{
//			printf("����\n");
//		}
//	}
//	else
//	{
//		printf("δ����\n");
//	}
//	return 0;
//}

//����else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("haha\n");
//		else
//			printf("hehe\n");
//	return 0;
//}


//i.�ж�һ�����ǲ�������
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (num % 2 == 0)
//	{
//		printf("%d��ż��\n", num);
//	}
//	else
//	{
//		printf("%d������\n", num);
//	}
//	return 0;
//}


//ii.�ж�һ�����ǲ�������
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int i = 0;
//	for (i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//		{
//			printf("%d��������\n", num);
//			return 0;
//		}
//	}
//	printf("%d������\n", num);
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//		case 1:
//			printf("Monday\n");
//			break;
//		case 2:
//			printf("Tuesday\n");
//			break;
//		case 3:
//			printf("Wednesday\n");
//			break;
//		case 4:
//			printf("Thursday\n");
//			break;
//		case 5:
//			printf("Friday\n");
//			break;
//		case 6:
//			printf("Saturday\n");
//			break;
//		case 7:
//			printf("Sunday\n");
//			break;
//		default:
//			printf("��Ҳ��֪��ʲôday��~\n");
//			break;
//	}
//	return 0;
//}


//switch(���ʽ)�еı��ʽ���������ͱ��ʽ������ʹ���������ͣ��򱨴�
//���ͱ��ʽ������char��short��int��long��long long
//int main()
//{
//	char ch = 'a';
//	scanf("%c", &ch);
//	switch (ch)
//	{
//		case 'a':
//			printf("a\n");
//			break;
//		case 'b':
//			printf("b\n");
//			break;
//		case 'c':
//			printf("c\n");
//			break;
//		case 'd':
//			printf("d\n");
//			break;
//		default:
//			printf("error\n");
//			break;
//	}
//
//	//double db = 0;
//	//scanf("%lf", &db);
//	//switch (db){} //���󣬱��ʽ�����ǳ����������������
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	int opt = 10;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//		//case opt://����opt�Ǳ����������������ͳ���ֵ
//		//case 1.3://����1.3�Ǹ����������������ͳ���ֵ
//		case 1://��ȷ��1�����ͳ���ֵ
//			printf("Monday\n");
//			break;
//	}
//	return 0;
//}



//switch����Ƕ��ʹ��
//int main()
//{
//	int num = 1;
//	int a = 0;
//	int b = 10;
//
//	switch (num)
//	{
//		case 1:
//			switch (b)
//			{
//				case 10:
//					a++;
//					break;
//				case 20:
//					b++;
//					a++;
//					break;
//				default:
//					b++;
//					break;
//			}
//			break;
//		default:
//			break;
//	}
//	printf("%d %d\n", a, b);//1 10
//	return 0;
//}

int main()
{
	int n = 1;
	int m = 2;
	
	switch (n)
	{
		case 1:
			m++;
		case 2:
			n++;
		case 3:
			switch (n)
			{
				case 1:
					n++;
				case 2:
					n++;
					m++;
					break;
			}
		case 4:
			m++;
			break;
		default:
			break;
	}
	printf("%d %d\n", m, n);// 5 3
	return 0;
}