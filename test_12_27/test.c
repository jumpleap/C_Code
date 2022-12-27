#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	KiKi现在得到一个包含n*m个数的整数序列，
	现在他需要把这n*m个数按顺序规划成一个n行m列的矩阵并输出，请你帮他完成这个任务。
输入描述：
	第一行，输入两个整数n和m，用空格分隔，
	第二行包含n*m个整数（范围-2^31~2^31-1）。(1≤n≤10, 1≤m≤10)
输出描述：
	输出规划后n行m列的矩阵，每个数的后面有一个空格。
*/

int main()
{
    int n, m;
    int arr[100] = { 0 };
    int i, j;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n * m; i++)
        scanf("%d", &arr[i]);

    //判断行
    for (i = 0; i < n; i++)
    {
        //判断列
        for (j = m * i; j < m * (i + 1); j++)
        {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
    return 0;
}