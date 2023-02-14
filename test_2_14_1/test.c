#define _CRT_SECURE_NO_WARNINGS

//关于VS调试快捷键说法错误的是：（A）
//
//A.F5 - 是开始执行，不调试
// F5是开始调试，CTRL + F5是开始执行
//B.F10 - 是逐过程调试，遇到函数不进入函数
//C.F11 - 是逐语句调试，可以观察调试的每个细节
//D.F9是设置断点和取消断点



//语言中哪一种形式声明了一个指向char类型变量的指针p，p的值不可修改，
//但p指向的变量值可修改？(A)

//A.const char* p
//B.char const* p
//C.char* const p
//D.const char* const p

//代码验证
//#include <stdio.h>
//
//int main()
//{
//	const int a = 5;
//	int b = 10;
//	const int* p1 = &a;
//	//*p1 = 10;
//	p1 = &b;
//	return 0;
//}



//以下关于指针的说法, 正确的是(A)
//
//A.int* const p与int const* p等价
//B.const int* p与int* const p等价
// 错误，不等价，第一个p可以改变指向的变量，第二个不能，但是第二个能改变值
//C.const int* p与int const* p等价
//D.int* p[10]与int(*p)[10]等价
//指针数组        数组指针



//程序死循环解释
//VS开发环境调试下面的代码，画图解释下面代码的问题


//分析出现死循环的原因：i的地址和arr[12]的地址相同
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}




