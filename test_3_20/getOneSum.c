#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
编写一个函数，输入是一个无符号整数（以二进制串的形式），
返回其二进制表达式中数字位数为 '1' 的个数（也被称为汉明重量）。
*/

//法一：模运算
//int hammingWeight(unsigned int n)
//{
//    int count = 0;//计算1的数
//    while (n)
//    {
//        //%的结果是1则说明二进制中有1
//        if (n % 2)
//            count++;
//        n /= 2;
//    }
//    return count;
//}
//
//
//int main()
//{
//	unsigned int n = 0;
//	while (scanf("%u", &n) != EOF)
//	{
//        int ret = hammingWeight(n);
//        printf("%d\n", ret);
//	}
//	return 0;
//}



//法二：位运算：右移且&1
//int hammingWeight(unsigned int n)
//{
//    int count = 0;//计1的数
//    //32个位，需要右移32次，每次与&1进行比较
//    for (int i = 0; i < 32; i++)
//    {
//        //如果结果是1，则说明二进制位中有1
//        if ((n >> i) & 1)
//            count++;
//    }
//    return count;
//}
//
//
//int main()
//{
//    unsigned int n = 0;
//    while (scanf("%u", &n) != EOF)
//    {
//        int ret = hammingWeight(n);
//        printf("%d\n", ret);
//    }
//    return 0;
//}


//法三：num = num & (num - 1) --> 去掉最低位的1
int hammingWeight(unsigned int n)
{
    int count = 0;//计1的数
    while (n)
    {
        n = n & (n - 1);//每次都去点最低位的1，知道这个值为0
        count++;
    }
    return count;
}


int main()
{
    unsigned int n = 0;
    while (scanf("%u", &n) != EOF)
    {
        int ret = hammingWeight(n);
        printf("%d\n", ret);
    }
    return 0;
}