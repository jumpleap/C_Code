#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//strlen -- > 返回'\0'之前的字符数
//函数原型：size_t strlen(const char* str);

//int main()
//{
//	char str[] = "abcdef\0efg";
//	printf("%d\n", strlen(str));//？ -> 6
//	return 0;
//}


//思考以下问题
//int main()
//{
//	char str1[] = "abcde";
//	char str2[] = "ab";
//
//	if (strlen(str2) - strlen(str1) > 0)
//	{
//		printf("str2 > str1\n");//str2 > str1?
//		//因为strlen返回值类型的无符号类型
//	}
//	else
//	{
//		printf("str1 < str2\n");
//	}
//	return 0;
//}



//strcpy  ---> 字符串拷贝函数
//函数原型：char* strcpy(char* dest, const char* src);
//1.源字符串必须以'\0'结尾
//2.strcpy也会把源字符串的'\0'拷贝道目标空间中去
//3.目标空间必须比源字符串空间大

//int main()
//{
//	char arr1[3] = { 'a','b' };
//	//char arr2[5] = { 'a','v','c' ,'b','d' };
//	//strcpy(arr1, arr2);
//	////错误，源字符串找不到'\0'，所以无法结尾
//	char arr2[5] = "xyzg";
//	//strcpy(arr1, arr2);
//	//strcpy(arr1, arr2);//目标空间小于拷贝的空间，程序崩溃
//
//	printf("%s\n", arr1);
//	return 0;
//}



//strcat
//函数原型 ： char* strcat(char* dest, const char* src);
//1.目标空间要足够大 --> 能够放下源字符串添加到目标空间中去
//2.源字符串必须以'\0'结尾


//int main()
//{
//	char arr1[10] = "abcd";
//	char arr2[3] = "ef";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//字符串自己给自己追加?
//字符串不能自己给自己追加，这样会导致程序崩溃
//int main()
//{
//	char arr[15] = "abcde";
//	strcat(arr, arr);//程序崩溃
//	printf("%s\n", arr);
//	return 0;
//}


//strcmp -->  字符串比较函数
//函数原型： int strcmp(const char* str1, const char* str2);
//返回值
//返回>0的值 -- str1 > str2
//返回<0的值 -- str1 < str2
//返回=0的值 -- str1 = str2

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcde";
//	int ret = strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}


//strncpy --> 拷贝n个字符到目标空间中去
//函数原型：char* strncpy(char* dest, const char* src, size_t n);
//当拷贝的字符不足时，后面补0填充

//int main()
//{
//	char arr1[10] = "";
//	char arr2[5] = "abcd";
//	strncpy(arr1, arr2, 8);//不足的字符以0填充
//	return 0;
//}



//strncat --> 把n个字符连接到目标空间的后面
//函数原型：char* strncat(char* dest, const char* src, size_t num);

//int main()
//{
//	char arr1[10] = "abc";
//	char arr2[5] = "xyz";
//	strncat(arr1, arr2, 5);//不足的以0填充，最后添加上 '\0'
//	return 0;
//}


//strncmp --> 比较n个字符
//函数原型：char* strncmp(const char* dest, const char* src, size_t num);

//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[10] = "abcdefg";
//	printf("%d\n", strncmp(arr1, arr2, 5));
//	return 0;
//}


//strstr -- > 在目标字符串中查找给定字符串的位置
//函数原型：char* strstr(const char* dest, const char* src):

//int main()
//{
//	char arr[] = "abcdefghijk";
//	char arr1[] = "hij";
//	char* cur = strstr(arr, arr1);
//	printf("%s\n", cur);
//	return 0;
//}


//strtok --> 分隔字符串
//函数原型：char* strtok(char* dest, cosnt char* sep);

//int main()
//{
//	char arr[] = "972606225@qq.com";
//	char* seq = "@.";
//
//	char* ret = strtok(arr, seq);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, seq);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, seq);
//	printf("%s\n", ret);
//	return 0;
//}


