#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	ţţ���ڼĿ�ݣ����˽⵽����� 1kg ���ڵİ��𲽼� 20 Ԫ���㣬
	�������ְ�ÿ kg 1Ԫ���㣬���� 1kg ���ְ� 1kg���㡣����Ӽ��Ļ�Ҫ���⸶��Ԫ��
	����ţţ�ܹ�Ҫ֧�����ٿ�ݷ�
����������
	��һ������һ�������ȸ����� a ��һ���ַ� b ��a ��ʾţţҪ�ĵĿ�ݵ�������
	b��ʾţţ�Ƿ�ѡ��Ӽ���'y' ��ʾ�Ӽ� ��'n' ��ʾ���Ӽ���
���������
	���ţţ�ܹ�Ҫ֧���Ŀ�ݷ���
*/

int main()
{
    double weight = 0;
    int price = 20;
    char ch = '0';
    scanf("%lf %c", &weight, &ch);

    int get = (int)weight;

    if (ch == 'y')
    {
        if (weight <= 1)
            price = price + 5;
        else if (weight > (int)weight)
            price = price + weight + 5;
        else
            price = price + weight - 1 + 5;
    }
    else if (ch == 'n')
    {
        if (weight > (int)weight)
            price = price + weight;
        else
            price = price + weight - 1;
    }
    printf("%d\n", price);
	return 0;
}