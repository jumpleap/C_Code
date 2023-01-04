#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    牛牛很喜欢发短信，他所用的通讯公司的收费方法如下：
    1.每条短信收费0.1元
    2.每条短息的字数不超过60字，如果超过60字，将按照0.2元的价格收费。
    牛牛这个月发了 n 条短信，请问牛牛一共要缴多少短信费
输入描述：
    第一行输入一个正整数 n ，表示发送短信的条数，
    第二行输入 n 个正整数，表示牛牛发送的 n 条短信中每条短信的字数
输出描述：
    输出牛牛这个月要缴的短信费


double judge(int word)
{
    double price = 0.1;
    if (word > 60)
        price = 0.2;
    return price;
}

int main()
{
    int n = 0;
    int word = 0;
    double sum = 0;
    scanf("%d", &n);

    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &word);
        double price = judge(word);
        sum += price;
    }
    printf("%.1lf\n", sum);
    return 0;
}
*/



/*
描述
    牛牛刚刚学了素数的定义：素数值指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数
    牛牛想知道在 [l,r] 范围内全部素数的和
输入描述：
    输入两个正整数 l，r 表示闭区间范围
输出描述：
    输出 [l,r] 范围内的素数的和
*/

#include <stdio.h>

int judgePrime(int x)
{
    int i;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return x;
}

int main()
{
    int l = 0;
    int r = 0;
    int sum = 0;
    scanf("%d %d", &l, &r);

    for (; l <= r; l++)
    {
        int num = judgePrime(l);
        if (num != 0)
        {
            sum += num;
        }
    }

    printf("%d\n", sum);
    return 0;
}