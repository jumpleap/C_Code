#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char a = 0xb6;
//	//10110110
//	//11111111 11111111 11111111 10110110  ��������
//	//10110110  �ض�
//	//10110101
//	//11001010  ԭ�� �� -74
//	//��ӡ�鿴���
//	printf("%d\n", a);//-74
//	
//	short b = 0xb600;
//	//10110110 00000000 ԭ��
//	//11111111 11111111 10110110 00000000 --> ��������
//	//10110110 00000000  �ض�
//	//10110101 11111111
//	//11001010 00000000  ԭ�룺-18944
//	//��ӡ�鿴���
//	printf("%d\n", b);//-18944
//
//	int c = 0xb6000000;
//
//	if (a == 0xb6)
//	{
//		printf("a\n");
//	}
//	if (b == 0xb600)
//	{
//		printf("b\n");
//	}
//	if (c == 0xb6000000)
//	{
//		printf("c\n");//c
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char c = 0;
//	printf("%u\n", sizeof(c));//1
//
//	//ע��ֻҪ�������㣬�Ǿͻᷢ����������
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char a = 3;
//	//00000101
//	char b = 127;
//	//01111111
//
//	char c = a + b;
//	//ע���������ʱ��Ż��������������д��������Ϊ�˷���
//	//00000011  : 3
//	//01111111  : 127
//	//10000010  ���
//	//11111111 11111111 11111111 10000010
//	//10000010  �ض�
//	//10000001
//	//11111110  -126
//	printf("%d\n", c); //-126
//	return 0;
//}

//#include <stdio.h>
//
//void swap()
//{
//
//}
//
//int main()
//{
//	int i = 0;
//	int count = 1;
//	swap();
//	for (i = 0; i < 10; i++)
//	{
//		count++;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}





//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	//��VS2019�У�ջ�л���������int�Ŀռ�
//	//i��arr[12]ռ����ͬһ���ڴ�ռ䣬����arr[12]�ĸı�Ӱ����i
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


#include <stdio.h>
#include <string.h>
#include <assert.h>

//��const��Ϊ�˷�ֹ��С���޸���arr
int my_strlen(const char* arr)
{
	assert(arr);//��ֹarr��NULL
	int count = 0;
	while (*arr++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[100] = "husdghfjgfghkshf";
	//int len = strlen(arr);
	//printf("%d\n", len);//16

	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}