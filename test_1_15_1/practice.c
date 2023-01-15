#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void bubble_sort(int arr[], int len)
//{
//	int i = 0;
//	int j = 0;
//
//	//执行几趟
//	for (i = 0; i < len - 1; i++)
//	{
//		//一趟执行几次
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			//冒泡思想：两两交换
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
////实现一个对整形数组的冒泡排序
//int main()
//{
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);//数组长度
//
//	//输入
//	int i = 0;
//	for (i = 0; i < len; i++)
//		scanf("%d", &arr[i]);
//
//	//冒泡排序
//	bubble_sort(arr, len);
//
//	//输出
//	for (i = 0; i < len; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}



//下面代码的输出
//int x = 5, y = 7;
//
//void swap()
//{
//	int z;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int x = 3, y = 8;
//
//	swap();
//	printf("%d,%d\n",x, y); //3 8
//	return 0;
//}


//以下不正确的定义语句是（D）
//A : double x[5] = { 2.0, 4.0, 6.0, 8.0, 10.0 };
//B: char c2[] = { '\x10', '\xa', '\8' };
//C: char c1[] = { '1','2','3','4','5' };
//D: int y[5 + 3] = { 0, 1, 3, 5, 7, 9 };


//int maim()
//{
//	double x[5] = { 2.0, 4.0, 6.0, 8.0, 10.0 };
//	char c1[] = { '1','2','3','4','5' };
//	char c2[] = { '\x10', '\xa', '\8' };
//	int y[5 + 3] = { 0, 1, 3, 5, 7, 9 };
//}



//test.c 文件中包括如下语句，文件中定义的四个变量中，
//是指针类型的变量为【多选】（a，c,d）
//#define INT_PTR int*
//typedef int* int_ptr;
//INT_PTR a, b;
//int_ptr c, d;
//A: a B : b C : c D : d

//有如下定义语句，则正确的输入语句是【多选】（AB）
//int b;
//char c[10];
//A : scanf("%d%s", &b, &c); B: scanf("%d%s", &b, c);
//C: scanf("%d%s", b, c); D: scanf("%d%s", b, &c);


/*
描述
    验证尼科彻斯定理，即：任何一个整数m的立方都可以写成m个连续奇数之和。
例如：
    1 ^ 3 = 1
    2 ^ 3 = 3 + 5
    3 ^ 3 = 7 + 9 + 11
    4 ^ 3 = 13 + 15 + 17 + 19
输入一个正整数m（m≤100），将m的立方写成m个连续奇数之和的形式输出。
数据范围：1\le m\le 100\1≤m≤100
进阶：时间复杂度：O(m)\O(m) ，空间复杂度：O(1)\O(1)
*/

int main()
{
    int m = 0;
    scanf("%d", &m);

    //找到规律：
    //开始数：m * (m - 1) + 1
    //结束数：m * (m + 1) - 1
    int start = m * (m - 1) + 1;//开始
    int end = m * (m + 1) - 1;//结尾

    for (int i = start; i <= end; i += 2)
    {
        //打印
        if (i <= end)
            printf("%d", i);
        if (i < end)
            printf("+");
    }
    return 0;
}