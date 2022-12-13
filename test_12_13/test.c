#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	牛牛从键盘输入一个整数，请你判断这个整数能被 2 3 7 中哪几个数整除，并按升序输出。
	如果不能被 2 3 7 任意一个数整除则输出 n。
输入描述：
	输入一个整数
输出描述：
	输出能被 2 3 7 哪几个数整除，并按升序输出。
*/

//法一
/*
int main()
{
    int num = 0;
    while (scanf("%d", &num) != EOF)
    {
        getchar();
        if (num % 2 == 0 || num % 3 == 0 || num % 7 == 0)
        {
            if (num % 2 == 0)
                printf("2 ");
            if (num % 3 == 0)
                printf("3 ");
            if (num % 7 == 0)
                printf("7");
        }
        else
        {
            printf("n\n");
        }
    }
	return 0;
}
*/

//法二
int main()
{
    int num = 0;
    int arr[] = { 2,3,7 };
    int i = 0, j = 0;

    while (scanf("%d", &num) != EOF)
    {
        getchar();
        for (i = 0; i < 3; i++)
        {
            if (num % arr[i] == 0)
            {
                printf("%d ", arr[i]);
                j = 1;
            }
        }

        if (j == 0)
        {
            printf("n\n");
        }
    }
    return 0;
}