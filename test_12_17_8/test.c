#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	KiKi����ĳ��ĳ���ж����죬��������ʵ�֡�������ݺ��·ݣ�������һ��������ж����졣
����������
	�������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ���
���������
	���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж����졣
*/

int main()
{
    int year = 0, month = 0, day = 0;
    while (scanf("%d %d", &year, &month) != EOF)
    {
        switch (month)
        {
            //��2�½��������жϣ�����ǰ������ǲ�������
            case 2:
            {
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                {
                    day = 29;//����
                }
                else
                {
                    day = 28;//��������
                }
            }
                break;
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                day = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                day = 30;
                break;
            default:
                day = -1;
        }
        printf("%d\n", day);
    }
	return 0;
}