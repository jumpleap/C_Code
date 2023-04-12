#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
题目链接
    https://leetcode.cn/problems/zuo-xuan-zhuan-zi-fu-chuan-lcof/description/?orderBy=hot&languageTags=c

题目信息
字符串的左旋转操作是把字符串前面的若干个字符转移到字符串的尾部。
请定义一个函数实现字符串左旋转操作的功能。
比如，输入字符串"abcdefg"和数字2，该函数将返回左旋转两位得到的结果"cdefgab"。
*/

//依次左旋
char* reverseLeftWords(char* s, int k)
{
    int len = strlen(s);
    k %= len;//防止左旋的字符长度过大
    int i = 0;
    int j = 0;

    for (i = 0; i < k; i++)
    {
        char tmp = s[0];//每次取一个
        for (j = 0; j < len - 1; j++)
        {
            s[j] = s[j + 1];
        }
        s[j] = tmp;//插入到最后一个
    }
    return s;
}


//拼接法
char* reverseLeftWords(char* s, int k)
{
    int len = strlen(s);
    char* tmp = (char*)malloc(sizeof(char) * (len + 1));

    strcpy(tmp, s + k);//拷贝后面的字符
    strncat(tmp, s, k);//把前面的字符接上
    strcpy(s, tmp);//重新拷贝回去
    free(tmp);
    tmp = NULL;
    return s;
}


//整体逆序法
void reverse(char* s, int start, int end)
{
    char tmp = 0;
    int left = start;
    int right = end;

    while (left < right)
    {
        tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;

        left++;
        right--;
    }
}

char* reverseLeftWords(char* s, int k)
{
    int len = strlen(s);
    k %= len;
    //前半段逆序:ba
    reverse(s, 0, k - 1);
    //后半段逆序:gfedc
    reverse(s, k, len - 1);
    //bagfedc
    //整体逆序:cdefgab
    reverse(s, 0, len - 1);
    return s;
}