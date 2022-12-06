#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，
    在屏幕上输出该学生的学号，3科成绩（注：输出成绩时需进行四舍五入且保留2位小数）。
    数据范围：学号满足 1 - 20000000 \ 1≤n≤20000000  ，各科成绩使用百分制，且不可能出现负数
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