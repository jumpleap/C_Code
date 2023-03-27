#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
给你两个整数 left 和 right ，在闭区间 [left, right] 范围内，
统计并返回 计算置位位数为质数 的整数个数。
计算置位位数 就是二进制表示中 1 的个数。
例如， 21 的二进制表示 10101 有 3 个计算置位。
*/

//计算二进制中1的个数
int one_of_bit(int left)
{
    int count = 0;
    while (left)
    {
        left = left & (left - 1);
        count++;
    }
    return count;
}

int countPrimeSetBits(int left, int right)
{
    //32个位中的质数
    int arr[] = { 2,3,5,7,11,13,17,19,23,29,31 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;//计数变量

    while (left <= right)
    {
        int count = one_of_bit(left);
        for (int i = 0; i < len; i++)
        {
            //像等则sum自增
            if (arr[i] == count)
            {
                sum++;
                break;
            }
        }
        left++;
    }
    return sum;
}



/*
给你一个字符串 s ，将该字符串中的大写字母转换成相同的小写字母，返回新的字符串。
*/

//判断是不是大写字母
char* toLowerCase(char* s)
{
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    return s;
}

//库函数解决
char* toLowerCase(char* s)
{
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        //判断是不是大写字母
        if (isupper(s[i]))
        {
            //转化成小写字母
            s[i] = tolower(s[i]);
        }
    }
    return s;
}