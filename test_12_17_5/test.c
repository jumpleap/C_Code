#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
    KiKi���ѧϰ���ź���ϵͳ�γ̣����ſ�����һ���ǳ���Ȥ�ĺ�������λ��Ծ����,
    ��������λ�弤������ʱ��t�ϵ�ֵ��
����������
    ��Ŀ�ж����������ݣ�ÿһ������һ��t(-1000
���������
    ���������ֵ�����С�
*/

int main()
{
    int t = 0;
    while (scanf("%d", &t) != EOF)
    {
        if (t > 0)
            printf("1\n");
        else if (t == 0)
            printf("0.5\n");
        else
            printf("0\n");
    }
	return 0;
}