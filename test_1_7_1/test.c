#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
����
    ţţ�ո�ѧ�������Ķ��壺����ֵָ�ڴ���1����Ȼ���У�����1�����������ⲻ����������������Ȼ��
    ţţ��֪������� n �����ֱ��ǲ�������
����������
    ��һ������һ�������� n ����ʾ����Ҫ���������������
    ���� n ��ÿ������һ������������ʾ��Ҫ�жϵ�����
���������
    ����ĵ� 2 ���� n+1 ��ÿ�����һ�Σ�������������������� true ��������� false
*/

int isPrime(int data)
{
    //�ж��ǲ�������
    for (int i = 2; i <= sqrt(data); i++)
    {
        if (data % i == 0)
            return 0;//��������ֱ�ӷ���0
    }
    return 1;//����������1
}

int main()
{
    int n = 0;
    int data = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        //�ж��������true����false
        if (isPrime(data) == 1)
            printf("true\n");
        else
            printf("false\n");
    }
    return 0;
}