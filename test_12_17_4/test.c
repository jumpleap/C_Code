#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	ţţ��һ�������죬����һ�����ն�Ӧ��Ӣ����
	1������һ��Monday
	2�����ڶ���Tuesday
	3����������Wednesday
	4�������ģ�Thursday
	5�������壺Friday
	6����������Saturday
	7�������գ�Sunday
	ţţ֪�����������ڼ�������������Ӣ��
����������
	������������ڼ�
���������
	�����Ӧ��Ӣ��
*/

int main()
{
    int day = 0;
    scanf("%d", &day);

    switch (day)
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("");
    }
	return 0;
}