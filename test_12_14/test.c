#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	KiKi�ǳ�ϲ����������һ�ҵ�����������һ���·������˽⵽��
	��������ǡ�˫11����11��11�գ�������·���7�ۣ�
	��˫12�� ��12��12�գ�������·���8�ۣ�
	������Ż�ȯ���Զ����50Ԫ���Ż�ȯֻ����˫11��˫12ʹ�ã�����KiKi����������Ǯ����
	���ݷ�Χ���·��۸�����1��val��100000
����������
	һ�У��ĸ����֣���һ������ʾС�����е��·��۸�
	�ڶ��͵����������ֱ��ʾ������·ݡ���������ڡ����ĸ�������ʾ�Ƿ����Ż�ȯ
	�����Ż�ȯ��1��ʾ�����Ż�ȯ��0��ʾ���� ע���������ڱ�ֻ֤�С�˫11���͡�˫12����
���������
	һ�У�С��ʵ�ʻ���Ǯ����������λС����������ʾ����Ҫָ���̼ҵ�����Ǯ��
*/

int main()
{
    double price = 0;
    int month, days;
    int discount = 0;
    scanf("%lf %d %d %d", &price, &month, &days, &discount);

    if (discount == 1)
    {
        if (month == 11 && days == 11)
        {
            price = price * 0.7 - 50;
        }
        else if (month == 12 && days == 12)
        {
            price = price * 0.8 - 50;
        }
    }
    else
    {
        if (month == 11 && days == 11)
        {
            price = price * 0.7;
        }
        else if (month == 12 && days == 12)
        {
            price = price * 0.8;
        }
    }

    if (price < 0)
    {
        price = 0;
        printf("%.2lf\n", price);
    }
    else
    {
        printf("%.2lf\n", price);
    }
	return 0;
}