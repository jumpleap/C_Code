#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
题目：
	给你一个t，然后给你t组数据，对于每组数据，
	输入a，b两个整数，如果a能被b整除，输出YES，否则，输出NO
*/

int main()
{
	int t = 0;
	int a = 0, b = 0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &a, &b);

		/*if (b == 0 || a % b)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}*/

		//b不能为0
		if (b != 0)
			printf("%s", a % b ? "NO" : "YES");
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}