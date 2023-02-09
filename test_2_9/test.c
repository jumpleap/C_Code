#define _CRT_SECURE_NO_WARNINGS

//关于指针的概念，错误的是：(C)
//
//A.指针是变量，用来存放地址
// //正确，指针变量用来存储地址
//B.指针变量中存的有效地址可以唯一指向内存中的一块区域
// //正确
//C.野指针也可以正常使用
//D.局部指针变量不初始化就是野指针
//正确


//以下系统中，int类型占几个字节，指针占几个字节，
//操作系统可以使用的最大内存空间是多大：(C)
//
//A.32位下：4, 4, 2 ^ 32 64位下：8, 8, 2 ^ 64
//B.32位下：4, 4, 不限制 64位下：4, 8, 不限制
//C.32位下：4, 4, 2 ^ 32 64位下：4, 8, 2 ^ 64
//D.32位下：4, 4, 2 ^ 32 64位下：4, 4, 2 ^ 64


//下面代码的结果是（）
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    //
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);//0 0 3 4 5
//    }
//    return 0;
//}




//在小端机器中，下面代码输出的结果是：（ ）

//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);//0x00332211
//    return 0;
//}



//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//指向arr的首地址
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}



//打印菱形
/*
     *
   * * *
 * * * * *
   * * *
     *
	
*/
#include <stdio.h>

int main() 
{
	int len = 0;
	scanf("%d", &len);
	for (int i = 0; i < len * 2 - 1; i+=2)
	{
		for (int j = i; j < len * 2; j++)
		{
			printf(" ");
		}

		for (int j = 0; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for (int i = len; i <= len * 2; i+=2)
	{

		if (len % 2 == 1)
		{
			for (int j = 0; j <= i; j++)
			{
				printf(" ");
			}

			for (int j = i; j <= len * 2 - 1; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		else
		{
			for (int j = 1; j <= i; j++)
			{
				printf(" ");
			}

			for (int j = i; j <= len * 2; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		
	}
	
	return 0;
}