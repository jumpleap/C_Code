#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
题目链接：https://leetcode.cn/problems/first-letter-to-appear-twice/description/

问题描述：
给你一个由小写英文字母组成的字符串 s ，请你找出并返回第一个出现 两次 的字母。
注意：
如果 a 的 第二次 出现比 b 的 第二次 出现在字符串中的位置更靠前，
则认为字母 a 在字母 b 之前出现两次。
s 包含至少一个出现两次的字母。
*/

char repeatedCharacter(char* s)
{
    int hash[26] = { 0 };//记录字符下标对应的位置
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        //如果前面已经出现了相同的字符，则这个字符就是第一个出现两次的字符
        if (hash[s[i] - 'a'] > 0)
            return s[i];
        hash[s[i] - 'a'] = 1;//给出现的字符标记
    }
    return ' ';
}

int main()
{
    char arr[10000] = { 0 };
    gets(arr);
    char ret = repeatedCharacter(arr);
    printf("%c\n", ret);
	return 0;
}