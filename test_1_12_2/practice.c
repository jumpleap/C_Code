#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
    ������������ڣ���������һ��ĵڼ��졣
    ��֤���Ϊ4λ�������ںϷ���
����������
    ����һ�У�ÿ�пո�ָ�ֱ����꣬�£���
���������
    �������һ��ĵڼ���
*/

int is_leap_year(int year)
{
    //�ж�����
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int main()
{
    int year = 0;
    int month = 0;
    int day = 0;
    int monthDay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int sum = 0;
    scanf("%d %d %d", &year, &month, &day);

    int res = is_leap_year(year);
    //�ж��ǲ�������
    if (res == 1)
        monthDay[1] = 29;
    //�����·ݵ�������
    for (int i = 0; i < month - 1; i++)
    {
        sum += monthDay[i];
    }
    sum += day;//����������
    printf("%d\n", sum);
    return 0;
}