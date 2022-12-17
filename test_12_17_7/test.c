#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
描述
	从键盘输入a, b, c的值，编程计算并输出一元二次方程ax2 + bx + c = 0的根，
	当a = 0时，输出“Not quadratic equation”，当a ≠ 0时，
	根据△ = b2 - 4*a*c的三种情况计算并输出方程的根。
输入描述：
	多组输入，一行，包含三个浮点数a, b, c，以一个空格分隔，
	表示一元二次方程ax2 + bx + c = 0的系数。
输出描述：
	针对每组输入，输出一行，输出一元二次方程ax2 + bx +c = 0的根的情况。
	如果a = 0，输出“Not quadratic equation”；
	如果a ≠  0，分三种情况：
	△ = 0，则两个实根相等，输出形式为：x1=x2=...。
	△  > 0，则两个实根不等，输出形式为：x1=...;x2=...，其中x1  <=  x2。
	△  < 0，则有两个虚根，则输出：x1=实部-虚部i;x2=实部+虚部i，
	即x1的虚部系数小于等于x2的虚部系数，实部为0时不可省略。实部= -b / (2*a),虚部= sqrt(-△ ) / (2*a)
	所有实数部分要求精确到小数点后2位，数字、符号之间没有空格。
*/

int main()
{
    double a, b, c;
    double res, answer1, answer2;//res是△,answer1是实部,answer2是虚部
    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {
        //无根的情况
        if (a == 0)
        {
            printf("Not quadratic equation\n");
            break;
        }

        res = b * b - 4 * a * c; //判别式
        answer1 = (-b - sqrt(res)) / (2 * a);//求一元二次方程的根
        answer2 = (-b + sqrt(res)) / (2 * a);//求一元二次方程的根
        
        //对判别式的情况讨论
        if (res == 0)
        {
            if (answer1 == 0)
            {
                answer1 = 0;//对-0.0的修正
            }
            printf("x1=x2=%.2lf\n", answer1);//根相同
        }
        else if (res > 0)
        {
            printf("x1=%.2lf;x2=%.2lf\n", answer1, answer2);//根不同
        }
        else
        {
            double x = (-b) / (2 * a);//实部
            double y = sqrt(-res) / (2 * a);//虚部
            if (x == 0)
            {
                x = 0;//对-0.0的修正
            }
            printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", x, y, x, y);
        }
    }
	return 0;
}