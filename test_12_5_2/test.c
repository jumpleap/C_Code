#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
判断两个数的大小
int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (a > b)
        {
            printf("%d>%d\n", a, b);
        }
        else if (a < b)
        {
            printf("%d<%d\n", a, b);
        }
        else
        {
            printf("%d=%d\n", a, b);
        }
    }
    return 0;
}
*/

/*
输入一个数，判断它的奇偶性
int main()
{
    int num = 0;
    while (scanf("%d", &num) != EOF)
    {
        if (num % 2 == 0)
        {
            printf("%s\n", "Even");
        }
        else
        {
            printf("%s\n", "Odd");
        }
    }
    return 0;
}*/

//打印*号，输入数字打印该数字的*号
/*
int main()
{
    int num;
    while (scanf("%d", &num) != EOF)
    {
        int i = 0;
        for (i = 0; i < num; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

/*
    计算5个学生的平均成绩
*/

int main()
{
    int arr[5] = { 0 };
    float sum = 0.0;
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%.1f\n", sum / 5.0);
    return 0;
}