#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	char arr[] = "fg@lhh.com";
//	char* p = "@.";
//	char buf[20] = { 0 };
//	strcpy(buf, arr);
//
//	char* cur = strtok(buf, p);//��p�е��ַ���Ϊ�ָ�����strtok���м����
//	printf("%s\n", cur);
//	cur = strtok(NULL, p);
//	printf("%s\n", cur);
//	cur = strtok(NULL, p);
//	printf("%s\n", cur);
//	return 0;
//}


//int main()
//{
//	char arr[] = "fg@lhh.loveyou.com";
//	char buf[30] = { 0 };
//	strcpy(buf, arr);
//	char* p = "@.";
//
//	char* cur;
//	//strtokӦ������ʹ��
//	for (cur = strtok(buf, p); cur != NULL; cur = strtok(NULL, p))
//	{
//		printf("%s\n", cur);
//	}
//	return 0;
//}


//int main()
//{
//	char* s1 = strerror(0);
//	printf("%s\n", s1);
//	s1 = strerror(1);
//	printf("%s\n", s1);
//	s1 = strerror(2);
//	printf("%s\n", s1);
//	s1 = strerror(3);
//	printf("%s\n", s1);
//	s1 = strerror(4);
//	printf("%s\n", s1);
//	s1 = strerror(5);
//	printf("%s\n", s1);
//	s1 = strerror(6);
//	printf("%s\n", s1);
//	s1 = strerror(7);
//	printf("%s\n", s1);
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ�ܣ�%s\n", strerror(errno));
//	}
//  fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("���ļ�ʧ��");
//	}
//  fclose(pf);
//	pf = NULL;
//	return 0;
//}



//memcpy��ʹ�ã��ڴ濽��
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[8] = { 0 };
//	memcpy(arr2, arr1, 16);
//	return 0;
//}



////��һ�������෴��������ʹ��-�����õ��෴��
////00000000 00000000 00000000 00000101 -- 5
////11111111 11111111 11111111 11111010  --~5
////11111111 11111111 11111111 11111011  --~5 +1
////11111111 11111111 11111111 11111010  --����
////10000000 00000000 00000000 00000101  --ԭ�� -5
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	num = ~num + 1;
//	//num = -num;
//	printf("%d\n", num);
//	return 0;
//}

//��һ�������෴����
//1)~num + 1
//2)-num


//memcpy���ص�Ŀ��ռ����ʼ��ַ
int main()
{
	float arr1[] = { 1.0f,2.0f,3.0f,4.0f,5.0f };
	float arr2[8] = { 0 };
	memcpy(arr2, arr1, 16);
	return 0;
}
