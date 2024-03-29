#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    期中考试开始了，大家都想取得好成绩，争夺前五名。从键盘输入 n 个学生成绩，
    输出每组排在前五高的成绩。数据范围：5≤n≤50  ，成绩采取百分制并不会出现负数
输入描述：
    两行，第一行输入一个整数，表示n个学生（n>=5），
    第二行输入n个学生成绩（整数表示，范围0~100），用空格分隔。
输出描述：
    一行，输出成绩最高的前五个，用空格分隔。
*/

int main()
{
    int arr[45] = { 0 };
    int n = 0;
    int i, j;
    scanf("%d", &n);
    //把输入的数放入数组中
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //进行冒泡排序，把最大的五个数放在前面
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            //交换，找到最大的数
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    //输出前面5个最大的数
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}