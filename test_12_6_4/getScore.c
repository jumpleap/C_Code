#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    ��������һ��ѧ����ѧ�ţ��Լ�3�ƣ�C���ԣ���ѧ��Ӣ��ɼ���
    ����Ļ�������ѧ����ѧ�ţ�3�Ƴɼ���ע������ɼ�ʱ��������������ұ���2λС������
    ���ݷ�Χ��ѧ������ 1 - 20000000 \ 1��n��20000000  �����Ƴɼ�ʹ�ðٷ��ƣ��Ҳ����ܳ��ָ���
*/
int main()
{
    int id = 0;
    double num1, num2, num3;
    int i;

    scanf("%d;%lf,%lf,%lf", &id, &num1, &num2, &num3);

    num1 = (int)(num1 * 100 + 0.50) / 100.0;
    num2 = (int)(num2 * 100 + 0.50) / 100.0;
    num2 = (int)(num2 * 100 + 0.50) / 100.0;

    printf("The each subject score of No. %d is %.2lf, %.2lf, %.2lf.", id, num1, num2, num3);
    return 0;
}