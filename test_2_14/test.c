#define _CRT_SECURE_NO_WARNINGS

//下列程序段的输出结果为（C）
//unsigned long pulArray[] = { 6,7,8,9,10 };
//unsigned long* pulPtr;
//pulPtr = pulArray;
//*(pulPtr + 3) += 3;
//printf(“% d, % d\n”, *pulPtr, *(pulPtr + 3));

//A.9, 12
//B.6, 9
//C.6, 12
//D.6, 10

//代码验证
//#include <stdio.h>
//
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf(" % d, % d\n", *pulPtr, *(pulPtr + 3));//6 12
//	return 0;
//}



//如有以下代码：

//struct student
//{
//	int num;
//	char name[32];
//	float score;
//}stu;

//则下面的叙述不正确的是：(D)

//A.struct 是结构体类型的关键字
//B.struct student 是用户定义的结构体类型
//C.num, score 都是结构体成员名
//D.stu 是用户定义的结构体类型名



//结构体访问成员的操作符不包含：（D）
//
//A..操作符
//B.->操作符
//C.*解引用操作符
//D.sizeof



//关于二级指针描述描述正确的是：（B）
//
//A.二级指针也是指针，只不过比一级指针更大
// 错误
//B.二级指针也是指针，是用来保存一级指针的地址
//C.二级指针是用来存放数组的地址
// 一维数组使用一级指针
//D.二级指针的大小是4个字节
//64位平台下是8个字节

//代码验证
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(int**));//4
//	printf("%d\n", sizeof(double**));//4
//	return 0;
//}



//下面关于指针运算说法正确的是：（C）
//
//A.整形指针 + 1，向后偏移一个字节
// 4个字节
//B.指针 - 指针得到是指针和指针之间的字节个数
// 得到的是值的相差
//C.整形指针解引用操作访问4个字节
//D.指针不能比较大小
//指针中存储的值能比较大小

//代码验证
//#include <stdio.h>
//
//int main()
//{
//	//整型指针在32位平台下的加1是跳4个字节的空间
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	//指针-指针结果是两个指针之间的距离
//	int* p1 = &arr[1];
//	printf("%d\n", p1 - p);
//	return 0;
//}



//下面哪个是指针数组：（A）
//
//A. int* arr[10];
//B.int* arr[];
// 也是指针数组，但是没有索引
//C.int** arr;
// 二级指针
//D.int(*arr)[10];
//数组指针



//下面程序要求输出结构体中成员a的数据,以下不能填入横线处的内容是(B)
//#include < stdio.h >
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", __________);
//	return 0;
//}

//A.a.a
//B.*p.a
//C.p->a
//D.(*p).a



//关于Debug和Release的区别说法错误的是：（D）
//
//A.Debug被称为调试版本，程序调试找bug的版本
//B.Release被称为发布版本，测试人员测试的就是Release版本
//C.Debug版本包含调试信息，不做优化。
//D.Release版本也可以调试，只是往往会优化，程序大小和运行速度上效果最优
//错误，Release调式一下就过，无法看出具体实现过程



//下面程序的输出结果是：（C）
//#include <stdio.h>
//
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},
//							 {9802,"wang",19},
//					{9803,"zhao",18} };
//	fun(students + 1);
//	return 0;
//}
//
//A.zhang
//B.zhao
//C.wang
//D.18



//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//20 10 5 2 1 1 = 39瓶水

#include <stdio.h>

int getSum(int num)
{
	int ret = num * 2 - 1;
	return ret;
}

int main()
{
	int num = 0;
	scanf("%d", &num);

	int sum = getSum(num);
	printf("%d\n", sum);
	return 0;
}