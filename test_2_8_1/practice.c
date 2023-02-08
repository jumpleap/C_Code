#define _CRT_SECURE_NO_WARNINGS


//下面代码的结果是：（C）
//#include <stdio.h>
//
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}

//A.10
//B.12
//C.9
//D.程序错误



//下面代码的结果是：A
//#include <stdio.h>
//
//int i;
//int main()
//{
//    i--;
//    //注意：sizeof（）的结果是一个无符号型的整数
//    //有符号型和无符号型进行比较时，会把有符号型转化为无符号型
//    if (i > sizeof(i))
//    {
//        //printf("%u\n", i);
//        printf(">\n");//>
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//
////A. >
////B. <
////C.不输出
////D.程序有问题



//关于表达式求值说法不正确的是：（D）

//A.表达式求值先看是否存在整形提升或算术转换，再进行计算
// 答：有整型提升或算术转换的时候会隐式进行，正确
//B.表达式真正计算的时候先看相邻操作符的优先级决定先算谁
// 答；对，优先级高的先进行运算
//C.相邻操作符的优先级相同的情况下，看操作符的结合性决定计算顺序
// 答：正确
//D.只要有了优先级和结合性，表达式就能求出唯一值
//错误


/*
描述
	输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
数据范围：
	1≤n, m≤1000  ， 序列中的值满足：0≤val≤30000
输入描述：
	输入包含三行，
	第一行包含两个正整数n, m，用空格分隔。
	n表示第二行第一个升序序列中数字的个数，
	m表示第三行第二个升序序列中数字的个数。
	第二行包含n个整数，用空格分隔。
	第三行包含m个整数，用空格分隔。
输出描述：
	输出为一行，输出长度为n + m的升序序列，
	即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。
*/

//#include <stdio.h>
//
//void bubble_sort(int* arr, int n, int m)
//{
//    //冒泡排序解决
//    for (int i = 0; i < n + m - 1; i++)
//    {
//        for (int j = 0; j < n + m - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                //交换，大的向后，小的向前
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int arr[2000];
//    int n, m;
//
//    //输入数据值
//    scanf("%d %d", &n, &m);
//    int i = 0, j = 0;
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    for (i = n; i < n + m; i++)
//        scanf("%d", &arr[i]);
//
//    bubble_sort(arr, n, m);
//
//    //输出
//    for (i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}



/*
描述
	小乐乐上课需要走n阶台阶，因为他腿比较长，
	所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
输入描述：
	输入包含一个整数n(1 ≤ n ≤ 30)
输出描述：
	输出一个整数，即小乐乐可以走的方法数。
*/

//#include <stdio.h>
//
//int getCount(int n)
//{
//	//递归的限制条件
//	if (n < 2)
//		return 1;
//	//进行递归
//	return getCount(n - 1) + getCount(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int count = getCount(n);
//	printf("%d\n", count);
//	return 0;
//}



/*
描述
	变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，
	比如1461 可以拆分成（1和461）, （14和61）, （146和1), 
	如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
例如：
	655 = 6 * 55 + 65 * 5
	1461 = 1 * 461 + 14 * 61 + 146 * 1
	求出 5位数中的所有 Lily Number。
输入描述：
	无
输出描述：
	一行，5位数中的所有 Lily Number，每两个数之间间隔一个空格。
*/

//#include <stdio.h>
//
//int main()
//{
//	int a, a1, b, b1, c, c1, d, d1;
//	int i;
//	for (i = 10000; i < 100000; i++)
//	{
//		//进行拆分
//		a = i / 10000;
//		a1 = i % 10000;
//		b = i / 1000;
//		b1 = i % 1000;
//		c = i / 100;
//		c1 = i % 100;
//		d = i / 10;
//		d1 = i % 10;
//
//		if ((a * a1) + (b * b1) + (c * c1) + (d * d1) == i)
//			printf("%d ", i);
//	}
//	return 0;
//}


/*
描述
	KiKi想知道已经给出的三条边a，b，c能否构成三角形，
	如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
输入描述：
	题目有多组输入数据，每一行输入三个a，b，c(0 < a, b, c < 1000)，
	作为三角形的三个边，用空格分隔。
输出描述：
	针对每组输入数据，输出占一行，如果能构成三角形，
	等边三角形则输出“Equilateral triangle!”，
	等腰三角形则输出“Isosceles triangle!”，
	其余的三角形则输出“Ordinary triangle!”，
	反之输出“Not a triangle!”。
*/

#include <stdio.h>

int main()
{
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		if (a + b > c && a + c > b && b + c > a)
		{
			//等边三角形
			if (a == b && b == c)
			{
				printf("Equilateral triangle!\n");
			}
			//等腰三角形
			else if (a == b || b == c || a == c)
			{
				printf("Isosceles triangle!\n");
			}
			//普通三角形
			else
			{
				printf("Ordinary triangle!\n");
			}
		}
		//不构成三角形
		else
		{
			printf("Not a triangle!\n");
		}
	}
	return 0;
}