#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ�
	�ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
����������
	��Ŀ�ж����������ݣ�ÿһ����������a��b��c(0<a,b,c<1000)����Ϊ�����ε������ߣ��ÿո�ָ���
���������
	���ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ��������������Equilateral triangle!����
	�����������������Isosceles triangle!����������������������Ordinary triangle!����
	��֮�����Not a triangle!����
*/

int main()
{
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if (a + b > c && a + c > b && b + c > a)
        {
            if (a == b && b == c)
            {
                printf("Equilateral triangle!\n");
            }
            else if (a == b || b == c || a == c)
            {
                printf("Isosceles triangle!\n");
            }
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
        else
        {
            printf("Not a triangle!\n");
        }
    }
	return 0;
}