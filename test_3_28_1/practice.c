#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
 给你一个字符串 jewels 代表石头中宝石的类型，
 另有一个字符串 stones 代表你拥有的石头。 
 stones 中每个字符代表了一种你拥有的石头的类型，你想知道你拥有的石头中有多少是宝石。
字母区分大小写，因此 "a" 和 "A" 是不同类型的石头。
*/

//暴力枚举比较
int numJewelsInStones(char* jewels, char* stones)
{
    int count = 0;
    for (int i = 0; i < strlen(jewels); i++)
    {
        for (int j = 0; j < strlen(stones); j++)
        {
            //进行比较
            if (jewels[i] == stones[j])
            {
                count++;
            }
        }
    }
    return count;
}


//哈希表
int numJewelsInStones(char* jewels, char* stones)
{
    int count = 0;
    int hash[128] = { 0 };
    for (int i = 0; i < strlen(stones); i++)
    {
        ++hash[stones[i]];
    }
    for (int i = 0; i < strlen(jewels); i++)
    {
        if (hash[jewels[i]] != 0)
            count += hash[jewels[i]];
    }
    return count;
}