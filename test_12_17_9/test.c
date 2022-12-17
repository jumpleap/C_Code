#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	小乐乐的班级进行了一次期中考试，考试一共有3门科目：数学，语文，英语，
	小乐乐的班主任决定给没有通过考核的同学家长开一次家长会，
	考核的标准是三科平均分不低于60分，所以现在想请你帮忙算一算小乐乐会不会被叫家长。
输入描述：
	一行，输入三个整数（表示小乐乐的数学、语文、英语的成绩），用空格分隔。
输出描述：
	一行，如果小乐乐会被请家长则输出“YES”，否则输出“NO”。
*/

int main()
{
    int math = 0, chinese = 0, english = 0;
    scanf("%d %d %d", &math, &chinese, &english);

    int avg = (math + chinese + english) / 3;
    if (avg < 60)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
	return 0;
}