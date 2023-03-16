#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    //�������ǻ�����
    if (x < 0)
        return false;

    int tmp = x;
    long long sum = 0;//int�����

    while (tmp)
    {
        //*10��Ϊ��λ��++��%10�õ�x������
        sum = sum * 10 + tmp % 10;
        tmp /= 10;//λ��--
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