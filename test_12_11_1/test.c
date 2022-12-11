#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    KiKi开始学习英文字母，BoBo老师告诉他，有五个字母A(a), E(e), I(i), O(o),U(u)
    称为元音，其他所有字母称为辅音，请帮他编写程序判断输入的字母是元音（Vowel）
    还是辅音（Consonant）。
输入描述：
    多组输入，每行输入一个字母。
输出描述：
    针对每组输入，输出为一行，如果输入字母是元音（包括大小写），输出“Vowel”，
    如果输入字母是非元音，输出“Consonant”。


int judge(char arr[], char ch)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (ch == arr[i])
        {
            return 1;
        }
    }
    return -1;
}

int main()
{
    char ch = '0';
    char arr[] = "AaEeIiOoUu";
    while (scanf("%c", &ch) != EOF)
    {
        getchar();
        int getValue = judge(arr, ch);
        if (getValue == 1)
            printf("Vowel\n");
        else
            printf("Consonant\n");
    }
    return 0;
}
*/


/*
描述
    KiKi想知道他的考试分数是否通过，请帮他判断。
    从键盘任意输入一个整数表示的分数，编程判断该分数是否在及格范围内，
    如果及格，即：分数大于等于60分，是输出“Pass”，否则，输出“Fail”。
输入描述：
    多组输入，每行输入包括一个整数表示的分数（0~100）。
输出描述：
    针对每行输入，输出“Pass”或“Fail”。
*/

int main()
{
    int score;
    while (scanf("%d", &score) != EOF)
    {
        if (score >= 60)
            printf("Pass\n");
        else
            printf("Fail\n");
    }
    return 0;
}

