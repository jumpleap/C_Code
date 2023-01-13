#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//库函数的了解
//1)strcpy()函数:字符串复制
//char* strcpy(char* destination, const char* source);
//解释：
//strcpy()函数的返回值：destination被返回；
//const char* source: 被复制的函数，const表示source中的内容不能被再次改变
//char* destination: 目的函数，source中的内容复制到destination中
//需要头文件: <string.h>


//2)strcat()函数：字符串连接函数
//char * strcat ( char * destination, const char * source );
//strcat的函数：destination被返回;
//const char * source: 连接函数,const: source中内容不能被再次修改
//char * destination: 目的函数，连接函数连接在目的函数后面
//需要头文件: <string.h>
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "hughdsh";
//	char str[101] = "acbdghdgsh";
//
//	//字符串复制函数
//	strcpy(str, arr1);//把arr字符串中内容复制到str中
//	printf("%s\n", str);//abcdefg
//
//	//字符串连接函数
//	strcat(str, arr2);//把arr2中字符串的内容连接到str字符串的后面
//	printf("%s\n", str);//abcdefghughdsh
//	return 0;
//}

#include <stdio.h>

//得到两个数的最大值的函数
//返回类型：int  函数名:getMax  参数列表：a,b
int getMax(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int max = getMax(a, b);
	printf("%d\n", max);
	return 0;
}