#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//指出下列代码的缺陷【多选】（BC）
//float f[10];
//// 假设这里有对f进行初始化的代码
//for (int i = 0; i < 10;)
//{
// //前置++：先自增，再++
//	if (f[++i] == 0) //不应该使用浮点数和整数进行判断，两者精度不同
//		break;
//}

//A: for(int i = 0; i < 10;)这一行写错了 
//B: f是float型数据直接做相等判断有风险 
//C: f[++i]应该是f[i++] 
//D: 没有缺陷



//请指出以下程序的错误【多选】（A C）
//void GetMemory(char** p, int num)
//{
//	//错误，这里使用二级指针，那么判断应该使用*p == NULL
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
//		//错误，字符串复制这里使用字符串的地址即可，不需要再取地址
//		//数组名即为数组首元素的首地址
//		strcpy(&str, "hello"); //3
//		printf(str); //4
//	}
//	return 0;
//}

//A : 1 B : 2 C : 3 D : 4



//请问下列代码的输出结果有可能是哪些【多选】（BC）
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
//	//解释:b,c共享一个int空间，从低位开始占用
//	printf("%x,%x\n", x.b, x.c);
//	return 0;
//}

//A: 2015,810 B: 50810,201 C: 810,2015 D:`20150,810




//下面这个程序执行后会有什么错误或者效果【多选】（ABD）
//#define MAX 255
//int main()
//{
//	unsigned char A[MAX], i;
//	//数组越界：0 -254
//	//死循环：unsigned char 2^8 -1 = 255 ,255 + 1-> 0
//	for (i = 0; i <= MAX; i++)
//		A[i] = i;
//	return 0;
//}

// A: 数组越界 B : 死循环 C : 栈溢出 D : 内存泄露





//请问下列程序的输出是多少（C）
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

//A: 2 B: 死循环 C: 173 D: 172