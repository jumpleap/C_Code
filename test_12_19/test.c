#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	KiKi实现一个简单计算器，实现两个数的“加减乘除”运算，
	用户从键盘输入算式“操作数1运算符操作数2”，计算并输出表达式的值，
	如果输入的运算符号不包括在（+、-、*、/）范围内，输出“Invalid operation!”。
	当运算符为除法运算，即“/”时。如果操作数2等于0.0，则输出“Wrong!Division by zero!”

输入描述：
	输入一行字符串，操作数1+运算符+操作数2 （其中合法的运算符包括：+、-、*、/）。
输出描述：
	输出为一行。如果操作数和运算符号均合法，则输出一个表达式，
	操作数1运算符操作数2=运算结果，各数小数点后均保留4位，数和符号之间没有空格。
	如果输入的运算符号不包括在（+、-、*、/）范围内，输出“Invalid operation!”。
	当运算符为除法运算，即“/”时。
	如果操作数2等于0.0，则输出“Wrong!Division by zero!”。
*/

int main()
{
    double a = .0, b = .0;
    char c = '0';
    scanf("%lf%c%lf", &a, &c, &b);

    if (b == 0)
    {
        printf("Wrong!Division by zero!\n");
        return 0;
    }

    switch (c)
    {
    case '+':
        printf("%.4lf+%.4lf=%.4lf\n", a, b, a + b);
        break;
    case '-':
        printf("%.4lf-%.4lf=%.4lf\n", a, b, a - b);
        break;
    case '*':
        printf("%.4lf*%.4lf=%.4lf\n", a, b, a * b);
        break;
    case '/':
        printf("%.4lf/%.4lf=%.4lf\n", a, b, a / b);
        break;
    default:
        printf("Invalid operation!");
    }
	return 0;
}