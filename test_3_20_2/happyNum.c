#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

/*
��дһ���㷨���ж�һ���� n �ǲ��ǿ�������

���������� ����Ϊ��
����һ����������ÿһ�ν������滻Ϊ��ÿ��λ���ϵ����ֵ�ƽ���͡�
Ȼ���ظ��������ֱ���������Ϊ 1��Ҳ������ ����ѭ�� ��ʼ�ձ䲻�� 1��
���������� ���Ϊ 1����ô��������ǿ�������
��� n �� ������ �ͷ��� true �����ǣ��򷵻� false ��
*/

bool isHappy(unsigned int n)
{
    int ret = 0;
    //7�ǿ�����
    while (n > 6)
    {
        ret = 0;
        int tmp = n;//ʹ����ʱ����
        while (tmp)
        {
            int x = tmp % 10;
            ret += x * x;//�õ�ÿλ�����ܺ�
            tmp /= 10;
        }
        n = ret;//����
    }
    //Ϊ1�򷵻�true
    if (n == 1)
        return true;
    return false;
}

int main()
{
    unsigned int num = 0;
    while (scanf("%u", &num) != EOF)
    {
        bool ret = isHappy(num);
        printf("%d\n", ret);
    }
	return 0;
}