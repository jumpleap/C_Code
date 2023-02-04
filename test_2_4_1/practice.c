#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	输入一个字符串和一个整数 k ，截取字符串的前k个字符并输出
数据范围：
	字符串长度满足:1≤n≤1000  ，1≤k≤n
输入描述：
	1.输入待截取的字符串
	2.输入一个正整数k，代表截取的长度
输出描述：
	截取后的字符串
*/

int main()
{
    char arr[1000] = "";
    int k = 0;
    scanf("%s", arr);
    scanf("%d", &k);

    for (int i = 0; i < k; i++)
    {
        //逐个打印字符
        printf("%c", arr[i]);
    }
    return 0;
}