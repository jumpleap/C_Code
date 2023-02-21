#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char a = 0xb6;
//	//10110110
//	//11111111 11111111 11111111 10110110  整型提升
//	//10110110  截断
//	//10110101
//	//11001010  原码 ： -74
//	//打印查看结果
//	printf("%d\n", a);//-74
//	
//	short b = 0xb600;
//	//10110110 00000000 原码
//	//11111111 11111111 10110110 00000000 --> 整型提升
//	//10110110 00000000  截断
//	//10110101 11111111
//	//11001010 00000000  原码：-18944
//	//打印查看结果
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
//	//注：只要进行运算，那就会发生整型提升
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
//	//注：在运算的时候才会出现整型提升，写在上面是为了方便
//	//00000011  : 3
//	//01111111  : 127
//	//10000010  结果
//	//11111111 11111111 11111111 10000010
//	//10000010  截断
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
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
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
//	//在VS2019中，栈中会留出两个int的空间
//	//i和arr[12]占用了同一个内存空间，所有arr[12]的改变影响了i
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

//加const是为了防止不小心修改了arr
int my_strlen(const char* arr)
{
	assert(arr);//防止arr是NULL
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