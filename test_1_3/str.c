#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    给定长度为n的只有小写字母的字符串s，进行m次操作，
    每次将[l,r]范围内所有c1字符改成c2，输出操作完的字符串
输入描述：
    第一行两个数n,m
    第二行一个字符串s
    之后m行，每行两个数l r两个字符c1 c2
输出描述：
    输出一行一个字符串
*/

int main()
{
    int n, m, num1, num2;//n为字符串长度，m为转化次数，num1—num2是转化范围
    char ch1, ch2;//ch1,ch2：使用ch2中的字符替换ch1中字符串的字符
    char arr[100];//字符数组
    //输入
    scanf("%d %d", &n, &m);
    scanf("%s", arr);
    int i, j;

    //进行m次转化
    for (i = 0; i < m; i++)
    {
        //输入转化范围和转换的值
        scanf("%d %d %c %c", &num1, &num2, &ch1, &ch2);
        for (j = num1; j <= num2; j++)
        {
            //判断ch1是否是字符数组中的字符
            if (ch1 == arr[j - 1])
            {
                arr[j - 1] = ch2;//进行字符替换
            }
        }
    }

    printf("%s\n", arr);//输出

    return 0;
}