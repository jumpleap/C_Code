#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	//C语言由一个分号(;)隔开的就是一条语句
//	;//空语句
//	int a = 10;//语句
//	return 0;//这就是一条语句
//}

//C语言的语句分类：表达式语句、函数调用语句、控制语句、复合语句、空语句
//void print()
//{
//	printf("cute!\n");
//}
//
//int main()
//{
//	//1.表达式语句
//	int a = 10;
//	//2.函数调用语句
//	print();
//	//3.控制语句
//	int i = 0;
//	for (i = 0; i < 10; i++);
//	//i<10是控制语句
//	//4.复合语句
//	int b = (a++, ++a, a--);
//	return 0;
//}


//1）C语言中，0和NULL表示假，非0表示真
//2）一对{}就是一个代码块
//int main()
//{
//	int a = 0;
//	int* p = NULL;
//
//	if (a)
//	{
//		printf("hello\n");
//	}
//	else
//	{
//		printf("see you\n");//see you
//	}
//
//	if (p)
//	{
//		printf("null\n");
//	}
//	else
//	{
//		printf("true\n");//true
//	}
//	return 0;
//}


//单分支语句:if（表达式）
//int main()
//{
//	int a = 1;
//	if (a)
//	{
//		printf("a = %d\n", a);//1
//	}
//	return 0;
//}

//双分支：if（表达式）{ } else{ }
//如果if的表达式为真，执行if{ }里面的语句，反之执行else{ }里面的语句
//int main()
//{
//	int a = 0;
//	if (a)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");//haha
//	}
//	return 0;
//}

//多分支：if（表达式）{ } else if（表达式）{ } else if（表达式）{ } …… else {}
//—— 那个的表达式为真则执行那个，如果都不为真，则执行最后的else{ }中的代码

//int main()
//{
//	int a = 10;
//	int b = 11;
//	int c = 10;
//
//	if (a == b)
//	{
//		printf("a等于b\n");
//	}
//	else if (b == c)
//	{
//		printf("b等于c\n");
//	}
//	else if (a == c)
//	{
//		printf("a等于c\n");//a等于c
//	}
//	else
//	{
//		printf("三个数均不相等！！！\n");
//	}
//	return 0;
//}


////if中的相互嵌套
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age > 18)
//	{
//		if (age > 30)
//		{
//			printf("中年\n");
//		}
//		else
//		{
//			printf("青年\n");
//		}
//	}
//	else
//	{
//		printf("未成年\n");
//	}
//	return 0;
//}

//悬空else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("haha\n");
//		else
//			printf("hehe\n");
//	return 0;
//}


//i.判断一个数是不是奇数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (num % 2 == 0)
//	{
//		printf("%d是偶数\n", num);
//	}
//	else
//	{
//		printf("%d是奇数\n", num);
//	}
//	return 0;
//}


//ii.判断一个数是不是素数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int i = 0;
//	for (i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//		{
//			printf("%d不是素数\n", num);
//			return 0;
//		}
//	}
//	printf("%d是素数\n", num);
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//		case 1:
//			printf("Monday\n");
//			break;
//		case 2:
//			printf("Tuesday\n");
//			break;
//		case 3:
//			printf("Wednesday\n");
//			break;
//		case 4:
//			printf("Thursday\n");
//			break;
//		case 5:
//			printf("Friday\n");
//			break;
//		case 6:
//			printf("Saturday\n");
//			break;
//		case 7:
//			printf("Sunday\n");
//			break;
//		default:
//			printf("我也不知道什么day啦~\n");
//			break;
//	}
//	return 0;
//}


//switch(表达式)中的表达式必须是整型表达式，若是使用其他类型，则报错
//整型表达式包括：char、short、int、long、long long
//int main()
//{
//	char ch = 'a';
//	scanf("%c", &ch);
//	switch (ch)
//	{
//		case 'a':
//			printf("a\n");
//			break;
//		case 'b':
//			printf("b\n");
//			break;
//		case 'c':
//			printf("c\n");
//			break;
//		case 'd':
//			printf("d\n");
//			break;
//		default:
//			printf("error\n");
//			break;
//	}
//
//	//double db = 0;
//	//scanf("%lf", &db);
//	//switch (db){} //错误，表达式不能是除整型外的其他类型
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	int opt = 10;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//		//case opt://错误，opt是变量名，而不是整型常量值
//		//case 1.3://错误，1.3是浮点数，而不是整型常量值
//		case 1://正确，1是整型常量值
//			printf("Monday\n");
//			break;
//	}
//	return 0;
//}



//switch允许嵌套使用
//int main()
//{
//	int num = 1;
//	int a = 0;
//	int b = 10;
//
//	switch (num)
//	{
//		case 1:
//			switch (b)
//			{
//				case 10:
//					a++;
//					break;
//				case 20:
//					b++;
//					a++;
//					break;
//				default:
//					b++;
//					break;
//			}
//			break;
//		default:
//			break;
//	}
//	printf("%d %d\n", a, b);//1 10
//	return 0;
//}

int main()
{
	int n = 1;
	int m = 2;
	
	switch (n)
	{
		case 1:
			m++;
		case 2:
			n++;
		case 3:
			switch (n)
			{
				case 1:
					n++;
				case 2:
					n++;
					m++;
					break;
			}
		case 4:
			m++;
			break;
		default:
			break;
	}
	printf("%d %d\n", m, n);// 5 3
	return 0;
}