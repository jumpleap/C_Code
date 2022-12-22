#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int len = 0;
    while (scanf("%d", &len) != EOF)
    {
        getchar();//接受换行符
        int i, j;
        //上半部分：从多到少打印*
        for (i = 0; i <= len; i++)
        {
            for (j = 0; j <= len - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

        //下半部分：从少到多打印*
        for (i = len - 1; i >= 0; i--)
        {
            for (j = 0; j <= len - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}