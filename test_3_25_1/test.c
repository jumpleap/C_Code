#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//strlen -- > ����'\0'֮ǰ���ַ���
//����ԭ�ͣ�size_t strlen(const char* str);

//int main()
//{
//	char str[] = "abcdef\0efg";
//	printf("%d\n", strlen(str));//�� -> 6
//	return 0;
//}


//˼����������
//int main()
//{
//	char str1[] = "abcde";
//	char str2[] = "ab";
//
//	if (strlen(str2) - strlen(str1) > 0)
//	{
//		printf("str2 > str1\n");//str2 > str1?
//		//��Ϊstrlen����ֵ���͵��޷�������
//	}
//	else
//	{
//		printf("str1 < str2\n");
//	}
//	return 0;
//}



//strcpy  ---> �ַ�����������
//����ԭ�ͣ�char* strcpy(char* dest, const char* src);
//1.Դ�ַ���������'\0'��β
//2.strcpyҲ���Դ�ַ�����'\0'������Ŀ��ռ���ȥ
//3.Ŀ��ռ�����Դ�ַ����ռ��

//int main()
//{
//	char arr1[3] = { 'a','b' };
//	//char arr2[5] = { 'a','v','c' ,'b','d' };
//	//strcpy(arr1, arr2);
//	////����Դ�ַ����Ҳ���'\0'�������޷���β
//	char arr2[5] = "xyzg";
//	//strcpy(arr1, arr2);
//	//strcpy(arr1, arr2);//Ŀ��ռ�С�ڿ����Ŀռ䣬�������
//
//	printf("%s\n", arr1);
//	return 0;
//}



//strcat
//����ԭ�� �� char* strcat(char* dest, const char* src);
//1.Ŀ��ռ�Ҫ�㹻�� --> �ܹ�����Դ�ַ�����ӵ�Ŀ��ռ���ȥ
//2.Դ�ַ���������'\0'��β


//int main()
//{
//	char arr1[10] = "abcd";
//	char arr2[3] = "ef";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//�ַ����Լ����Լ�׷��?
//�ַ��������Լ����Լ�׷�ӣ������ᵼ�³������
//int main()
//{
//	char arr[15] = "abcde";
//	strcat(arr, arr);//�������
//	printf("%s\n", arr);
//	return 0;
//}


//strcmp -->  �ַ����ȽϺ���
//����ԭ�ͣ� int strcmp(const char* str1, const char* str2);
//����ֵ
//����>0��ֵ -- str1 > str2
//����<0��ֵ -- str1 < str2
//����=0��ֵ -- str1 = str2

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcde";
//	int ret = strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}


//strncpy --> ����n���ַ���Ŀ��ռ���ȥ
//����ԭ�ͣ�char* strncpy(char* dest, const char* src, size_t n);
//���������ַ�����ʱ�����油0���

//int main()
//{
//	char arr1[10] = "";
//	char arr2[5] = "abcd";
//	strncpy(arr1, arr2, 8);//������ַ���0���
//	return 0;
//}



//strncat --> ��n���ַ����ӵ�Ŀ��ռ�ĺ���
//����ԭ�ͣ�char* strncat(char* dest, const char* src, size_t num);

//int main()
//{
//	char arr1[10] = "abc";
//	char arr2[5] = "xyz";
//	strncat(arr1, arr2, 5);//�������0��䣬�������� '\0'
//	return 0;
//}


//strncmp --> �Ƚ�n���ַ�
//����ԭ�ͣ�char* strncmp(const char* dest, const char* src, size_t num);

//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[10] = "abcdefg";
//	printf("%d\n", strncmp(arr1, arr2, 5));
//	return 0;
//}


//strstr -- > ��Ŀ���ַ����в��Ҹ����ַ�����λ��
//����ԭ�ͣ�char* strstr(const char* dest, const char* src):

//int main()
//{
//	char arr[] = "abcdefghijk";
//	char arr1[] = "hij";
//	char* cur = strstr(arr, arr1);
//	printf("%s\n", cur);
//	return 0;
//}


//strtok --> �ָ��ַ���
//����ԭ�ͣ�char* strtok(char* dest, cosnt char* sep);

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


//ѭ���ķ���
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



//strerror --> ���ش�������Ӧ����Ϣ
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




//memcpy --> �ڴ濽������
//ע�⣺�ú������ܿ����Լ���һ���ָ��Լ�����һ����

//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[5] = { 1,2,3,4,5 };
//	memcpy(arr1, arr2, 16);
//	return 0;
//}


//memmove --> �ַ����������������Կ����ڴ��ص��Ĳ��֡�
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 1,2,3,4,5 };
//	memmove(arr1, arr1 + 2, 20);
//	return 0;
//}


//memcmp ---> �ڴ�ȽϺ���
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5};
//	int arr2[5] = { 1,2,3,4,5 };
//	int ret = memcmp(arr1, arr2, sizeof(int) * 2);
//	printf("%d\n", ret);
//	return 0;
//}



//ģ��ʵ��
//1.strlen��ģ��ʵ��

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



//strcpy��ģ��ʵ��
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



//ģ��ʵ��strcat����
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



//ģ��ʵ��strstr
//char* my_strstr(const char* dest, const char* src)
//{
//	assert(dest && src);
//	char* cp = (char*)dest;
//	char* s1 = NULL;
//	char* s2 = NULL;
//
//	while (*cp)
//	{
//		s1 = cp;//����
//		s2 = (char*)src;//����
//
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//
//		//˵��s2�Ѿ���β��
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



//ģ��ʵ��strcmp
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


//ģ��ʵ��memcpy
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


//ģ��ʵ��memmove
void* my_memmove(void* dest, void* src, int len)
{
	assert(dest && src);
	void* ret = dest;

	if (dest < src)
	{
		//ǰ --> ��
		while (len--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//��ǰ
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