#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//���⣺��1+2+3+����+n�Ľ��
//�������ӣ�https://leetcode.cn/problems/qiu-12n-lcof/


// int getSum(int n)
// {
//     if(n <= 1)
//         return 1;
//     return n + getSum(n-1);
// }

int sumNums(int n) {
    //��һ����ѧ��ʽ
    // int sum = 0;
    // if(n % 2 == 0)
    // {
    //     //ż�������
    //     sum = n / 2 * (n+1);
    // }
    // else
    // {
    //     //���������
    //     sum = (n+1) / 2 * n;
    // }
    // return sum;

    //������ѭ������
    // int sum = 0;
    // for(int i=1; i<=n; i++)
    //     sum += i;
    // return sum;

    //��������������
    // long long sum = 0;
    // sum = n * (n+1) / 2;
    // return sum;

    //���ģ��ݹ�
    // int sum = getSum(n);
    // return sum;

    //���壺�⺯������λ��������
    //return ((int)pow(n,2) + n) >> 1;

    //�������ݹ�Ͷ�·�������� --> �������
    n && (n += sumNums(n - 1));
    return n;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int sum = sumNums(n);
    printf("%d\n", sum);
    return 0;
}