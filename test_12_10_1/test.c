#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	BoBo买了一箱酸奶，里面有n盒未打开的酸奶，KiKi喜欢喝酸奶，第一时间发现了酸奶。KiKi每h分钟能喝光一盒酸奶，并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒未打开的酸奶？
输入描述：
	多组输入，每组输入仅一行，包括n，h和m（均为整数）。输入数据保证m <= n * h。
输出描述：
	针对每组输入，输出也仅一行，剩下的未打开的酸奶盒数。

int main()
{
    int n, h, m;
    printf("请输入有多少盒酸奶、喝一盒酸奶所需的时间和总的时间：\n");
    scanf("%d %d %d", &n, &h, &m);

    if (m % h == 0)
    {
        //如果时间刚刚出尽
        n = n - m / h;
    }
    else
    {
        //如果时间不能除尽，则需要多喝一瓶
        n = n - (m / h + 1);
    }
    printf("%d\n", n);
	return 0;
}
*/


/*
描述
    输入一个浮点数f, 表示华氏温度, 输出对应的摄氏温度c , c=5/9*(f-32)
输入描述：
    输入一个浮点数f(1 <= f<= 100000)
输出描述：
    输出浮点数,保留3位小数
*/

int main()
{
    float temperature = 0.0;
    float get = 0.0;
    printf("请输入华氏华氏温度：\n");
    scanf("%f", &temperature);

    get = 5.0 / 9 * (temperature - 32); //华氏摄氏度转温度
    printf("%.3f\n", get);
    return 0;
}