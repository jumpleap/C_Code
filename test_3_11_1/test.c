#define _CRT_SECURE_NO_WARNINGS


//���ַ�������
//��һ: strlen()�⺯��
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


//������������
//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(const char* arr)
//{
//	assert(arr);//�жϿ�ָ��
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
//������ָ��-ָ��
//#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(const char* arr)
//{
//	assert(arr);//�жϿ�ָ��
//	const char* cur = arr;
//
//	while (*cur != '\0')
//		cur++;
//	
//	//ָ��-ָ��õ����ݵĸ���
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
//���ģ��ݹ�
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


//ģ��ʵ��strcpy()
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);//�жϿ�ָ��
//	char* start = dest;
//
//	while (*dest++ = *src++);//��ֵ
//	return start;//����Ŀ��ռ����ʼ��ַ
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


//ģ��ʵ��strcmp
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);//�жϿ�ָ��
//
//	/*while (*str1  && *str2)
//	{
//		if (*str1 != *str2)
//			return *str1 - *str2;
//		str1++;
//		str2++;
//	}*/
//
//	//�ж�ÿ���ַ��Ƿ����
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



////ģ��ʵ��strcat
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);//�жϿ�ָ��
//	char* start = dest;
//
//	//Ŀ��ռ����ҵ���\0'
//	while (*dest != '\0')
//		dest++;
//	//����Դ�ַ�����ֵ��Ŀ��ռ���
//	while (*dest++ = *src++);
//	return start;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	//strcat�Ǵ�'\0'��ʼ���Ƶģ�Ȼ���Դ�ַ�����'\0'Ҳ���ƹ�����
//	char* ret = my_strcat(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}



//ģ��ʵ��strstr
#include <stdio.h>
#include <assert.h>

char* my_strstr(const char* dest, const char* src)
{
	const char* cur = NULL;
	const char* tmp = NULL;

	while (*dest != '\0')
	{
		cur = dest;//ָ�򱻲��Ҵ�
		tmp = src;//ָ�򱻲��Ҵ�

		//�жϱ����Ҵ��Ƿ�Ϊ'\0'
		while (*tmp != '\0')
		{
			//�����
			if (*tmp != *cur)
				break;
			tmp++;
			cur++;
		}
		//�������ҵĴ��Ƿ���ĩβ
		if (*tmp == '\0')
			return dest;

		dest++;
	}
	return NULL;//û���ҵ�
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
//		s1 = dest;//ָ�򱻲��Ҵ�
//		s2 = src;//ָ�򱻲��Ҵ�
//
//		//�жϱ����Ҵ��Ƿ�Ϊ'\0'
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		//�������ҵĴ��Ƿ���ĩβ
//		if (*s2 == '\0')
//			return cp;
//
//		cp++;
//	}
//	return NULL;//û���ҵ�
//}