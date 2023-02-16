#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int i = 10;
//	int j = 20;
//	int k = 3;
//	k *= i + j;
//	printf("%d\n", k);
//	return 0;
//}


//模拟实现库函数strlen

#include <stdio.h>
#include <assert.h>

int my_strlen(const char* arr)
{
	assert(arr);//断言
	int count = 0;
	while (*arr++ != '\0')
		count++;
	return count;
}

int main()
{
	char arr[] = "i love bit";
	//int len = strlen(arr);
	int count = my_strlen(arr);
	printf("%d\n", count);
	return 0;
}