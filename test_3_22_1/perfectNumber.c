#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����һ�������� num ����� num ��һ����ȫƽ�������򷵻� true �����򷵻� false ��
��ȫƽ���� ��һ������д��ĳ��������ƽ����������
���仰˵��������д��ĳ������������ĳ˻���
����ʹ���κ����õĿ⺯������  sqrt ��
*/

//��һ��ѭ��ö�ٱȽ�
bool isPerfectSquare(int num)
{
    int len = 46341;//��ֹ������int��Χ
    for (int i = 1; i < len; i++)
    {
        if (i * i == num)
        {
            return true;
        }
    }
    return false;
}


//��������ȫƽ��������
bool isPerfectSquare(int num)
{
    if (num < 1)
        return false;
    int i = 1;
    while (num > 0)
    {
        num -= i;
        i += 2;
    }
    return num == 0;
}