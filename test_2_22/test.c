#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//�������"ָ��"����������ȷ���ǣ���A��
//
//A.��ʹ��free�ͷŵ�һ��ָ�����ݺ�, ָ�������ֵ����ΪNULL
//B.32λϵͳ���κ�����ָ��ĳ��ȶ���4���ֽ�
//C.ָ�������������������ָ��ʵ��ָ�����ݵ���������
//D.Ұָ����ָ��δ��������Ѿ��ͷŵ��ڴ��ַ

//int main()
//{
//	/*int a = 10;
//	int* pa = &a;
//	free(pa);
//	if (pa == NULL)
//	{
//		printf("haha\n");
//	}*/
//
//	//32λƽ̨��
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(long*));//4
//	printf("%d\n", sizeof(long long*));//4
//	printf("%d\n", sizeof(float*));//4
//	printf("%d\n", sizeof(double*));//4
//
//	//ָ�������������������ָ��ʵ��ָ�����ݵ���������
//	int a = 10;
//	int* pa = &a;
//	return 0;
//}



//�����������������ȷ���ǣ���C��
//
//char* p = "hello bit";
//A.���ַ���hello bit�����p������
//B.���ַ���hello bit�ĵ�һ���ַ������p������
//C.���ַ���hello bit�ĵ�һ���ַ��ĵ�ַ�����p������
//D.*p�ȼ���hello bit

//ע�����ַ�ָ��ָ��һ�������ַ�����ʱ������ŵ��ǳ����ַ������ַ��ĵ�ַ



//��������ָ���������ȷ���ǣ���C��
//
//A.����ָ����һ������
//B.����ָ����һ�ִ�������ָ��
//C.����ָ����һ��ָ��
//D.ָ��������һ��ָ�������ָ��

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//����ָ�룺p��ָ�������ָ��
//	
//	int* pa[10] = arr;//ָ������ �� ������
//	return 0;
//}



//�����ĸ�������ָ�루C��
//
//A.int** arr[10]
//B.int(*arr[10])
//C.char* (*arr)[10]
//D.char(*)arr[10]

//int main()
//{
//	int** arr[10];//���int����ָ���ָ������
//	int(*arr[10]);//���intָ�������
//	char*(*arr)[10];//����ָ�룬ָ��char*�����ָ��
//	//char(*)arr[10];//ָ�����飬��ŵ����ַ�ָ��
//	return 0;
//}



//��ζ���һ��int���͵�ָ�����飬����Ԫ�ظ���Ϊ10����(C)
//
//A.int a[10]
//B.int(*a)[10]
//C.int* a[10];
//D.int (*a[10])(int);

int main()
{
	int a[10];//��������
	int(*a)[10];//����ָ�룬ָ��int�����������ָ��
	int* a[10];//ָ�����飬���10��int*������
	int (*a[10])(int);//����ָ�����飬
	return 0;
}