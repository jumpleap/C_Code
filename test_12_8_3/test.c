#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	输入10个整数，分别统计输出正数、负数的个数。
输入描述：
	输入10个整数（范围-2^31~2^31-1），用空格分隔。
输出描述：
	两行，第一行正数个数，第二行负数个数
*/

int main()
{
    int arr[10] = { 0 };//存储10个整数
    int postive = 0;//累计正整数
    int negative = 0;//累计负整数
    int i = 0;

    printf("请输入10个数：\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        //判断输入的数是否大于0
        if (arr[i] >= 0)
            postive++;
        else
            negative++;
    }
    printf("positive:%d\nnegative:%d\n", postive, negative);
	return 0;
}