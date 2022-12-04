#define _CRT_SECURE_NO_WARNINGS
#include "my._Instr.h"

int main()
{
	char arr1[100] = "";
	char arr2[30] = "";
	printf("请输入第一个字符串：\n");
	scanf("%s", arr1);
	printf("请输入第二个字符串：\n");
	scanf("%s", arr2);

	connect(arr1,arr2);
	printf("连接后的字符串为：%s", arr1);
	return 0;
}