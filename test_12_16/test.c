#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	ţţ�̳��������
	��100��9�ۣ�
	��500��8�ۣ�
	��2000��7�ۣ�
	��5000��6��
	ţ�����㲻����Լ�Ӧ�ø�����Ǯ�������æ��һ��
����������
	ţ���̹�����Ʒ����ǰ���ܽ��
���������
	�μӻ��ţ���̹�����ƷӦ����������С�����1λ��
*/

int main()
{
    double price = 0;
    scanf("%lf", &price);

    if (price >= 100 && price < 500)
    {
        price = price * 0.9;
    }
    else if (price >= 500 && price < 2000)
    {
        price = price * 0.8;
    }
    else if (price >= 2000 && price < 5000)
    {
        price = price * 0.7;
    }
    else if (price >= 5000)
    {
        price = price * 0.6;
    }
    printf("%.1lf\n", price);
	return 0;
}