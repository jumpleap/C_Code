#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int len = 0;
    while (scanf("%d", &len) != EOF)
    {
        getchar();//���ܻ��з�
        int i, j;
        //�ϰ벿�֣��Ӷൽ�ٴ�ӡ*
        for (i = 0; i <= len; i++)
        {
            for (j = 0; j <= len - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

        //�°벿�֣����ٵ����ӡ*
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