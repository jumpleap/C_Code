#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    等差数列 2，5，8，11，14。。。。（从 2 开始的 3 为公差的等差数列）
    输出求等差数列前n项和。
数据范围：
    1≤n≤1000
输入描述：
    输入一个正整数n。
输出描述：
    输出一个相加后的整数。
*/

//int getArithSum(int n)
//{
//    int i = 0;
//    int k = 2;
//    int sum = 0;
//
//    //k是差距为3的等差数列
//    for (i = 0, k = 2; i < n; i++, k += 3)
//    {
//        //累加
//        sum += k;
//    }
//    return sum;//返回结果
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int sum = getArithSum(n);
//    printf("%d\n", sum);
//    return 0;
//}



//已知函数的原型是： int fun(char b[10], int* a); 
//设定义： char c[10]; int d; ，正确的调用语句是（A）

//A: fun(c, &d); B: fun(c, d); C: fun(&c, &d); D: fun(&c, d);



//请问下列表达式哪些会被编译器禁止【多选】（ABCD）
//int a = 248, b = 4;
//int const* c = 21;
//const int* d = &a;
//int* const e = &b;
//int const* const f = &a;
//A: *c = 32; B: *d = 43 C: e=&a D: f=0x321f

//int main()
//{
//    int a = 248, b = 4;
//    int const* c = 21;
//    const int* d = &a;
//    int* const e = &b;
//    int const* const f = &a;
//
//    //*c = 32;//错误，不可修改
//    //*d = 43;//错误，不可修改
//    //e = &a;//错误，不可修改
//    //f = 0x321f //错误，不可修改
//    return 0;
//}


//以下程序的输出结果为（***） 
//int i;
//void prt()
//{
//    //这里的i使用的是全局变量
//    for (i = 5; i < 8; i++)
//        printf("%c", '*');//***
//    printf("\t");
//}
//
//int main()
//{
//    for (i = 5; i <= 8; i++)
//        prt();
//    return 0;
//}



//下面代码段的输出是（ ）
//int main()
//{
//    int a = 3;
//    printf("%d\n", (a += a -= a * a));//-12
//    //从右到左：a*a = 9,a-= 9 --> a = -6  a += -6 ==> a = -6 + (-6)
//    return 0;
//}



/*
描述
    首先输入要输入的整数个数n，然后输入n个整数。
    输出为n个整数中负数的个数，和所有正整数的平均值，结果保留一位小数。
    0即不是正整数，也不是负数，不计入计算。如果没有正数，则平均值为0。
数据范围
    1≤n ≤2000  ，输入的整数都满足∣val∣≤1000 
输入描述：
    首先输入一个正整数n，
    然后输入n个整数。
输出描述：
    输出负数的个数，和所有正整数的平均值。
*/

int main()
{
    int n = 0;
    int data = 0;
    int count1 = 0;//计算正整数
    int count2 = 0;//计算负整数
    float sum = 0;//计算总和

    scanf("%d", &n);
    while (n)
    {
        scanf("%d", &data);

        //正整数
        if (data > 0)
        {
            sum += data;//累加
            count1++;
        }
        //负整数
        if (data < 0)
            count2++;

        n--;
    }

    //特殊情况：无正整数
    if (count1 == 0)
        printf("%d 0.0\n", count1);
    else
    {
        printf("%d %.1f\n", count2, sum / count1);
    }
    return 0;
}