#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	��һ����λ�������������
����������
	һ�У�����һ������n��1000 <= n <= 9999����
���������
	���ÿ�����룬���������Ӧ��λ����
*/

int main()
{
    int num = 0;
    scanf("%d", &num);

    //�ж�������Ч��Χ
    if (num < 1000 || num > 9999)
        return 0;

    while (num)
    {
        printf("%d", num % 10);//�����һ�����ֿ�ʼ��ӡ��������ǰ��ӡ
        num /= 10;
    }
	return 0;
}