#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	KiKiʵ��һ���򵥼�������ʵ���������ġ��Ӽ��˳������㣬
	�û��Ӽ���������ʽ��������1�����������2�������㲢������ʽ��ֵ��
	��������������Ų������ڣ�+��-��*��/����Χ�ڣ������Invalid operation!����
	�������Ϊ�������㣬����/��ʱ�����������2����0.0���������Wrong!Division by zero!��

����������
	����һ���ַ�����������1+�����+������2 �����кϷ��������������+��-��*��/����
���������
	���Ϊһ�С������������������ž��Ϸ��������һ�����ʽ��
	������1�����������2=������������С����������4λ�����ͷ���֮��û�пո�
	��������������Ų������ڣ�+��-��*��/����Χ�ڣ������Invalid operation!����
	�������Ϊ�������㣬����/��ʱ��
	���������2����0.0���������Wrong!Division by zero!����
*/

int main()
{
    double a = .0, b = .0;
    char c = '0';
    scanf("%lf%c%lf", &a, &c, &b);

    if (b == 0)
    {
        printf("Wrong!Division by zero!\n");
        return 0;
    }

    switch (c)
    {
    case '+':
        printf("%.4lf+%.4lf=%.4lf\n", a, b, a + b);
        break;
    case '-':
        printf("%.4lf-%.4lf=%.4lf\n", a, b, a - b);
        break;
    case '*':
        printf("%.4lf*%.4lf=%.4lf\n", a, b, a * b);
        break;
    case '/':
        printf("%.4lf/%.4lf=%.4lf\n", a, b, a / b);
        break;
    default:
        printf("Invalid operation!");
    }
	return 0;
}