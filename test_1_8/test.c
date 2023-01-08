#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1.判断下面的代码输出什么
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);//死循环的输出5
//	}
//	return 0;
//}



//2.关于if语句说法正确是：(C)
//A.if语句后面只能跟一条语句
// 错，{}代码块内可以跟多条语句，如果没有代码块只能跟一条语句
//B.if语句中0表示假，1表示真
// 错，如果条件就是要等于0才为真，那0为真，1为假
//C.if语句是一种分支语句，可以实现单分支，也可以实现多分支
// 对
//D.else语句总是和它的对齐的if语句匹配
//错，else语句总和它最近的if语句进行匹配


//3.下面代码输出的是
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//		case 1:
//			b = 30;
//		case 2:
//			b = 20;
//		case 3:
//			b = 16;
//		default:
//			b = 0;
//	}
//	return b;
//}
//
//int main()
//{
//	int res = func(1);
//	printf("%d\n", res);//0
//	return 0;
//}


//switch (c)语句中，c不可以是什么类型（ D）
//A.int --> 对
//B.long --> 对
//C.char --> 对
//D.float --> 错
//解释：在switch()的括号中，括号中必须是整型值或整型表达式（能得出结果），char也是整型的一种形式



//下面代码的执行结果是什么
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//		case 1:
//			switch (y)
//			{
//				case 0:
//					printf("first");
//				case 1:
//					printf("second");
//				default:
//					printf("hello");//hello
//			}
//		case 2:
//			printf("third");//third
//	}
//	return 0;
//}


//关于while(条件表达式) 循环体, 以下叙述正确的是（B ） ? 
//（假设循环体里面没有break, continue，return，goto等等语句)
// 
//A.循环体的执行次数总是比条件表达式的执行次数多一次 --> 少一次
//B.条件表达式的执行次数总是比循环体的执行次数多一次 --> 对
//C.条件表达式的执行次数与循环体的执行次数一样  --> 不一样
//D.条件表达式的执行次数与循环体的执行次数无关  --> 有关


//以下程序的输出结果是
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b > 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b += 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);//8
//	return 0;
//}


//关于switch说法不正确的是：（D）
//
//A.switch语句中的default子句可以放在任意位置 //对
//B.switch语句中case后的表达式只能是整形常量表达式 //对
//C.switch语句中case子句必须在default子句之前 //错，可以放在任意位置
//D.switch语句中case表达式不要求顺序


#include <stdio.h>

//写一个代码打印1-100之间所有3的倍数的数字
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}