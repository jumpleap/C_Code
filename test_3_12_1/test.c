#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//static的作用
//1) 修饰局部变量
//2）修饰全局变量
//3）修饰函数

//void test()
//{
//	static int j = 0;//static修饰局部变量,局部变量只初始化一次
//	j++;
//	printf("%d ", j);
//}
//
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		test();
//		//printf("%d", j);
//	}
//	return 0;
//}


extern int age;
//2)static修饰全局变量:全局变量只能在该文件中使用，不能被其他文件引用
//int main()
//{
//	printf("%d ", age);
//	return 0;
//}


//extern void test();
//
//int main()
//{
//	test();
//	return 0;
//}



//1)num & ~num
//7
//00000000 00000000 00000000 00000111 -- 7
//11111111 11111111 11111111 11111000  --~num
//00000000 00000000 00000000 00000000 &

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", num & ~num);
//	return 0;
//}


//二进制补码中的低位首0变1
//num | (num + 1)
//11111111 11111111 11111111 11111111 --> -1
//00000000 00000000 00000000 00000000
//11111111 11111111 11111111 11111111

//00000000 00000000 00000000 00000110  --> 6
//00000000 00000000 00000000 00000101  --> 5
//00000000 00000000 00000000 00000111  --> 7
//int main()
//{
//	int num = 6;
//	printf("%d\n", num | (num + 1));
//	return 0;
//}


//交换两个数的值

//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d, b= %d\n", b, a);
//	return 0;
//}


//int main()
//{
//	int tmp = 0;
//	int a = 10;
//	int b = 20;
//
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d %d\n", a, b);
//	return 0;
//}


//算术运算（会溢出）
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n", a, b);
//	return 0;
//}



//按位异或
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", 10 ^ 10);
//
//	a = a ^ b;
//	b = a ^ b;//b = a ^ b ^ b;
//	a = a ^ b;// a = a ^ b ^ a;
//	printf("%d %d", a, b);
//	return 0;
//}