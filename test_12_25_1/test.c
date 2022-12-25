#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    KiKi想从n行m列的方阵队列中找到身高最高的人的位置，请你帮助他完成这个任务。
输入描述：
    第一行包含两个整数n和m，表示这个方阵队列包含n行m列。
    从2到n+1行，每行输入m个整数（范围-2^31~2^31-1），用空格分隔，共输入n*m个数，
    表示方阵中的所有人的身高（保证输入身高都不相同）。(1≤x≤n≤10，1≤y≤m≤10)
输出描述：
    一行，输出两个整数，用空格分隔，表示方阵中身高最高的人所在的行号和列号。


int main()
{
    int arr[10][10] = { 0 };
    int max = 0;//最大数
    int n, m;
    scanf("%d %d", &n, &m);
    int i, j, x, y;
    //s输入数据
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);
    max = arr[0][0];//最大数为数组的第一个数

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (max <= arr[i][j])
            {
                max = arr[i][j];//找到最大数
                //记录最大数的下标
                x = i;
                y = j;
            }
        }
    }
    printf("%d %d\n", x + 1, y + 1);//使下标均+1
    return 0;
}
*/


/*
描述
    KiKi得到了一个n行m列的矩阵，现在他想知道第x行第y列的值是多少，请你帮助他完成这个任务。
    数据范围：1≤n,m≤5  ，矩阵中的值满足：1≤val≤25
输入描述：
    第一行包含两个数n和m，表示这个矩阵包含n行m列。从2到n+1行，每行输入m个整数（范围-231~231-1），用空格分隔，共输入n*m个数，表示矩阵中的元素。接下来一行输入x和y，用空格分隔，表示KiKi想得到的元素的位置。(1≤x≤n≤10，1≤y≤m≤10)
输出描述：
    一行，输出一个整数值，为KiKi想知道的值。
*/

int main()
{
    int arr[10][10] = { 0 };
    int n, m;
    //输入n行m列
    scanf("%d %d", &n, &m);
    int i, j;
    //输入数据
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);

    int x, y;
    //输入下标
    scanf("%d %d", &x, &y);
    printf("%d", arr[x - 1][y - 1]);//得到下标的值
    return 0;
}