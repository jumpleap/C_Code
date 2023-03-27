#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
#include <assert.h>

int my_memcmp(const void* ptr1, const void* ptr2, size_t num)
{
	assert(ptr1 && ptr2);
	while (num)
	{
		//�����������
		if ((*(char*)ptr1) != (*(char*)ptr2))
			break;

		ptr1 = (char*)ptr1 + 1;
		ptr2 = (char*)ptr2 + 1;
		num--;
	}
	//�ж��ǲ���ѭ���������һ��
	if (num == 0)
	{
		return 0;
	}
	//�������һ��
	return *(char*) ptr1 - *(char*)ptr2;
}

int main()
{
	int arr1[5] = { 1,2,3,4,6 };
	int arr2[5] = { 1,2,3,4,5 };
	int ret = my_memcmp(arr1, arr2, 20);
	printf("%d\n", ret);
	return 0;
}


//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 1,2,3,4,6 };
//	int ret = memcmp(arr1, arr2, 16);//�Ƚ�16���ֽڵ�����
//	printf("%d\n", ret);//0
//	return 0;
//}

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//
//	//�жϴ�СȻ���ǿ����ķ�ʽ
//	if (src > dest)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	void* ret = my_memmove(arr, arr + 4, 20);
//
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//		printf("%d ", *((int*)ret + i));
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//��arr��20���ֽڵĿռ俽����arr+2�Ŀռ���
//	memmove(arr + 2, arr, 20);
//
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* start = dest;//��ʼ��ַ
//
//	//����num���ֽ�
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return start;
//}
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[5] = { 6,7,8,9,10 };
//	void* ret = my_memcpy(arr1, arr2, 16);
//
//	for (int i = 0; i < 4; i++)
//		printf("%d ", *((int*)ret + i));
//
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[5] = { 1,2,3,4,5 };
//
//	//��arr2����16���ֽڵ����ݵ�arr1��
//	memcpy(arr1, arr2, 16);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("abc.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		//perror("");
//	}
//
//	//�ͷſռ�
//	free(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));
//	return 0;
//}

//int main()
//{
//	char arr[] = "972606225@qq.com";
//	char* sep = "@.";
//
//	char* ret = NULL;
//	for (ret = strtok(arr, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "972,606,225+@qq.com";
//	char* sep = ",+";//�ָ�����
//
//	char* ret = strtok(arr, sep);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//	return 0;
//}

//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* ret = (char*)str1;//ǿ������ת����ֹconst�ľ���
//
//	while (*ret)
//	{
//		s1 = (char*)ret;//����һ���ַ��ĵ�ַ
//		s2 = (char*)str2;//����
//		//�ж��Ƿ����
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		//s2����ĩβ
//		if (*s2 == '\0')
//			return s1;
//		ret++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "oppqqqrst";
//	char arr2[] = "ppq";
//	char* ret = my_strstr(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdeeehijk";
//	char arr2[] = "efg";
//	char* ret = strstr(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdeeeefghijk";
//	char arr2[] = "efg";
//	char* ret = strstr(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}


//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1)
//	{
//		//�ж��Ƿ����
//		if (*str1 == *str2)
//		{
//			str1++;
//			str2++;
//		}
//		else
//		{
//			//����Ⱦ�����ѭ��
//			break;
//		}
//	}
//	return *str1 - *str2;//����ֵ
//}
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "ab";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "acdefg";
//	int ret = strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	if ("abcdef" == (*p))
//	{
//		printf("true\n");
//	}
//	else
//	{
//		printf("false\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[15] = "abcde";
//	char arr2[5] = "oxyz";
//	strncat(arr1, arr2, 6);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);//�жϿ�ָ��
//	char* start = dest;
//
//	//��dest�ȵ�β��
//	while (*dest != '\0')
//		dest++;
//	while (*dest++ = *src++);
//
//	return start;
//}
//
//int main()
//{
//	char arr1[10] = "abc";
//	char arr2[5] = "efgh";
//	char* ret = my_strcat(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}


//int main()
//{
//	const char arr1[20] = { 0 };
//	char arr2[6] = "abcde";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[10] = { 0 };
//	char arr2[5] = "abcd";
//	strncpy(arr1, arr2, 8);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);//��ֹ��ָ��
//	char* start = dest;
//
//	//ѭ���������и�ֵ
//	while (*dest++ = *src++);
//	return start;
//}
//
//int main()
//{
//	char arr1[10] = { 0 };
//	char arr2[] = "abcdefg";
//	char* ret = my_strcpy(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}

//int main()
//{
//	const char arr1[] = "abcdefh";
//	char arr2[] = "abcdef";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
// 	return 0;
//}

//int main()
//{
//	char arr1[5] = { 0 };
//	char arr2[] = "abcdefg";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//
////
//int main()
//{
//	char arr1[10] = { 0 };
//	char arr2[5] = "abcd";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//size_t my_strlen(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//		return 0;
//	//����+1��ָ����һ���ַ��ĵ�ַ
//	return 1 + my_strlen(str + 1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//
//size_t my_strlen(const char* str)
//{
//	char* start = str;
//	assert(str);//��ֹstr�ǿ�ָ��
//
//	while (*str != '\0')
//		str++;
//	//ָ��-ָ��
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//size_t my_strlen(const char* str)
//{
//	assert(str);//��ֹstr�ǿ�ָ��
//	int count = 0;//������
//
//	while (*str++ != '\0')
//		count++;
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdefg";
//
//	if (strlen(arr1) - strlen(arr2) > 0)
//	{
//		printf("strlen(arr1) > strlen(arr2)\n");
//		//���strlen(arr1) > strlen(arr2)
//	}
//	else
//	{
//		printf("strlen(arr1) < strlen(arr2)\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdefg\0ghij";
//	printf("%d\n", strlen(arr));//7
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", sizeof(arr));//7(����'\0')
//	return 0;
//}