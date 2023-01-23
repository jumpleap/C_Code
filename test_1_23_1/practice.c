#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//求字符串长度的三种方式

//法一：库函数strlen()求解
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = strlen(arr);
//	printf("%d\n", len);//7
//	return 0;
//}


//法二：计数器
//int my_strlen(char* arr)
//{
//	int count = 0;//计数器
//	while (*arr++ != '\0')
//	{
//		count++;
//	}
//	return count;//返回长度
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	
//	int len = my_strlen(arr);
//	printf("%d\n", len);//6
//	return 0;
//}


//法三：递归
int my_strlen(char* arr)
{
	if (*arr != '\0')
		return 1 + my_strlen(arr + 1);//递归得到数组长度
	else
		return 0;//得到0后开始回归
}

int main()
{
	char arr[] = "abcdefg";

	int len = my_strlen(arr);
	printf("%d\n", len);//7
	return 0;
}