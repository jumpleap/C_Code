#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//static������
//1) ���ξֲ�����
//2������ȫ�ֱ���
//3�����κ���

//void test()
//{
//	static int j = 0;//static���ξֲ�����,�ֲ�����ֻ��ʼ��һ��
//	j++;
//	printf("%d ", j);
//}
//
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		test();
//		//printf("%d", j);
//	}
//	return 0;
//}


extern int age;
//2)static����ȫ�ֱ���:ȫ�ֱ���ֻ���ڸ��ļ���ʹ�ã����ܱ������ļ�����
//int main()
//{
//	printf("%d ", age);
//	return 0;
//}


//extern void test();
//
//int main()
//{
//	test();
//	return 0;
//}



//1)num & ~num
//7
//00000000 00000000 00000000 00000111 -- 7
//11111111 11111111 11111111 11111000  --~num
//00000000 00000000 00000000 00000000 &

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", num & ~num);
//	return 0;
//}


//�����Ʋ����еĵ�λ��0��1
//num | (num + 1)
//11111111 11111111 11111111 11111111 --> -1
//00000000 00000000 00000000 00000000
//11111111 11111111 11111111 11111111

//00000000 00000000 00000000 00000110  --> 6
//00000000 00000000 00000000 00000101  --> 5
//00000000 00000000 00000000 00000111  --> 7
//int main()
//{
//	int num = 6;
//	printf("%d\n", num | (num + 1));
//	return 0;
//}


//������������ֵ

//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d, b= %d\n", b, a);
//	return 0;
//}


//int main()
//{
//	int tmp = 0;
//	int a = 10;
//	int b = 20;
//
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d %d\n", a, b);
//	return 0;
//}


//�������㣨�������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n", a, b);
//	return 0;
//}



//��λ���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", 10 ^ 10);
//
//	a = a ^ b;
//	b = a ^ b;//b = a ^ b ^ b;
//	a = a ^ b;// a = a ^ b ^ a;
//	printf("%d %d", a, b);
//	return 0;
//}