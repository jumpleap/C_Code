#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//求解第n个斐波那契数

//法一：递归(会超出时间限制）
//int Fib(int n)
//{
//	if (n == 0)
//		return 0;//第0个数
//	else if (n == 1)
//		return 1;//第一个数
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
////法二：循环迭代
//int Fib(int n)
//{
//	int n1 = 0;
//	int n2 = 1;
//	int sum = 0;
//
//	//特殊情况
//	if (n == 1)
//		return 1;
//
//	while (n >= 2)
//	{
//		//迭代过程
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



//求解字符串长度

//#include <stdio.h>
//#include <string.h>
//
////1）法一：库函数strlen()求解
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
////2）法二：计数器求解 —— 每计算一个字符则计数器 + 1，直到遇到'\0'
//int my_strlen(char* arr)
//{
//	int count = 0;//计数器
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
//3）法三：递归求解 —— 递归结束条件：遇到'\0'
//进行递归条件：使字符串的每个字符都被递归
//#include <stdio.h>
//
//int my_strlen(char* arr)
//{
//	//结束条件
//	if (*arr == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(arr + 1);//递归条件
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


//青蛙跳台阶问题
//int numWays(int n)
//{
//	//如果本题使用递归则会超出时间限制
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


//法二

#include <stdio.h>

int numWays(int n)
{
    int n1 = 1;
    int n2 = 1;
    int sum = 1;//总和

    while (n >= 2)
    {
        //循环迭代
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