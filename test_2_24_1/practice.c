#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//求出两个数的最小公倍数
//法一：循环解决

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	
//	//取两者中的最大值
//	int max = num1 > num2 ? num1 : num2;
//
//	//两者的结果都为0跳出循环
//	while (max % num1 != 0 || max % num2 != 0)
//	{
//		++max;
//	}
//	printf("%d和%d的最小公倍数是：%d", num1, num2, max);
//	return 0;
//}


//法二：公式解决：x / gcd(x,y) * y;
//int getGcd(int x, int y)
//{
//	int tmp = 0;
//	while (tmp = x % y)
//	{
//		x = y;
//		y = tmp;
//	}
//	return y;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	if (x < y)
//	{
//		int tmp = x;
//		x = y;
//		y = tmp;
//	}
//
//	int gcd = getGcd(x, y);
//	printf("%d和%d的最小公倍数是：%d\n", x, y, x / gcd * y);
//	return 0;
//}



//将字符串i love beijing.打印成bejing. love i
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void reverse(char* left, char* right)
{
	assert(left && right);
	while (left < right)
	{
		char ch = *left;
		*left = *right;
		*right = ch;
		left++;
		right--;
	}
}

int main()
{
	char str[101] = "0";
	gets(str);
	int len = strlen(str);

	reverse(str, str + len - 1);
	char* cur = str;
	
	while (*cur)
	{
		char* start = cur;
		while (*cur != ' ' && *cur != '\0')
		{
			cur++;
		}
		reverse(start, cur - 1);
		if (*cur == ' ')
			cur++;
	}
	printf("%s\n", str);
	return 0;
}