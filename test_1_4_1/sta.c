#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
    ��ͳ��ĳ��������Χ[L, R]�����������У�����2���ֵĴ�����
    ���������Χ[2, 22]������2����2�г�����1�Σ�����12�г���1�Σ�����20�г���1�Σ�
    ����21�г���1�Σ�����22�г���2�Σ���������2�ڸ÷�Χ��һ��������6�Ρ�
����������
    ���빲1�У�Ϊ����������L��R��֮����һ���ո������
���������
    �����1�У���ʾ����2���ֵĴ�����
*/

int getValue(int left)
{
    int count = 0;//�������2�Ĵ���
    while (left)
    {
        int x = left % 10;//�õ�λ��
        left /= 10;//��һ��λ
        if (x == 2)
        {
            count++;
        }
    }
    if (count)
        return count;//���ص�ǰ������2���ܴ���
    else
        return 0;
}

int main()
{
    int left = 0;
    int right = 0;
    int count = 0;
    scanf("%d %d", &left, &right);

    for (; left <= right; left++)
    {
        int res = getValue(left);
        if (res)
            count += res;//�����ܴ���
    }
    printf("%d\n", count);
    return 0;
}