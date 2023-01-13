#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//
//char* reverse_string(char* string)
//{
//	char* left = string;
//	char* right = string + strlen(string) - 1;//右指针到字符串最后
//
//	while (left < right)
//	{
//		//交换字符
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;//left指针前移
//		right--;//right指针后移
//	}
//	return string;
//}
//
//int main()
//{
//	char str[100] = "";
//	scanf("%s", str);
//	char* arr = reverse_string(str);
//	printf("%s\n", arr);
//	return 0;
//}


//递归和非递归分别实现strlen
#include <stdio.h>

//1)递归实现strlen
/*
int my_strlen(char* str)
{
	//递归：没有遇到'\0'
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;//遇到'\0'
}

int main()
{
	char str[100] = "";
	scanf("%s", str);

	int len = my_strlen(str);
	printf("%d\n", len);
	return 0;
}
*/


//2）非递归实现strlen

int my_strlen(char* arr)
{
	int count = 0;//计算器
	
	//判断是否遇到'\0'
	while (*arr++ != '\0')
	{
		count++;
	}

	return count;
}

int main()
{
	char arr[100] = "";
	scanf("%s", arr);

	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}