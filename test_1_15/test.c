#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����һά�����ʼ���������ĸ������Ǵ���ģ���C��
//A.int arr[10] = { 1,2,3,4,5,6 };
//B.int arr[] = { 1,2,3,4,5,6 };
//C.int arr[] = (1, 2, 3, 4, 5, 6);  //���� Ӧ��ʹ�ô�����{}
//D.int arr[10] = { 0 };



//������һά int ������ a[10] ���������������ǣ���C��
//A.a[0] = 1;
//B.a[0] = 5 * 2;
//C.a[10] = 2; //����Խ����
//D.a[1] = a[2] * a[0];


//�������Ľ��
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 }; //3,4Ϊһ���������ȡ4
//    printf("%d\n", sizeof(arr));//16
//    return 0;
//}



//�������Ľ���ǣ�()
//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));// 10 9
//    return 0;
//}


//����һά������������ȷ���ǣ�(D)
//A.������±��Ǵ�0��ʼ��
//B.�������ڴ�����������ŵ�
//C.��������ʾ��Ԫ�صĵ�ַ
//D.���������±����С���󣬵�ַ�ɸߵ��� //����ַ�ӵ͵���



//�����ܶԶ�ά����a������ȷ��ʼ��������ǣ���A��
//A.int a[2][] = { {0,1,2},{3,4,5} };
//B.int a[][3] = { {0,1,2},{3,4,5} };
//C.int a[2][4] = { {0,1,2},{3,4},{5} };
//D.int a[][3] = { {0,,2},{},{3,4,5} };



//�������¶��壺
//char acX[] = ��abcdefg��;
//char acY[] = { ��a��,��b��,��c��,��d��,��e��,��f��,��g�� };
//����˵����ȷ����(C)
//A.����acX������acY�ȼ� //�������С��һ��
//B.����acX������acY�ĳ�����ͬ //��ͬ��acX[]��һ��'\0'
//C.sizeof(acX) > sizeof(acY) 
//D.strlen(acX) > strlen(acY)



//������int a[2][3] = { 1,2,3,4,5,6 }; ��ֵΪ4������Ԫ����(B)
//A.a[0][0]
//B.a[1][0]
//C.a[1][1]
//D.a[2][1]



//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//void swapArr(int* arr1, int* arr2, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		//��������
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr1[3] = { 0 };
//	int arr2[3] = { 0 };
//	int len = sizeof(arr1) / sizeof(arr1[0]);//���鳤��
//
//	//��������
//	int i = 0;
//	for (i = 0; i < len; i++)
//		scanf("%d", &arr1[i]);
//	for (i = 0; i < len; i++)
//		scanf("%d", &arr2[i]);
//
//	//�������������е�����
//	swapArr(arr1, arr2, len);
//
//	//���
//	for (i = 0; i < len; i++)
//		printf("%d ", arr1[i]);
//	printf("\n");
//	for (i = 0; i < len; i++)
//		printf("%d ", arr2[i]);
//	return 0;
//}



//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

//��ʼ��
void init(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
		arr[i] = 0;//ȫ����ʼ��Ϊ0
}

//ת��
void reverse(int arr[], int len)
{
	int left = 0;
	int right = len - 1;

	while (left < right)
	{
		//��������
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		
		left++;
		right--;
	}
}

//��ӡ����
void print(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);//���鳤��
	//�����ʼ��
	init(arr, len);

	//����
	int i = 0;
	for (i = 0; i < len; i++)
		scanf("%d", &arr[i]);

	//����ת��
	reverse(arr, len);
	//�����ӡ
	print(arr, len);
	return 0;
}