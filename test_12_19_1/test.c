#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	2020年来到了，KiKi要对他的n位好朋友说n遍”Happy new year!Good luck!”的祝福语。
输入描述：
	输入只有一行，其中含有一个正整数 n(1≤n≤20)，代表KiKi说祝福话的遍数。
输出描述：
	输出 n行"Happy new year!Good luck!"。


int main()
{
    int num = 0;
    scanf("%d", &num);

    int i = 0;
    for (i = 0; i < num; i++)
    {
        printf("Happy new year!Good luck!\n");
    }
	return 0;
}
*/


/*
描述
    小乐乐最近接触了求和符号Σ，他想计算的结果。但是小乐乐很笨，请你帮助他解答。
输入描述：
    输入一个正整数n  (1 ≤ n ≤ 10^9)
输出描述：
    输出一个值，为求和结果。
*/

int main()
{
    int num = 0;
    long sum = 0;
    scanf("%d", &num);

    int i;
    for (i = 1; i <= num; i++)
    {
        sum += i;
    }
    printf("%ld\n", sum);
    return 0;
}