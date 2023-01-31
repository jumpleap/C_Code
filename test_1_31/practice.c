#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//如果 x=2014 ，下面函数的返回值是（C）
//int fun(unsigned int x)
//{
//	int n = 0;
//	while (x + 1)
//	{
//		n++;
//		x = x | (x + 1);
//	}
//	return n;
//}

//00000000 00000000 00000111 11011110 --> 2014
//00000000 00000000 00000111 11011111 --> 2015
//00000000 00000000 00000111 11100000 --> 2016
//A: 20 B: 21 C: 23 D 25

//代码验证
//int main()
//{
//	printf("%d\n", fun(2014));//23
//	return 0;
//}




//下列语句定义 x 为指向 int 类型变量 a 的指针，其中哪一个是正确的（B）
// 分析：x为int*类型，a为int类型
//A: int a , *x = a; 
//B: int a , *x = &a; 
//C: int *x = &a , a; 
//D: int a , x = a;

//代码验证
//int main()
//{
//	//int a, * x = a;
//	//printf("%d\n", *x);//错误
//	
//	//int a, * x = &a;//对
//	//int* x = &a, a;//a未定义
//	//int a, x = a;//均是int
//	return 0;
//}



//下面有关空指针和未初始化指针，说法错误的是（A）
//A: 对0x0这个地址取值是非法的 //可以从0x0地址开始
//B : 空指针可以确保不指向任何对象或函数; 而未初始化指针则可能指向任何地方
//C : 空指针与任何对象或函数的指针值都不相等
//D : malloc在其内存分配失败时返回的是一个未初始化的指针




//若有定义 int a[8]; ，则以下表达式中不能代表数组元素 a[1] 的地址的是（C）
//A: &a[0] + 1 B : &a[1] C : &a[0]++D : a + 1

//代码验证
//int main()
//{
//	int a[8] = { 0 };
//	printf("%p\n", &a[0] + 1);
//	printf("%p\n", &a[1]);
//	//printf("%p\n", &a[0]++);//地址不可修改
//	printf("%p\n", a + 1);
//	return 0;
//}



//以下选项中，对基本类型相同的两个指针变量不能进行运算的运算符是（A）
//A: +B : -C : = D : ==

//代码验证
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	int* p2 = &a;
//	p1 = p2;
//	printf("%p\n", p1 - p2);
//	//printf("%p\n", p1 + p2);//错误
//	printf("%d\n", p1 == p2);
//	return 0;
//}
//结论：指针变量只能减不能加




/*
描述
	有一种兔子，从出生后第3个月起每个月都生一只兔子，小兔子长到第三个月后每个月又生一只兔子。
	例子：假设一只兔子第3个月出生，那么它第5个月开始会每个月生一只兔子。
	一月的时候有一只兔子，假如兔子都不死，问第n个月的兔子总数为多少？
数据范围：
	输入满足：1≤n≤31
输入描述：
	输入一个int型整数表示第n个月

输出描述：
输出对应的兔子总数
*/

/*
问题分析：
第一个月：1只 第二个月：1只 第三个月：2只 第四个月：3只  第五个月：5只
第6个月：8只  第七个月：13只……由此可知，斐波那契的是本质
*/

//#include <stdio.h>
//
//int getSum(int n)
//{
//    //1 1 2 3 5 8 13……斐波那契数列
//    //法一：递归
//    // if(n == 1 || n== 2)
//    //     return 1;
//    // else 
//    //     return getSum(n-1) + getSum(n-2);
//
//    //法二：循环迭代
//    //迭代变量
//    int n1 = 1;
//    int n2 = 1;
//    int sum = 0;//累计
//    //n小于3个月的情况
//    if (n < 3)
//        return 1;
//
//    //循环迭代
//    while (n >= 3)
//    {
//        sum = n1 + n2;
//        n2 = n1;
//        n1 = sum;
//        n--;
//    }
//    return sum;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = getSum(n);
//    printf("%d\n", sum);
//    return 0;
//}


/*
描述
    数列的定义如下：数列的第一项为n，以后各项为前一项的平方根，
    求数列的前m项的和。
输入描述：
    输入数据有多组，每组占一行，由两个整数n（n<10000）和m(m<1000)组成，
    n和m的含义如前所述。
输出描述：
    对于每组输入数据，输出该数列的和，每个测试实例占一行，
    要求精度保留2位小数。
*/

#include <stdio.h>
#include <math.h>

double getSum(double n, int m)
{
    double sum = 0;//计和
    while (m--)
    {
        sum += n;
        n = sqrt(n);//开平方根
    }
    return sum;
}

int main()
{
    double n = 0;
    int m = 0;
    while (scanf("%lf %d", &n, &m) != EOF)
    {
        double sum = getSum(n, m);
        printf("%.2lf\n", sum);
    }
    return 0;
}