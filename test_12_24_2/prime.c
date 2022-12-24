#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    用筛选法求n以内的素数。筛选法求解过程为：将2~n之间的正整数放在数组内存储，
    将数组中2之后的所有能被2整除的数清0，再将3之后的所有能被3整除的数清0 ，
    以此类推，直到n为止。数组中不为0 的数即为素数。
输入描述：
    多组输入，每行输入一个正整数（不大于100）。
输出描述：
    针对每行输入的整数n，输出两行，第一行，输出n之内（包括n）的素数，用空格分隔，
    第二行，输出数组中2之后被清0 的个数。每行输出后换行。
*/


//判断2-n中的数是不是素数
int isPrime(int i)
{
    int j;
    for (j = 2; j < i; j++)
    {
        if (i % j == 0)
            return 0;//不算素数
    }
    return 1;//是素数
}

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int count = 0;//计算是素数的个数
        int i;
        for (i = 2; i <= n; i++)
        {
            if (isPrime(i))
            {
                printf("%d ", i);//是素数直接打印
                count++;
            }
        }
        printf("\n%d\n", n - count - 1);//不是素数的个数
    }
    return 0;
}