#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

/*
给你一个字符串 s ，每 两个 连续竖线 '|' 为 一对 。
换言之，第一个和第二个 '|' 为一对，第三个和第四个 '|' 为一对，以此类推。
请你返回 不在 竖线对之间，s 中 '*' 的数目。
注意，每个竖线 '|' 都会 恰好 属于一个对。
*/

//法一
int countAsterisks(char* s)
{
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        //判断*号
        if (s[i] == '*')
            count++;
        //判断|号
        else if (s[i] == '|')
        {
            //跳到下一个|号处
            while (s[++i] != '|');
        }
        else
        {
            ;//不做任何处理
        }
    }
    return count;
}

//法二
int countAsterisks(char* s)
{
    int count = 0;
    bool flag = true;//标记|号

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '|')
            flag = !flag;//开关，第一次遇到|关，第二次遇到开
        else if (s[i] == '*' && flag)
        {
            //统计'*'号
            count++;
        }
        else
        {
            ;//不做任何处理
        }
    }
    return count;
}