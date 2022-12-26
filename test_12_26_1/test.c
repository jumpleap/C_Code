#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用数字组成的数字三角形图案。
输入描述：
    多组输入，一个整数（3~20），表示数字三角形边的长度，即数字的数量，也表示输出行数。
输出描述：
    针对每行输入，输出用数字组成的对应长度的数字三角形，每个数字后面有一个空格。


int main()
{
    int len = 0;
    while (scanf("%d", &len) != EOF)
    {
        int i, j;
        for (i = 1; i <= len; i++)
        {
            //从1开始打印
            for (j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }
    return 0;
}
*/



/*
描述
    有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
输入描述：
    第一行输入一个整数N(0≤N≤50)。
    第二行输入N个升序排列的整数，输入用空格分隔的N个整数。
    第三行输入想要进行插入的一个整数。
输出描述：
    输出为一行，N+1个有序排列的整数。
*/

int main()
{
    int arr[51] = { 0 };
    int n = 0, m = 0;
    scanf("%d", &n);
    int i, j;
    //输入
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &m);
    arr[n] = m;//把数插入到数组最后

    //进行排序
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            //交换数据的大小
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    //输出
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}