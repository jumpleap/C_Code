#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
题目链接：https://leetcode.cn/problems/check-if-the-sentence-is-pangram/description/

题目信息：
全字母句 指包含英语字母表中每个字母至少一次的句子。
给你一个仅由小写英文字母组成的字符串 sentence ，请你判断 sentence 是否为 全字母句 。
如果是，返回 true ；否则，返回 false 。
*/

bool checkIfPangram(char* sentence)
{
    int hash[26] = { 0 };
    int len = strlen(sentence);

    for (int i = 0; i < len; i++)
    {
        //把sentence中的字符记录在hash下标中
        hash[sentence[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        //遍历哈希数组，看是否26个字母均有字符
        if (hash[i] == 0)
            return false;
    }
    return true;
}



/*
题目链接：https://leetcode.cn/problems/split-a-string-in-balanced-strings/description/?orderBy=hot&languageTags=c

题目信息：
平衡字符串 中，'L' 和 'R' 字符的数量是相同的。
给你一个平衡字符串 s，请你将它分割成尽可能多的子字符串，并满足：
每个子字符串都是平衡字符串。
返回可以通过分割得到的平衡字符串的 最大数量 。
*/

int balancedStringSplit(char* s)
{
    int len = strlen(s);
    int maxBalance = 0;
    int flag = 0;

    for (int i = 0; i < len; i++)
    {
        //是'L'则++
        if (s[i] == 'L')
            flag++;
        //是'R'则--
        if (s[i] == 'R')
            flag--;
        //标志位为0则平衡字符串字串+1
        if (flag == 0)
            maxBalance++;
    }
    return maxBalance;
}