#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	ţţ׼���������ף�������ѵ�����
	����һ������n,���� 1+1/��1-3��+1/��1-3+5��+...+1/(1-3+5-...((-1)^(n-1))*(2n-1))��ֵ
����������
	����һ������
���������
	���һ��������������3λС��


//�ⷨһ��1 - 1/2 + 1/3 - 1/4 + ���� 
int main()
{
    int num = 0;
    double sum = 0;//���ܺ�
    int i;
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        //�����жϿ���i�ǲ���ż����ż������Ҫ���෴��
        if (i % 2 == 0)
            sum -= 1.0 / (i);
        else
            sum += 1.0 / i;
    }
    printf("%.3lf\n", sum);
	return 0;
}
*/


//�ⷨ��
int main()
{
    int num = 0;
    int s = 0;
    double sum = 0;//���
    int i,j = 1;//j��Ƿ�ĸ����
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        //s�Ƿ�ĸ���
        s += j * (2 * i - 1);
        sum += 1.0 / s;
        j = -j;
    }
    printf("%.3lf\n", sum);
    return 0;
}