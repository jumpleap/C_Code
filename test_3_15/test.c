#define _CRT_SECURE_NO_WARNINGS

//法一：使用库函数strlen()求解
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[100] = "";
//
//	while(scanf("%s", str)!=EOF)
//		printf("%d\n", strlen(str));
//	return 0;
//}


//法二:计数器
//#include <stdio.h>
//#include <assert.h>
//
//int getCharTotal(const char* str)
//{
//	assert(str);//判断空指针
//	int count = 0;
//	//统计'\0'之前的字符数
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char str[100] = "";
//
//	while (scanf("%s", str) != EOF)
//	{
//		int total = getCharTotal(str);
//		printf("%d\n", total);
//	}
//	return 0;
//}



//法三：指针 - 指针
//#include <stdio.h>
//#include <assert.h>
//
//int getCharTotal(const char* str)
//{
//	assert(str);//判断空指针
//
//	const char* cur = str;//遍历指针
//	//使遍历指针遍历到'\0'的位置
//	while (*cur != '\0')
//	{
//		cur++;
//	}
//	//指针-指针得到的是字符个数
//	return cur - str;
//}
//
//int main()
//{
//	char str[100] = "";
//
//	while (scanf("%s", str) != EOF)
//	{
//		int total = getCharTotal(str);
//		printf("%d\n", total);
//	}
//	return 0;
//}



//递归
#include <stdio.h>
#include <assert.h>

int getCharTotal(const char* str)
{
	assert(str);//判断空指针
	if (*str == '\0')
		return 0;
	return 1 + getCharTotal(str + 1);
}

int main()
{
	char str[100] = "";

	while (scanf("%s", str) != EOF)
	{
		int total = getCharTotal(str);
		printf("%d\n", total);
	}
	return 0;
}