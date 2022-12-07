#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//实现字母的大小写转换。多组输入输出。
/*
//法一：简单运算
int main()
{
	char ch = '0';
	while (scanf("%c", &ch) != EOF)
	{
		getchar();//消耗换行符
		if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch + 'a' - 'A';
		}
		printf("转化后的小写字面为：%c\n", ch);
	}
	return 0;
}
*/

//法二：库函数tolower();
int main()
{
	char ch = '0';
	while (scanf("%c", &ch) != EOF)
	{
		getchar();//消耗换行符
		printf("转换后的小写字母为：%c\n", tolower(ch));
	}
	return 0;
}