#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
    KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ�����ͼ����
����������
    �������룬һ��������2~20����
���������
    ���ÿ�����룬����á�*����ɵ����Σ�ÿ����*��������һ���ո�
ʾ��
    ���룺
        2
    �����
          *
         * *
        * * *
         * *
          *


//��һ����Ϊ�����ִ�ӡ��������
int main()
{
    int len = 0;
    while (scanf("%d", &len) != EOF)
    {
        getchar();//���ܻ��з�
        int i, j, k;
        
        //��ӡ�ϰ벿��
        for (i = 0; i < len; i++)
        {
            //��ӡ�ո񣬴�ӡ��һ��*��ǰ��Ŀո�
            for (j = 0; j < len - i; j++)
            {
                printf(" ");
            }
            //�ڿո�����ӡ*
            for (k = 0; k <= i; k++)
            {
                printf("* ");
            }
            printf("\n");
        }

        //��ӡ�м䲿�֣��м䲿��Ҫ��һ��*
        for (i = 0; i <= len; i++)
        {
            printf("* ");
        }
        printf("\n");//����

        //��ӡ�°벿��
        for (i = 0; i < len; i++)
        {
            //��ӡ�ո�
            for (k = 0; k <= i; k++)
            {
                printf(" ");
            }

            //�ڿո�����ӡ*��
            for (j = 0; j < len - i; j++)
            {
                printf("* ");
            }
            printf("\n");//����

        }
    }
    return 0;
}
*/


//��������Ϊ�����ִ�ӡ������
int main()
{
    int len = 0;
    while (scanf("%d", &len) != EOF)
    {
        getchar();//���ܻ��з�
        int i, j, k;
        //��ӡ�ϰ벿�֣�len + 1���м�����������
        for (i = 0; i < len + 1; i++)
        {
            for (j = 0; j < len - i; j++)
            {
                printf(" ");
            }
            for (k = 0; k <= i; k++)
            {
                printf("* ");
            }
            printf("\n");
        }

        //��ӡ�°벿��
        for (i = 0; i < len; i++)
        {
            for (k = 0; k <= i; k++)
            {
                printf(" ");
            }

            for (j = 0; j < len - i; j++)
            {
                printf("* ");
            }
            printf("\n");

        }
    }
    return 0;
}