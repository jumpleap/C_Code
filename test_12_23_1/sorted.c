#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
    数据范围：1≤n,m≤1000  ， 序列中的值满足 0≤val≤30000
输入描述：
    输入包含三行，
    第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，
    m表示第三行第二个升序序列中数字的个数。
    第二行包含n个整数，用空格分隔。
    第三行包含m个整数，用空格分隔。
输出描述：
    输出为一行，输出长度为n+m的升序序列，
    即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。
*/

int main()
{
    int arr[2000];
    int n, m;
    scanf("%d %d", &n, &m);
    int i = 0, j = 0;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    //从下标为n开始输入
    for (i = n; i < n + m; i++)
        scanf("%d", &arr[i]);

    //进行冒泡排序 - 使数列重新变成有序序列
    for (i = 0; i < n + m - 1; i++)
    {
        for (j = 0; j < n + m - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    //输出
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}