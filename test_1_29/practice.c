#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//声明以下变量，则表达式: ch/i + (f*d – i) 的结果类型为（D）
//char ch;
//int i;
//float f;
//double d;
//A: char B: int C: float D: double

//代码验证
//int main()
//{
//	char ch = 'a';
//	int i=1;
//	float f = 9.99;
//	double d = 3.0;
//	printf("%lf\n", ch / i + (f * d - i));//考察自动类型转换
//	return 0;
//}



//关于代码的说法正确的是（A）
//int main()
//{
//	int x = -1;
//	unsigned int y = 2;
//	//如果表达式里既有带符号数又有无符号数,带符号数会自动转换成无符号数
//	if (x > y)
//	{
//		//printf("%u\n", x);
//		printf("x is greater");
//	}
//	else
//	{
//		printf("y is greater");
//	}
//	return 0;
//}

//A: x is greater B: y is greater C: 依赖实现 D: 随机



//已知有如下各变量的类型说明，则以下不符合C语言语法的表达式是（A）
int k, a, b;
unsigned int w = 5;
double x = 1.42;

//A: x % 3 //%只能用于整型
//B : w += -20 
//C : k = (a = 200, b = 300) 
//D : a += a -= a = 9

//代码验证
//int main()
//{
//	int k, a, b;
//	unsigned int w = 5;
//	double x = 1.42;
//	//x % 3;
//	w += -20;
//	k = (a = 200, b = 300);
//	a += a -= a = 9;
//	return 0;
//}



//下面函数的输出结果是（D）
//void func()
//{
//	int k = 1 ^ (1 << 31 >> 31);
//	printf("%d\n", k);
//}
//00000000 00000000 00000000 00000001
//10000000 00000000 00000000 00000000 -->1 << 31
//11111111 11111111 11111111 11111111  --> >> 31
//00000000 00000000 00000000 00000001
//11111111 11111111 11111111 11111110 -->异或后的结果(补码）
//10000000 00000000 00000000 00000010 --> -2


//A: 0 B: -1 C: -2 D: 1

//代码验证
//int main()
//{
//	func();
//}


//如下代码的输出结果是（A）
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	//sizeof内部不进行计算
//	sizeof(i++);
//	printf("%d\n", i);//1
//	return 0;
//}

//A: 1 B: 4 C: 2 D: 8



//给定一个二进制数组 nums ， 计算其中最大连续 1 的个数。
//1 <= nums.length <= 105
//nums[i] 不是 0 就是 1.

//void input(int* arr, int len)
//{
//    for (int i = 0; i < len; i++)
//        scanf("%d", &arr[i]);
//}
//
//int findMaxConsecutiveOnes(int* nums, int numsSize)
//{
//    int max = 0;
//    int min = 0;//累计连续的1，遇0重置
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == 1)
//        {
//            min++;
//            //得到最大连续1
//            if (min > max)
//                max = min;
//        }
//        //重置
//        if (nums[i] == 0)
//            min = 0;
//    }
//    return max;
//}
//
//
//int main()
//{
//    int arr[105] = { 0 };
//    int len = 0;
//    
//    while (scanf("%d", &len) != EOF)
//    {
//        input(arr, len);
//        int constantVal = findMaxConsecutiveOnes(arr, len);
//        printf("%d\n", constantVal);
//    }
//    return 0;
//}




/*
描述
	完全数（Perfect number），又称完美数或完备数，是一些特殊的自然数。
	它所有的真因子（即除了自身以外的约数）的和（即因子函数），恰好等于它本身。
	例如：28，它有约数1、2、4、7、14、28，除去它本身28外，
	其余5个数相加，1+2+4+7+14=28。
	输入n，请输出n以内(含n)完全数的个数。
数据范围：
	1≤n≤5×10^5
输入描述：
	输入一个数字n
输出描述：
	输出不超过n的完全数的个数
*/

#include <stdio.h>

int isPerfectNum(int x)
{
    int sum = 0;//累和
    for (int i = 1; i <= x / 2; i++)
    {
        //判断i是不是x的约数
        if (x % i == 0)
            sum += i;
    }
    return sum;
}

int main()
{
    int n = 0;
    int count = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        //约数的个数
        if (isPerfectNum(i) == i)
            count++;
    }
    printf("%d\n", count);
    return 0;
}