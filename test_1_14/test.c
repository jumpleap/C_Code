#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int a, int b���β�
//int getSum(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	//getSum�е�a,b����ʵ��,�Ա�����ʵ��
//	int sum1 = getSum(a, b);
//	//1,2�Գ���ֵ��ʵ��
//	int sum2 = getSum(1, 2);
//	//a++,b++�Ա��ʽ��ʵ��
//	int sum3 = getSum(a++, b++);
//	//�Ժ���������Ϊʵ��
//	int sum4 = getSum(getSum(a, 10), b);
//
//	printf("%d %d %d %d\n", sum1,sum2,sum3,sum4);//30 3 30 42
//	return 0;
//}

//void swap1(int x, int y)
//{
//	//��������ֵ��ֻ�ں������ڽ��������˺�������ʽ�����Զ�����
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
////��ַ��Ҫָ�����������
//void swap2(int* x, int* y)
//{
//	//*:ȡ����ַ�ж�Ӧ��ֵ
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//
//	//��ֵ���ã��βεĸı䲻�ı�ʵ��
//	swap1(x, y);
//	//���Է��֣���swap1�еĽ�����ʵ�β�û������
//	printf("%d %d\n", x, y);
//
//	//��ַ���ã��β��еĸı䣬ʵ��Ҳ���Ÿı�
//	swap2(&x, &y);//&��ȡ����Ӧ�����ĵ�ַ
//	printf("%d %d\n", x, y);
//	return 0;
//}


//������Ƕ�׵��ã���һ�������е�������һ������

//void print(int i)
//{
//	printf("%d ", i);
//}
//
//int getSum(int x)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= x; i++)
//	{
//		print(i);//������һ������
//		sum += i;
//	}
//	return sum;
//}
//
//int main()
//{
//	printf("\n%d\n", getSum(10));//55
//	return 0;
//}


//����������Ƕ�׶���

//void print()
//{
//	void get()
//	{
//		//���󣬲�����һ�������ж�������һ������������������Ƕ�׶���
//	}
//}
//
//int main()
//{
//	print();
//	return 0;
//}


//��������ʽ���ʣ���һ�������ķ���ֵ��Ϊ����һ�������Ĳ���

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	//printf�ķ���ֵ��int����printf���м����ַ��ʹ�ӡ�����ַ�
//	//printf("%d", 43)����ӡ43,4��3�������ַ�����һ��printf��ӡ2
//	//2��һ���ַ�������ӡ1
//	return 0;
//}

//#include "test.h"
//
////��������ʹ��
//void print()
//{
//	printf("hello,world\n");
//}
//
//int main()
//{
//	print();
//}

////���������Ͷ���
//int getSum(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//
//	printf("%d\n", getSum(x, y));//30
//	return 0;
//}


//ʹ�ú����ж�һ�����ǲ�������
//#include <math.h>
//
//int isPrime(int num)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(num); i++)
//	{
//		//�ܳ�����������
//		if (num % i == 0)
//			return 0;
//	}
//	return 1;//������
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int res = isPrime(num);
//	if (res == 1)
//	{
//		printf("%d������\n", num);
//	}
//	else
//	{
//		printf("%d��������\n", num);
//	}
//	return 0;
//}


//�ж�һ�����ǲ�������

//int is_leap_year(int year)
//{
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//
//	int res = is_leap_year(year);
//	if (res)
//	{
//		printf("%d������\n", year);
//	}
//	else
//	{
//		printf("%d��������\n", year);
//	}
//	return 0;
//}



//���ֲ���

//int binarySearch(int arr[], int num, int len)
//{
//	int left = 0;
//	int right = len - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;//��ֹ��ֵ���
//	
//		if (arr[mid] > num)
//		{
//			right = mid - 1;//right����
//		}
//		else if (arr[mid] < num)
//		{
//			left = mid + 1;//left����
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);//���鳤��
//	scanf("%d", &num);
//
//	int index = binarySearch(arr, num, len);
//	if (index == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", index);
//	}
//	return 0;
//}


//дһ���ݹ麯��DigitSum(num)������һ���Ǹ����������������������֮��
int DigitSum(int num)
{
	if (num > 9)
		return num % 10 + DigitSum(num / 10);//����9����
	else
		return num % 10;//���һ����
}

int main()
{
	int num = 0;
	scanf("%d", &num);

	int sum = DigitSum(num);
	printf("%d\n", sum);
	return 0;
}