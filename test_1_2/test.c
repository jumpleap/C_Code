#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
    KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ�X��ͼ����
����������
    �������룬һ��������2~20������ʾ�����������Ҳ��ʾ��ɡ�X���ķ�б�ߺ���б�ߵĳ��ȡ�
���������
    ���ÿ�����룬����á�*����ɵ�X��ͼ����
*/

int main()
{
    int len = 0;
    while (scanf("%d", &len) != EOF)
    {
        int i, j;
        for (i = 0; i < len; i++)
        {
            for (j = 0; j < len; j++)
            {
                //i==j����б�ܣ�j==len-1-i�Ƿ�б��
                if (i == j || j == len - 1 - i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");//����
        }
    }
    return 0;
}