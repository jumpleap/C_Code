#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
两个整数之间的 汉明距离 指的是这两个数字对应二进制位不同的位置的数目。
给你两个整数 x 和 y，计算并返回它们之间的汉明距离。
*/

//法一：位位比较，不同则计数
//int hammingDistance(int x, int y)
//{
//    int count = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        //获取每个位的值
//        int num1 = (x >> i) & 1;
//        int num2 = (y >> i) & 1;
//        //不同的值则计数
//        if (num1 + num2 == 1)
//            count++;
//    }
//    return count;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	while (scanf("%d %d", &x, &y) != EOF)
//	{
//        int ret = hammingDistance(x, y);
//        printf("%d\n", ret);
//	}
//	return 0;
//}


//法二：异或循环
//int hammingDistance(int x, int y)
//{
//    int count = 0;
//    int ret = x ^ y;//异或得到不同的位
//    for (int i = 0; i < 32; i++)
//    {
//        //判断不同的位
//        if ((ret >> i) & 1)
//            count++;
//    }
//    return count;
//}
//
//int main()
//{
//    int x = 0;
//    int y = 0;
//    while (scanf("%d %d", &x, &y) != EOF)
//    {
//        int ret = hammingDistance(x, y);
//        printf("%d\n", ret);
//    }
//    return 0;
//}



//法三：异或后使用num = num & (num - 1)消去最低位的1
int hammingDistance(int x, int y)
{
    int ret = x ^ y;//得到不同的位
    int count = 0;

    while (ret)
    {
        ret = ret & (ret - 1);//消去最低位的1
        count++;
    }
    return count;
}

int main()
{
    int x = 0;
    int y = 0;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        int ret = hammingDistance(x, y);
        printf("%d\n", ret);
    }
    return 0;
}