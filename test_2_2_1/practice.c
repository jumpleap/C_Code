#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ָ�����д����ȱ�ݡ���ѡ����BC��
//float f[10];
//// ���������ж�f���г�ʼ���Ĵ���
//for (int i = 0; i < 10;)
//{
// //ǰ��++������������++
//	if (f[++i] == 0) //��Ӧ��ʹ�ø����������������жϣ����߾��Ȳ�ͬ
//		break;
//}

//A: for(int i = 0; i < 10;)��һ��д���� 
//B: f��float������ֱ��������ж��з��� 
//C: f[++i]Ӧ����f[i++] 
//D: û��ȱ��



//��ָ�����³���Ĵ��󡾶�ѡ����A C��
//void GetMemory(char** p, int num)
//{
//	//��������ʹ�ö���ָ�룬��ô�ж�Ӧ��ʹ��*p == NULL
//	if (NULL == p && num <= 0)//1
//		return;
//	*p = (char*)malloc(num);
//	return;
//}
//int main()
//{
//	char* str = NULL;
//	GetMemory(&str, 80); //2
//	if (NULL != str)
//	{
//		//�����ַ�����������ʹ���ַ����ĵ�ַ���ɣ�����Ҫ��ȡ��ַ
//		//��������Ϊ������Ԫ�ص��׵�ַ
//		strcpy(&str, "hello"); //3
//		printf(str); //4
//	}
//	return 0;
//}

//A : 1 B : 2 C : 3 D : 4



//�������д�����������п�������Щ����ѡ����BC��
//#include <stdio.h>
//
//typedef union
//{
//	int a;
//	struct
//	{
//		short b;
//		short c;
//	};
//}X;
//
//int main()
//{
//	X x;
//	x.a = 0x20150810;
//	//����:b,c����һ��int�ռ䣬�ӵ�λ��ʼռ��
//	printf("%x,%x\n", x.b, x.c);
//	return 0;
//}

//A: 2015,810 B: 50810,201 C: 810,2015 D:`20150,810




//�����������ִ�к����ʲô�������Ч������ѡ����ABD��
//#define MAX 255
//int main()
//{
//	unsigned char A[MAX], i;
//	//����Խ�磺0 -254
//	//��ѭ����unsigned char 2^8 -1 = 255 ,255 + 1-> 0
//	for (i = 0; i <= MAX; i++)
//		A[i] = i;
//	return 0;
//}

// A: ����Խ�� B : ��ѭ�� C : ջ��� D : �ڴ�й¶





//�������г��������Ƕ��٣�C��
#include<stdio.h>

int main()
{
	//0000 0001 --> 1
	//1 - 3
	//1 0000 0001
	//0 0000 0011
	//0 1111 1110 --> 254
	unsigned char i = 7;
	int j = 0;
	for (; i > 0; i -= 3)
	{
		++j;
	}
	printf("%d\n", j);
	return 0;
}

//A: 2 B: ��ѭ�� C: 173 D: 172