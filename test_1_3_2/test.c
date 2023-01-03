#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
描述
    规定一种对于复合词的简写方式为只保留每个组成单词的首字母，并将首字母大写后再连接在一起
    比如 “College English Test”可以简写成“CET”，
    “Computer Science”可以简写为“CS”，“I am Bob”简写为“IAB”
    输入一个长复合词（组成单词数 sum,sum≥1且sum≤100,每个单词长度len,len≥1且len≤50），
    请你输出它的简写
输入描述：
    输入一个复合词
输出描述：
    输出一行，表示复合词的简写


//解法一：多组输入法
int main()
{
    char arr[50];
    //多次输入一个单词
    while (scanf("%s", arr) != EOF)
    {
        //进行第一个字母的判断，小写的话减去32
        if (arr[0] >= 'a' && arr[0] <= 'z')
            arr[0] -= 32;
        printf("%c", arr[0]);//输出首字母
    }
    return 0;
}
*/


//解法二
int main()
{
    char arr[5000];
    gets(arr);//输入，可以接受空格
    int len = strlen(arr);//求输入字符串的长度

    int i = 0;
    for (i = 0; i < len; i++)
    {
        //把小写字母全部转化为大写字母
        if (arr[i] >= 97)
            arr[i] -= 32;
    }

    for (i = 0; i < len; i++)
    {
        //第一个字符
        if (i == 0)
            printf("%c", arr[i]);

        //空格后的字符
        if (arr[i] == ' ')
            printf("%c", arr[i + 1]);
    }
    return 0;
}