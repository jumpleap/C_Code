#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
给你一个四舍五入到两位小数的非负浮点数 celsius 来表示温度，
以 摄氏度（Celsius）为单位。
你需要将摄氏度转换为 开氏度（Kelvin）和 华氏度（Fahrenheit），
并以数组 ans = [kelvin, fahrenheit] 的形式返回结果。
返回数组 ans 。与实际答案误差不超过 10-5 的会视为正确答案。
*/


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize)
{
    double* ans = (double*)malloc(sizeof(double) * 2);
    *returnSize = 2;

    double kelvin = celsius + 273.15;//开氏度
    double fahrenheit = celsius * 1.80 + 32.00;//华氏度

    ans[0] = kelvin;
    ans[1] = fahrenheit;
    return ans;//返回数组起始地址
}

int main()
{
    double celsius = 0.0;
    while (scanf("%lf", &celsius) != EOF)
    {
        int len = 0;
        double* ret = convertTemperature(celsius, &len);

        //打印
        for (int i = 0; i < len; i++)
        {
            printf("%.5lf\n", ret[i]);
        }
    }

	return 0;
}