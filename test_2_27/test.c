#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	printf("%c\n", '\\');//打印'\'
//	printf("%c\n",'\'' );//打印'
//	printf("%s\n","\"");//打印"
//	return 0;
//}


//定义数组的[]中能不能使用变量，能不能使用const修饰的变量
//#include <stdio.h>
//
//int main()
//{
//	int num = 10;
//	//数组的下标操作符中不能使用变量
//	//int arr[num] = { 1,2,3 };
//
//	const int data = 10;
//	//错误，虽然const修饰的变量不能改变，但是它本质上还是一个变量，不能使用
//	//int arr[data] = { 1,2,3,4,5 };
//	return 0;
//}


//字符串与字符数组的区别
#include <stdio.h>
#include <stdio.h>

int main()
{
	char arr1[] = { 'a','b','c','d' };
	char arr2[] = "abcd";
	//1)字符数组的大小比字符串的占用少1字节
	printf("%d\n", sizeof(arr1));//4
	printf("%d\n", sizeof(arr2));//5

	//字符串有结束标志，字符数组无结束标志
	printf("%d\n", strlen(arr1));//随机值
	printf("%d\n", strlen(arr2));//4
	return 0;
}