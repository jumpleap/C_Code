#define _CRT_SECURE_NO_WARNINGS


//求字符串长度
//法一: strlen()库函数
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "abcdefhdh";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//法二：计数器
//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(const char* arr)
//{
//	assert(arr);//判断空指针
//	int count = 0;
//
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdefhdh";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//
//法三：指针-指针
//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(const char* arr)
//{
//	assert(arr);//判断空指针
//	const char* cur = arr;
//
//	while (*cur != '\0')
//		cur++;
//	
//	//指针-指针得到数据的个数
//	return cur - arr;
//}
//
//int main()
//{
//	char arr[] = "abcdefhdh";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//
//法四：递归
//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(const char* arr)
//{
//	assert(arr);
//	if (*arr == '\0')
//		return 0;
//	return 1 + my_strlen(arr + 1);
//}
//
//int main()
//{
//	char arr[] = "abcdefhdh";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//模拟实现strcpy()
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);//判断空指针
//	char* start = dest;
//
//	while (*dest++ = *src++);//赋值
//	return start;//返回目标空间的起始地址
//}
//
//int main()
//{
//	char arr1[] = "abcdefhdh";
//	char arr2[20] = { 0 };
//	char* ret = my_strcpy(arr2,arr1);
//	printf("%s\n", ret);
//	return 0;
//}


//模拟实现strcmp
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);//判断空指针
//
//	/*while (*str1  && *str2)
//	{
//		if (*str1 != *str2)
//			return *str1 - *str2;
//		str1++;
//		str2++;
//	}*/
//
//	//判断每个字符是否相等
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "acbd";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}



////模拟实现strcat
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);//判断空指针
//	char* start = dest;
//
//	//目标空间先找到‘\0'
//	while (*dest != '\0')
//		dest++;
//	//复制源字符串的值到目标空间中
//	while (*dest++ = *src++);
//	return start;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	//strcat是从'\0'开始复制的，然后把源字符串的'\0'也复制过来了
//	char* ret = my_strcat(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}



//模拟实现strstr
#include <stdio.h>
#include <assert.h>

char* my_strstr(const char* dest, const char* src)
{
	const char* cur = NULL;
	const char* tmp = NULL;

	while (*dest != '\0')
	{
		cur = dest;//指向被查找串
		tmp = src;//指向被查找串

		//判断被查找串是否为'\0'
		while (*tmp != '\0')
		{
			//不相等
			if (*tmp != *cur)
				break;
			tmp++;
			cur++;
		}
		//看看查找的串是否到了末尾
		if (*tmp == '\0')
			return dest;

		dest++;
	}
	return NULL;//没有找到
}

int main()
{
	char arr1[20] = "abbbbcdefg";
	char arr2[] = "bbbc";

	char* ret = my_strstr(arr1, arr2);
	printf("%s\n", ret);
	return 0;
}

//char* my_strstr(const char* dest, const char* src)
//{
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	char* cp = (char*)dest;
//
//	while (*cp)
//	{
//		s1 = dest;//指向被查找串
//		s2 = src;//指向被查找串
//
//		//判断被查找串是否为'\0'
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		//看看查找的串是否到了末尾
//		if (*s2 == '\0')
//			return cp;
//
//		cp++;
//	}
//	return NULL;//没有找到
//}