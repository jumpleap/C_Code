#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//下面哪个是位操作符：（A）
//A.&
//B.&&
//C. ||
//D.!



//下面代码的结果是：(B)
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;// a = 6, c= 6
//	b = ++c, c++, ++a, a++;
//	//  c=7  c=8  a=7  a=8 b =7
//	b += a++ + c;
//	// b=7 a=8(a=9)c=8 --> b = 23
//	printf("a = %d b = %d c = %d\n", a, b, c);//9 23 8
//	return 0;
//}

//A.a = 8 b = 23 c = 8
//B.a = 9 b = 23 c = 8
//C.a = 9 b = 25 c = 8
//D.a = 9 b = 24 c = 8



//不允许创建临时变量，交换两个整数的内容
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		//交换
//		a = a ^ b;
//		b = a ^ b;
//		a = a ^ b;
//		printf("a=%d b=%d\n", a, b);
//	}
//	return 0;
//}



/*
链接：https://www.nowcoder.com/questionTerminal/8ee967e43c2c4ec193b040ea7fbb10b8
来源：牛客网
输入一个整数 n ，输出该数32位二进制表示中1的个数。其中负数用补码表示。
数据范围：−2^31<=n<=2^31−1 即范围为: −2147483648<=n<=2147483647
*/

/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param n int整型
 * @return int整型
 *
 * C语言声明定义全局变量请加上static，防止重复定义
 */
//int NumberOf1(int n)
//{
//    int count = 0;
//    while (n)
//    {
//        n = n & (n - 1);
//        count++;
//    }
//    return count;
//}

//法二
/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param n int整型
 * @return int整型
 *
 * C语言声明定义全局变量请加上static，防止重复定义
 */
//int NumberOf1(int n)
//{
//    int count = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        if (n & (1 << i))
//            count++;
//    }
//    return count;
//}



//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	//奇数位
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		int x = (num >> i) & 1;
//		printf("%d", x);
//	}
//	printf("\n");
//
//	//偶数位
//	for (int i = 31; i >= 0; i -= 2)
//	{
//		int x = (num >> i) & 1;
//		printf("%d", x);
//	}
//	return 0;
//}


//00000111 --> 7
//00000100 --> 4
//00000011 --> 3

//int main()
//{
//	int m = 7;
//	int n = 4;
//	printf("%d\n", m ^ n);
//	return 0;
//}


//输入两个整数，求两个整数二进制格式有多少个位不同
#include <stdio.h>

int getBitDif(int num)
{
    int count = 0;
    while (num)
    {
        //统计位不同的数
        num = num & (num - 1);
        count++;
    }
    return count;
}
int main()
{
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);

    //得到位不同的值
    int ret = m ^ n;
    int count = getBitDif(ret);
    printf("%d\n", count);
    return 0;
}