#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
�ж��������Ĵ�С
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
����һ�������ж�������ż��
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

//��ӡ*�ţ��������ִ�ӡ�����ֵ�*��
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
    ����5��ѧ����ƽ���ɼ�
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