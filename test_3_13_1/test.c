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
//	char* cur = strtok(buf, p);//以p中的字符作为分隔符，strtok是有记忆的
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
//	//strtok应该这样使用
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
//		printf("打开文件失败：%s\n", strerror(errno));
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
//		perror("打开文件失败");
//	}
//  fclose(pf);
//	pf = NULL;
//	return 0;
//}



//memcpy的使用：内存拷贝
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[8] = { 0 };
//	memcpy(arr2, arr1, 16);
//	return 0;
//}



////求一个数的相反数，不能使用-号来得到相反数
////00000000 00000000 00000000 00000101 -- 5
////11111111 11111111 11111111 11111010  --~5
////11111111 11111111 11111111 11111011  --~5 +1
////11111111 11111111 11111111 11111010  --反码
////10000000 00000000 00000000 00000101  --原码 -5
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

//求一个数的相反数：
//1)~num + 1
//2)-num


//memcpy返回的目标空间的起始地址
int main()
{
	float arr1[] = { 1.0f,2.0f,3.0f,4.0f,5.0f };
	float arr2[8] = { 0 };
	memcpy(arr2, arr1, 16);
	return 0;
}
