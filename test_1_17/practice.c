#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
描述
    小明同学最近开发了一个网站，在用户注册账户的时候，需要设置账户的密码，
    为了加强账户的安全性，小明对密码强度有一定要求：
    1. 密码只能由大写字母，小写字母，数字构成；
    2. 密码不能以数字开头；
    3. 密码中至少出现大写字母，小写字母和数字这三种字符类型中的两种；
    4. 密码长度至少为8
    现在小明受到了n个密码，他想请你写程序判断这些密码中哪些是合适的，
    哪些是不合法的。
输入描述：
    输入一个数n，接下来有n(n≤100)行，每行一个字符串，表示一个密码，
    输入保证字符串中只出现大写字母，小写字母和数字，字符串长度不超过100。
输出描述：
    输入n行，如果密码合法，输出YES，不合法输出NO
*/

int judgeStr(char ch)
{
    if ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z')
        || (ch >= 'a' && ch <= 'z'))
        return 1;
    else
        return 0;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    char passwd[100] = { 0 };
    int upper, lower, digit;

    for (int i = 0; i < n; i++)
    {
        scanf("%s", passwd);

        //字符数组长度小于8
        if (strlen(passwd) < 8)
        {
            printf("NO\n");
            continue;
        }

        //判断字符是否以数字开头
        if (passwd[0] >= '0' && passwd[0] <= '9')
        {
            printf("NO\n");
            continue;
        }

        //判断字符串中是否有两种以上的字符
        upper = lower = digit = 0;
        for (int j = 0; passwd[j] != '\0'; j++)
        {
            if (judgeStr(passwd[i]))
                upper = 1;
            if (judgeStr(passwd[i]))
                lower = 1;
            if (judgeStr(passwd[i]))
                digit = 1;
        }

        if (upper + lower + digit >= 2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}