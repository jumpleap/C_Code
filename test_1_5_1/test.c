#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
����
    ���ڸ���һ����������������������㣺
    1.ֻ��1-9��ɣ�����ÿ����ֻ����һ�Σ���13,23,1289��
    2.λ���Ӹߵ���Ϊ�ݼ����������2459��87631��
    �����ж�һ�£���������Ļ������Ƿ�Ϊ������13�Ļ�������131,127�Ļ�������12721����
����������
    ����ֻ��1�С�
    ��1������һ������t����֤tΪ������
    ���ݱ�֤��9<t<109
���������
    ���һ���ַ��������t�Ļ����������������������prime�����������"noprime"��
*/

long long int res(long long int num)
{
    int temp = num;
    //���ʣ�µ�ֵ��9С������ѭ��
    while (temp > 9)
    {
        temp /= 10;
        num = num * 10 + temp % 10;//�õ�����ֵ
    }
    return num;//���ػ���ֵ
}

int isPrime(long long int ret)
{
    int i = 0;
    //���������ж�
    for (i = 2; i <= sqrt(ret); i++)
    {
        if (ret % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    long long int num = 0;//ʹ��long long int �Ƿ�ֹ���
    scanf("%lld", &num);

    long long int ret = res(num);
    //�ж��ǲ�������
    if (isPrime(ret))
    {
        printf("prime\n");
    }
    else
    {
        printf("noprime\n");
    }
    return 0;
}