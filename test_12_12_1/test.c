#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
描述
	小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。
	如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。
	请你回答他最后得到的数是多少。
输入描述：
	输入包含一个整数n (0 ≤ n ≤ 109)
输出描述：
	输出一个整数，即小乐乐修改后得到的数字。
示例1
	输入：222222
	输出：0
示例2
	输入：123
	输出：101
*/

//法一：使用数组存储0和1
/*
int main()
{
    int num = 0;
    char arr[10] = { 0 };//使用数组存储0和1
    int count = 0; //计数
    int x = 0, i = 0;
    int res = 0;//结果

    scanf("%d", &num);
    while (num)
    {
        x = num % 10;
        if (x % 2 == 0)
        {
            arr[i++] = 0;
        }
        else
        {
            arr[i++] = 1;
        }
        count++;
        num /= 10;
    }

    for (i = count - 1; i >= 0; i--)
    {
        res = res * 10 + arr[i];//从个位开始进行累加
    }
    printf("%d\n", res);
	return 0;
}
*/

//法二：计算一个，乘一个
int main()
{
    int num = 0;
    int res = 0;//结果
    int i = 0;//累加位数

    scanf("%d", &num);
    while (num)
    {
        int x = num % 10;
        if (x % 2 == 0)
            x = 0;
        else
            x = 1;
        res += x * pow(10, i++);//计算一个，乘一个
        num /= 10;
    }
    printf("%d\n", res);
    return 0;
}