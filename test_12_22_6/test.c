#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    输入10个整数，要求按输入时的逆序把这10个数打印出来。逆序输出，就是按照输入相反的顺序打印这10个数。
输入描述：
    一行，输入10个整数（范围-231~231-1），用空格分隔。
输出描述：
    一行，逆序输出输入的10个整数，用空格分隔。


int main()
{
    int arr[10] = { 0 };
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 9; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/


/*
描述
    输入数字N，然后输入N个数，计算这N个数的和。
输入描述：
    第一行输入一个整数N(0≤N≤50)，第二行输入用空格分隔的N个整数。
输出描述：
    输出为一行，为第二行输入的“N个整数之和”的计算结果。


int main()
{
    int len = 0, num = 0;
    int sum = 0;
    int i;
    scanf("%d",&len);
    for(i=0;i<len;i++)
    {
        scanf("%d",&num);
        sum += num;
    }
    printf("%d\n",sum);
    return 0;
}
*/


/*
描述
    输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
输入描述：
    两行，第一行为n，表示n个成绩，不会大于10000。
    第二行为n个成绩（整数表示，范围0~100），以空格隔开。
输出描述：
    一行，输出n个成绩中最高分数和最低分数的差。
*/

#define SCOPE 10000
int main()
{
    int score[SCOPE] = { 0 };
    int n = 0;
    int high, low;
    int i = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }

    high = low = score[0];
    for (i = 0; i < n; i++)
    {
        if (high < score[i])
            high = score[i];
        if (low > score[i])
            low = score[i];
    }
    printf("%d\n", high - low);
    return 0;
}