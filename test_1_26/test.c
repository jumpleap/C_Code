#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����n��쳲�������

//��һ���ݹ�(�ᳬ��ʱ�����ƣ�
//int Fib(int n)
//{
//	if (n == 0)
//		return 0;//��0����
//	else if (n == 1)
//		return 1;//��һ����
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int fib = Fib(n);
//	printf("%d\n", fib);
//	return 0;
//}

//#include <stdio.h>
//
////������ѭ������
//int Fib(int n)
//{
//	int n1 = 0;
//	int n2 = 1;
//	int sum = 0;
//
//	//�������
//	if (n == 1)
//		return 1;
//
//	while (n >= 2)
//	{
//		//��������
//		sum = (n1 + n2) % 1000000007;
//		n1 = n2;
//		n2 = sum;
//
//		n--;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int fib = Fib(n);
//	printf("%d\n", fib);
//	return 0;
//}



//����ַ�������

//#include <stdio.h>
//#include <string.h>
//
////1����һ���⺯��strlen()���
//int main()
//{
//	char arr[100] = "";
//	while (scanf("%s", arr) != EOF)
//	{
//		int len = strlen(arr);
//		printf("%d\n", len);
//	}
//	return 0;
//}
 
 

//#include <stdio.h>
//
////2����������������� ���� ÿ����һ���ַ�������� + 1��ֱ������'\0'
//int my_strlen(char* arr)
//{
//	int count = 0;//������
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
//	char arr[100] = "";
//	while (scanf("%s", arr) != EOF)
//	{
//		int len = my_strlen(arr);
//		printf("%d\n", len);
//	}
//	return 0;
//}
// 
// 
// 
//3���������ݹ���� ���� �ݹ��������������'\0'
//���еݹ�������ʹ�ַ�����ÿ���ַ������ݹ�
//#include <stdio.h>
//
//int my_strlen(char* arr)
//{
//	//��������
//	if (*arr == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(arr + 1);//�ݹ�����
//}
//
//int main()
//{
//	char arr[100] = "";
//	while (scanf("%s", arr) != EOF)
//	{
//		int len = my_strlen(arr);
//		printf("%d\n", len);
//	}
//	return 0;
//}


//������̨������
//int numWays(int n)
//{
//	//�������ʹ�õݹ���ᳬ��ʱ������
//	if(n < 2)
//	    return 1;
//	return numWays(n - 1) + numWays(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = numWays(n);
//	printf("%d\n", sum);
//	return 0;
//}


//����

#include <stdio.h>

int numWays(int n)
{
    int n1 = 1;
    int n2 = 1;
    int sum = 1;//�ܺ�

    while (n >= 2)
    {
        //ѭ������
        sum = (n1 + n2) % 1000000007;
        n2 = n1;
        n1 = sum;
        n--;
    }
    return sum;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int sum = numWays(n);
	printf("%d\n", sum);
	return 0;
}