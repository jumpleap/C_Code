#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	现在有一个长度为 n 的正整数序列，其中只有一种数值出现了奇数次，
	其他数值均出现偶数次，请你找出那个出现奇数次的数值。
数据范围：
	1≤n≤2×10^6
输入描述：
	第一行：一个整数n，表示序列的长度。
	第二行：n个正整数ai，两个数中间以空格隔开。
输出描述：
	一个数，即在序列中唯一出现奇数次的数值。
*/

int main()
{
    int n = 0;
    scanf("%d", &n);
    int num = 0;
    int ret = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        ret ^= num;
    }
    //异或的性质：
    //1）相同数异或为0
    //2）0和任何数异或为数本身
    printf("%d\n", ret);
    return 0;
}