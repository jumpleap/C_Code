#define _CRT_SECURE_NO_WARNINGS
//从用户自己定义的头文件开始查找，然后从C标准库中的头文件查找，若都没有，报错
//#include "test.h" 

//函数的具体实现
//void print()
//{
//	printf("hehe\n");
//}
//
//int getMax(int x, int y)
//{
//	return x > y ? x : y;
//}
////每个函数定义后结束之后都要加上一行空行
//
//int grade(int score)
//{
//	//逻辑上密切相关的语句之间不加空行，其他地方应该加空格分隔
//	int x = 0;
//	int y = 0;
//
//	if (x > y)
//	{
//		score = x;
//	}
//	else
//	{
//		score = y;
//	}
//	return score;
//}

//int main()
//{
//	//结构的实现
//	struct People p = { "jack",20 };
//	return 0;
//}



//int main()
//{
//	//一行代码只做一件事情，如只定义一个变量，或只写一条语句
//	int num = 10;//定义变量
//	int i = 0;
//
//	//if、for、while、do等语句独占一行，执行语句不得紧跟其后
//	//不论执行语句有多少都要加{} 
//	if (num > 0)
//	{
//		num = 20;
//	}
//
//	while (i < 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//1）关键字之后要留空格
//2）函数名之后不要留空格
//3）’, ‘后留空格，’; ‘：不是一行的结束标志，那么后面留空格
//4）赋值运算符、比较运算符、算术运算符、逻辑运算符、
// 位运算符等二元操作符前后都要有空格
//5）一元运算符前后不加空格
//6）[]、.、->：操作符前后不加空格
//注：对于表达式过长的for和if语句，为了紧凑期间可以适当的去掉一些空格

////函数名之后不要留空格
//void print(int x, int y)
//{
//	printf("haha\n");
//}
//
//int main()
//{
//	//关键字之后要留空格
//	int num = 10;//int是关键字
//	int i = 0;
//
//	//’, ‘后留空格
//	print(10, 20);
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	//’; ‘：不是一行的结束标志，那么后面留空格
//	//对于表达式过长的for和if语句，为了紧凑期间可以适当的去掉一些空格
//	for (i=0; i<10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	//赋值运算符、比较运算符、算术运算符、逻辑运算符、
//	//位运算符等二元操作符前后都要有空格
//	int c = 10 + 20;//=：赋值运算符，+：算术运算符
//	int d = 2 << 2;//<<：位运算符
//
//	if (c > num)//>：逻辑运算符
//	{
//		printf("%d\n", c);
//	}
//
//	//一元运算符前后不加空格
//	int data = !d;//!：是一元运算符
//
//	struct People p = { "marry",18 };
//	struct People* pa = &p;
//
//	//[] 、.、->：操作符前后不加空格
//	printf("%s %d", pa->name, pa->age);
//	return 0;
//}



//int main()
//{
//	//程序的分隔符{}均独占一行并且位于同一列,即对齐
//	//{}里的代码块在{ 的左边进行对齐
//	if (1 > 3)
//	{
//		printf("hhhh\n");
//	}
//	return 0;
//}


////长表达式要在低优先级操作符处拆分成新行，操作符放在新行之首。
//if (num1 && num2 || num3 && num4 
//	|| num5 && num6 || num7 && num8 || num9)
//{
//
//}


//int main()
//{
//	//将修饰符*和&紧靠变量名
//	int* x, y;//x是int*类型，y是int类型；
//	return 0;
//}



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("****************************\n");
	printf("*****    1.玩游戏      *****\n");
	printf("*****    0.退出游戏    *****\n");
	printf("****************************\n");
}

void game()
{
	//生成1-100的随机数
	int num = rand() % 100 + 1;
	//printf("%d\n", num);
	int guessNum = 0;
	
	while (1)
	{
		printf("请输入你猜的数字:\n");
		scanf("%d", &guessNum);

		//输入数据与随机数进行比较
		if (guessNum > num)
		{
			printf("猜大了\n");
		}
		else if (guessNum < num)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了!!!\n");
			break;
		}
	}
}

//猜数字游戏详解
int main()
{
	int opt = 0;
	//生成随机数种子
	srand((unsigned int)time(NULL));
	do
	{
		menu();//菜单
		printf("请选择：>");
		scanf("%d", &opt);

		switch (opt)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}
	} while (opt);
	return 0;
}