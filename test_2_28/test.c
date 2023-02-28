#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main()
//{
//	//sizeof内部是表达式的话不会进行算术运算
//	int a = 10;
//	printf("%d\n", a);//10
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(a++));//4
//	printf("%d\n", sizeof(++a));//4
//	printf("%d\n", a);//10,没有进行表达式计算
//
//	char c = 8;
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(+c));//4
//	printf("%d\n", sizeof(-c));//4
//
//	short b = 8;
//	printf("%d\n", sizeof(b));//2
//	printf("%d\n", sizeof(+b));//4
//	printf("%d\n", sizeof(-b));//4
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	//1）前置++/--：先自增，再使用
//	int i = 10;
//	printf("%d\n", ++i);//11
//	//printf("%d\n", --i);//9
//	
//	//2）后置++ / --：先使用，再自增
//	int a = 10;
//	//printf("%d\n", a++);//10
//	printf("%d\n", a--);//10
//	return 0;
//}


//#include <stdio.h>
//
//typedef unsigned int unit;//将unsigned int重定义为unit
//
//int main()
//{
//	//使用重定义的类型进行声明变量
//	unit num = 10;//等价于 unsigned int num = 10;
//	printf("%u\n", num);//10
//	return 0;
//}


/*
1）修饰局部变量
—— 使局部变量的生命周期变长（只被初始化一次，被初始化后一直存在）
2）修饰全局变量
——使全局变量只能在本文件内使用（全局变量具有外部链接属性）
3）修饰函数
——使函数只能在本文件内使用
*/

//#include <stdio.h>
//void test(int i)
//{
//	//static修饰局部变量
//	static int num = 0;
//	num = i;
//	printf("%d\n", num);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test(i);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//extern int age;//引用外部的全局变量
//
//int main()
//{
//	printf("%d\n", age);//10
//	return 0;
//}


//#include <stdio.h>
//
////static修饰函数
//static void test()
//{
//	printf("test~");
//}
//
//int main()
//{
//	test();
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int num = 10;
//	//指针是用来存放其他变量的地址的
//	int* p = &num;
//	
//	//看看指针是否存放的是num的地址
//	printf("%p\n", &num);
//	printf("%p\n", p);
//	return 0;
//}



//指针的大小
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}



//#include <stdio.h>
//
//struct Person
//{
//	int age;
//	char gender;
//};
//typedef struct Person Person;
//
//int main()
//{
//	Person person = { 18,'m' };
//	Person* p = &person;
//
//	//结构体指针访问成员属性的形式
//	//形式1：使用->
//	printf("%d\n", p->age);//
//	printf("%d\n", p->gender);
//	//形式2：(*xx).属性
//	printf("%d\n", (*p).age);
//	printf("%c\n", (*p).gender);
//	return 0;
//}


//一个程序只能有一个主函数
//#include <stdio.h>
//
//int main(){}
//int main(){}