//循环的方法
//int main()
//{
//	char arr[] = "972606225@qq.com";
//	char* seq = "@.";
//	char* ret;
//
//	for (ret = strtok(arr, seq); ret != NULL; ret = strtok(NULL, seq))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}



//strerror --> 返回错误码多对应的信息
//#include <errno.h>
//
//int main()
//{
//	FILE* pf = fopen("ab.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("");
//	}
//	return 0;
//}




//memcpy --> 内存拷贝函数
//注意：该函数不能拷贝自己的一部分给自己的另一部分

//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[5] = { 1,2,3,4,5 };
//	memcpy(arr1, arr2, 16);
//	return 0;
//}


//memmove --> 字符串拷贝函数【可以拷贝内存重叠的部分】
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 1,2,3,4,5 };
//	memmove(arr1, arr1 + 2, 20);
//	return 0;
//}


//memcmp ---> 内存比较函数
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5};
//	int arr2[5] = { 1,2,3,4,5 };
//	int ret = memcmp(arr1, arr2, sizeof(int) * 2);
//	printf("%d\n", ret);
//	return 0;
//}



//模拟实现
//1.strlen的模拟实现

#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


//int my_strlen(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//		return 0;
//	return 1 + my_strlen(str + 1);
//}


//int my_strlen(const char* str)
//{
//	assert(str);
//	const char* cur = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - cur;
//}
//
//int main()
//{
//	char str[] = "abdugudfg";
//	printf("%d\n", my_strlen(str));
//	return 0;
//}



//strcpy的模拟实现
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* cur = dest;
//	while (*dest++ = *src++);
//	return cur;
//}
//
//int main()
//{
//	char dest[100] = "";
//	char src[] = "hdsgfhushfhshf";
//	char* ret = my_strcpy(dest, src);
//	printf("%s\n", ret);
//	return 0;
//}



//模拟实现strcat函数
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* cur = dest;
//
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++);
//
//	return cur;
//}
//
//int main()
//{
//	char dest[100] = "hhhhhabcd";
//	char src[] = "hdsgfhushfhshf";
//	char* ret = my_strcat(dest, src);
//	printf("%s\n", ret);
//	return 0;
//}



//模拟实现strstr
//char* my_strstr(const char* dest, const char* src)
//{
//	assert(dest && src);
//	char* cp = (char*)dest;
//	char* s1 = NULL;
//	char* s2 = NULL;
//
//	while (*cp)
//	{
//		s1 = cp;//回溯
//		s2 = (char*)src;//回溯
//
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//
//		//说明s2已经到尾了
//		if (*s2 == '\0')
//			return cp;
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char dest[100] = "abbbbcdef";
//	char src[] = "bbcd";
//	char* ret = my_strstr(dest, src);
//	printf("%s\n", ret);
//	return 0;
//}



//模拟实现strcmp
//int my_strcmp(const char* dest, const char* src)
//{
//	assert(dest && src);
//	while (*dest)
//	{
//		if (*dest != *src)
//			break;
//		dest++;
//		src++;	
//	}
//	return *dest - *src;
//}
//
//int main()
//{
//	char dest[] = "a";
//	char src[] = "";
//	int ret = my_strcmp(dest, src);
//	printf("%d\n", ret);
//	return 0;
//}


//模拟实现memcpy
//void* memcpy(void* dest, void* src, int len)
//{
//	assert(dest && src);
//	void* ret = dest;
//
//	while (len--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[5] = { 1,2,3,4,5 };
//	int* ret = my_memcpy(arr1, arr2, 16);
//	return 0;
//}


//模拟实现memmove
void* my_memmove(void* dest, void* src, int len)
{
	assert(dest && src);
	void* ret = dest;

	if (dest < src)
	{
		//前 --> 后
		while (len--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//后到前
		while (len--)
		{
			*((char*)dest + len) = *((char*)src + len);
		}
	}
	return ret;
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* ret = my_memmove(arr1, arr1 + 2, 20);

	return 0;
}