#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//typedef unsigned int unit; //把无符号整型重命名为unit
//int main()
//{
//	unit a = 10;
//	printf("%u\n", a);//%u是打印无符号整型
//	return 0;
//}


//静态局部变量：只被初始化一次，随着程序的结束而结束，使该局部变量的生命周期变长
//但是只能在定义自己的{}内使用
//void test(int i)
//{
//	static int j = 10;
//	j++;
//	printf("i = %d j = %d\n", i, j);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test(i);
//	}
//	return 0;
//}


//全局变量具有外部链接属性，其他文件的全局变量，我们可以使用extern关键字来引用
//static修饰全局变量后，该全局变量就不具有了外部链接属性（该全局变量只能在本文件内访问）
//extern int sum;
//int main()
//{
//	printf("%d\n", sum);
//	return 0;
//}


//extern int getSum(int, int);//因为getSum(int,int)的外部链接属性不存在了，所以无法引用这个函数
//int main()
//{
//	printf("%d\n", getSum(10,20));//找不到getSum()函数
//	return 0;
//}

//#define定义的标识符常量

//#define MAX 100
//int main()
//{
//	printf("%d\n", MAX);//100
//	return 0;
//}


//#define定义宏
#define sum(a,b) ((a)+(b))
int main()
{
	printf("%d\n", sum(10, 20));
	return 0;
}