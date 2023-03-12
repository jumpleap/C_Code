#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//找到字符串中第一次只出现一个的字符

char firstUniqChar(char* s)
{
    int hash[128] = { 0 };//哈希数组

    //s中的值映射到哈希下标
    for (int i = 0; i < strlen(s); i++)
    {
        //哈希的下标对应值自增
        hash[s[i]]++;
    }

    for (int i = 0; i < strlen(s); i++)
    {
        //找到哈希中只出现一次的值
        if (hash[s[i]] == 1)
            return s[i];
    }
    return ' ';//没有只出现一次的值
}