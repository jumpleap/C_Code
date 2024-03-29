#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// （/和%的作用）
// /的两边都是整数，则进行整数除法运算
// /的两边中有一边是小数，则做小数除法
// %只能对整数有效，若是取模的两边有浮点数，则会报错
//int main()
//{
//	printf("%d\n",10 / 3);//整数除法，3
//	printf("%lf\n", 10.0 / 3);//小数除法，3.333333
//	printf("%d\n", 10 % 3);//1
//	//printf("%d\n", 10 % 3.0);//错误，3.0为浮点数
//	return 0;
//}


//<<和>>操作符
//<<：左边丢弃，右边补0
//>>: 1)算术右移：右边丢弃，左边补符号位 2）逻辑右移: 右边丢弃，左边补0

//int main()
//{
//	int a = -3;
//	//10000000000000000000000000000011
//	//11111111111111111111111111111100
//	//11111111111111111111111111111101 --补码
//	int b = a >> 1;
//	//11111111111111111111111111111101
//	//11111111111111111111111111111110 --> a >>1
//	//11111111111111111111111111111101
//	//10000000000000000000000000000010 --> -2
//	printf("%d\n", b);
//	return 0;
//}


//注意：数据在计算机中是以二进制补码进行存储的
//打印在控制台中的的是以原码的形式打印的

//int main()
//{
//	int a = -3;
//	//10000000000000000000000000000011
//	//11111111111111111111111111111100
//	//11111111111111111111111111111101 --补码
//	//数据在计算机中是以二进制补码进行存储的
//	int b = a << 1;
//	//11111111111111111111111111111101
//	//11111111111111111111111111111010 --> a << 1
//	//11111111111111111111111111111001
//	//10000000000000000000000000000110 --> -6
//	////打印在控制台中的的是以原码的形式打印的
//	printf("%d\n", b);//-6
//	return 0;
//}



//对于移位操作符来说，最好不要移动负位数，因为标准是未定义的

//int main()
//{
//	//int a = 1 << -3;//错误，不应该这样写
//	return 0;
//}


//均是对于二进制位来说明的
//&: 有0则0，全1则1
//|: 有1则1，全0则0
//^: 相同为0，不同为1

//int main()
//{
//	int a = 3;
//	//00000000 00000000 00000000 00000011
//	int b = 5;
//	//00000000 00000000 00000000 00000101
//	printf("%d\n", a & b);//1
//	//00000000 00000000 00000000 00000011  --> 3
//	//00000000 00000000 00000000 00000101  --> 5
//	//00000000 00000000 00000000 00000001 --> a&b:1
//	printf("%d\n", a | b);//7
//	//00000000 00000000 00000000 00000011  --> 3
//	//00000000 00000000 00000000 00000101  --> 5
//	//00000000 00000000 00000000 00000111  --> a|b: 7
//	printf("%d\n", a ^ b);//6
//	//00000000 00000000 00000000 00000011  --> 3
//	//00000000 00000000 00000000 00000101  --> 5
//	//00000000 00000000 00000000 00000110  --> a^b: 6
//	return 0;
//}


//异或满足交换律
//a ^ a = 0 --> 相同数异或为0
//a ^ 0 = a --> 任何数和0异或为任何数

//int main()
//{
//	int a = 5;
//	int b = 5;
//	//相同数异或为0
//	int c = a ^ b;
//	printf("%d\n", c);//0
//	int d = 10;
//	//任何数和0异或为任何数
//	printf("%d\n", d ^ c);//10
//	return 0;
//}


//交换两个数的值
//1.临时变量法
//int main()
//{
//	int a = 10;
//	int b = 5;
//	int tmp = 0;
//
//	//交换
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//2.加减法 - 可能会导致溢出
//int main()
//{
//	int a = 10;
//	int b = 5;
//
//	//交换
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//3.异或法
//int main()
//{
//	int a = 10;
//	int b = 5;
//
//	//交换
//	a = a ^ b;
//	b = a ^ b;//等价于：b = a ^ b ^ b;
//	a = a ^ b;//等价于：a = a ^ b ^ a ^ b ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//求一个整数存储在内存中的二进制中1的个数。
//int main()
//{
//	int num = 3;
//	//00000000 00000000 00000000 00000011
//	int count = 0;
//
//	for (int i = 0; i < 32; i++)
//	{
//		if (num & (1<<i))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int num = 11;
//	//00001011
//	//00001010
//	//00001010
//	//
//	//00001010
//	//00001001
//	//00001000
//	// 
//	//00001000
//	//00000111
//	//00000000
//	int count = 0;
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//复合赋值运算
//int main()
//{
//	int a = 2;
//	int b = 20;
//	b += a;//等价于 b = b + a;
//	b *= a;//等价于 b = b * a;
//	b /= a;//等价于 b = b / a;
//	b >>= a;//等价于 b = b >> a;
//	b <<= a;//等价于 b = b << a;
//	return 0;
//}



//单目运算符
//int main()
//{
//	int a = 5;
//	//C语言中规定非0为真，0为假
//	if (a){}
//	//！：逻辑反操作
//	if (!a){}
//
//	//~：对数的二进制位按位取反
//	int b = 1;
//	//00000000 00000000 00000000 00000001
//	//11111111 11111111 11111111 11111110 --> 取反
//	//11111111 11111111 11111111 11111101
//	//10000000 00000000 00000000 00000010 --> -2
//	printf("%d\n", ~b);//-2
//	return 0;
//}


//++、--操作符
//前置++、--：先自增/自减，后使用
//前置++、--：先使用，后自增/自减
//int main()
//{
//	int a = 10;
//	int b = 11;
//	printf("%d\n", ++a);//11
//	printf("%d\n", b--);//11
//	return 0;
//}


//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//注意：一旦有反条件成立，立马结束执行语句
//&&(逻辑与)：全真为真，一假则假
//||(逻辑或)：一真则真，全假则假
//注意：这两个操作符的返回值是1和0：1真，0假

#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;//1 2 3 4
	i = a++||++b||d++;//1 3 3 4
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
	return 0;
}