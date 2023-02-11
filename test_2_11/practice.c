#define _CRT_SECURE_NO_WARNINGS

/*
将一个字符串str的内容颠倒过来，并输出。
数据范围：
	1≤len(str)≤10000
输入描述:
	输入一个字符串，可以有空格
输出描述:
	输出逆序的字符串
*/

#include <stdio.h>
#include <string.h>

void reverse(char* str, int len)
{
    int left = 0;
    int right = len - 1;

    while (left < right)
    {
        //交换首尾
        char tmp = str[left];
        str[left] = str[right];
        str[right] = tmp;

        left++;
        right--;
    }
}

int main()
{
    char arr[10000] = "";
    //使用gets函数能接收含空格的字符串
    gets(arr);

    int len = strlen(arr);//字符串长度
    reverse(arr, len);
    printf("%s\n", arr);
    return 0;
}