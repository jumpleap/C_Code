#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
    ţţ���ѧ����һЩ�򵥵���ѧ���㣬�������ģ��һ��������㡣 ���� 1+2+3....+n-1+n)
����������
    �����һ�������� n
���������
    ������� 
*/

//int getSum(int n)
//{
//    //����ֵΪ1�Ž���
//    if (n == 1)
//        return 1;
//    //�ݹ����
//    return n + getSum(n - 1);
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", getSum(n));
//    return 0;
//}


/*
����
    ţţ����˽⵽�������İ�����(Ackmann)������������������һ����������Ѹ�ٵĺ�����
    ����һ�����������ݽṹ--���鼯�����Ÿ��Ӷȱ���Դﵽ�����������ķ���������
    ������㰢���������ļ�������������Ľ����
����������
    ��һ�������������������ֱ��� n ��m ������֤����������ǿɼ���ģ�
���������
    ��� Ackmann��n,m)
*/

long long Ackmann(long long m, long long n)
{
    //�ݹ���
    if (m == 0)
        return n + 1;
    else if (m > 0 && n == 0)
        return Ackmann(m - 1, 1);
    else if (m > 0 && n > 0)
        return Ackmann(m - 1, Ackmann(m, n - 1));
    return 0;
}

int main()
{
    long long n = 0;
    long long m = 0;
    scanf("%lld %lld", &n, &m);
    printf("%lld\n", Ackmann(m, n));
    return 0;
}