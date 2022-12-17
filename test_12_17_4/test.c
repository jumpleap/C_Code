#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	牛牛的一周有七天，从周一到周日对应的英文是
	1、星期一：Monday
	2、星期二：Tuesday
	3、星期三：Wednesday
	4、星期四：Thursday
	5、星期五：Friday
	6、星期六：Saturday
	7、星期日：Sunday
	牛牛知道今天是星期几，请输出这天的英文
输入描述：
	输入今天是星期几
输出描述：
	输出对应的英文
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