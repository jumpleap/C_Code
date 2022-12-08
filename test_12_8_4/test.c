#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储。
	BoBo出了一个问题给KiKi，转换以下ASCII码为对应字符并输出他们。
	73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33
输入描述：
	无
输出描述：
	一行输出转换题目中给出的所有ASCII码对应的字符，无需以空格隔开。


int main()
{
	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n", 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);
	return 0;
}
*/


/*
描述
	小乐乐输入百分制成绩，他想将成绩转换成等级制。转换规则为：
	90-100为’A’，80-89为’B’，70-79为’C’，60-69为’D’，59以下为’E’。
	如果输入的成绩不在0-100之间，输出’F’。
输入描述：
	一行，一个整数表示的成绩。
输出描述：
	一行，转换后的等级。


int main()
{
    int score = 0;
    char grade = '0';
    printf("请输入成绩：\n");
    scanf("%d", &score);

    if (score < 60 && score >= 0)
    {
        grade = 'E';
    }
    else if (score < 70 && score >= 60)
    {
        grade = 'D';
    }
    else if (score < 80 && score >= 70)
    {
        grade = 'C';
    }
    else if (score < 90 && score >= 80)
    {
        grade = 'B';
    }
    else if (score <= 100 && score >= 90)
    {
        grade = 'A';
    }
    else
    {
        grade = 'F';
    }
    printf("等级为：%c\n", grade);
    return 0;
}
*/


/*
描述
    小乐乐获得4个最大数，请帮他编程找到最大的数。
输入描述：
    一行，4个整数，用空格分开。
输出描述：
    一行，一个整数，为输入的4个整数中最大的整数。
*/

int getMax(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int a, b, c, d;
    printf("请输入4个整数：\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("最大的数为：%d\n", getMax(a, getMax(b, getMax(c, d))));
    return 0;
}