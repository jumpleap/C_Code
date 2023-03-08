#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ʵ��qsort�ĸ�������

//int sortInt(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 12,34,1,2,-1,78,16,89,11,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, len, sizeof(arr[0]), sortInt);
//
//	printf("�������ݵ�����\n");
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int sortDou(const void* e1, const void* e2)
//{
//	return *(double*)e1 > *(double*)e2 ? 1 : -1;
//}
//
//void test2()
//{
//	double arr[10] = { 1.23,3.4,1.1,2.5,-1.6,7.8,1.6,8.9,1.01,10.1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, len, sizeof(arr[0]), sortDou);
//
//	printf("���������ݵ�����\n");
//	for (int i = 0; i < len; i++)
//	{
//		printf("%lf ", arr[i]);
//	}
//	printf("\n");
//}
//
//int sortChar(const void* e1, const void* e2)
//{
//	return *(char*)e1 - *(char*)e2;
//}
//
//void test3()
//{
//	char arr[10] = { 'd','c','f','v','z','x','e','j','i','l' };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, len, sizeof(arr[0]), sortChar);
//
//	printf("�ַ������ݵ�����\n");
//	for (int i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//}
//
//struct student
//{
//	char name[10];
//	int age;
//};
//
//
//int sortStr(const void* e1, const void* e2)
//{
//	struct student* x = (struct student*)e1;
//	struct student* y = (struct student*)e2;
//
//	return strcmp(x->name, y->name);
//}
//
//void test4()
//{
//	struct student arr[7] = { {"zhangsan",18},{"lisi",19},{"xiaoming",16},{"dahuang",10},
//		{"ahao",9},{"jack",10},{"marry",30} };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, len, sizeof(arr[0]), sortStr);
//
//	printf("�ṹ�����ݵ�����\n");
//	for (int i = 0; i < len; i++)
//	{
//		printf("%s %d\n", arr[i].name, arr[i].age);
//	}
//}
//
//int main()
//{
//	test1();//��������
//	test2();//����������
//	test3();//�����ַ�������
//	test4();//����ṹ��
//	return 0;
//}

#include <stdio.h>

//ʹ��ð������ģ��ʵ��qsort
int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

void swap(char* x, char* y, int width)
{
	//����ֽڽ��н���
	for (int i = 0; i < width; i++)
	{
		char tmp = *x;
		*x = *y;
		*y = tmp;
		x++;
		y++;
	}
}

void my_qsort(void* base, size_t len, size_t width, int (*compare)(const void* p1,const void* p2))
{
	size_t i = 0;
	size_t j = 0;
	int flag = 1;
	for (i = 0; i < len - 1; i++)
	{
		flag = 1;
		for (j = 0; j < len - i - 1; j++)
		{
			//ʹ��cmp_int��������ֵ������ǰ���ֵ�ǲ��Ǵ��ں����ֵ
			if (compare((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				flag = 0;
				//����
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}

		//���������
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[10] = { 12,34,1,2,-1,78,16,89,11,10 };
	int len = sizeof(arr) / sizeof(arr[0]);

	//ģ��ʵ��qsort����
	my_qsort(arr, len, sizeof(arr[0]), cmp_int);

	printf("�������ݵ�����\n");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}


/*
int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, size_t num, size_t width,int (*cmp)(const void* p1, const void* p2))
{
	//Ҫȷ������
	size_t i = 0;
	for (i = 0; i < num - 1; i++)
	{
		int flag = 1;//�����Ѿ�������
		//һ��ð������Ĺ���
		size_t j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			//�������ڵ�Ԫ�رȽ�
			//arr[j] arr[j+1]
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
				flag = 0;
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 3,1,5,2,4,9,8,6,5,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/