#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    //负数不是回文数
    if (x < 0)
        return false;

    int tmp = x;
    long long sum = 0;//int会溢出

    while (tmp)
    {
        //*10是为了位数++，%10得到x的余数
        sum = sum * 10 + tmp % 10;
        tmp /= 10;//位数--
    }
    if (sum == x)
    {
        return true;
    }
    return false;
}

int main()
{
	int num = 0;
	while (scanf("%d", &num) != EOF)
	{
        printf("%d\n", isPalindrome(num));
	}
	return 0;
}