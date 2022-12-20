#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	小乐乐在课上学习了二进制八进制与十六进制后，对进制转换产生了浓厚的兴趣。
	因为他的幸运数字是6，所以他想知道一个数表示为六进制后的结果。请你帮助他解决这个问题。
输入描述：
	输入一个正整数n  (1 ≤ n ≤ 109)
输出描述：
	输出一行，为正整数n表示为六进制的结果


//解法一：数组倒序
int main()
{
    int num = 0;
    int sum = 0;
    int arr[10];//数组储存六进制的个数
    scanf("%d", &num);

    int i = 0;
    while (num)
    {
        int x = num % 6;
        arr[i++] = x;//进行储存六进制，下标自增
        num /= 6;
    }

    //倒序打印
    for (i = i - 1; i >= 0; i--)
        printf("%d", arr[i]);
	return 0;
}


//解法二：累计相加
int main()
{
    long num = 0,i = 1;//i代表位数
    long long sum = 0;
    scanf("%ld", &num);

    while (num)
    {
        sum += num % 6 * i;//i代表位数，刚开始是个位
        num /= 6;
        i *= 10;//从个位开始递增：十位、百位……
    }
    printf("%lld\n", sum);
    return 0;
}
*/

//法三：递归
void print(num)
{
    if (num > 5)
    {
        print(num / 6);//进行递归调用
    }
    printf("%d", num % 6);
        
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    print(num);

    return 0;
}