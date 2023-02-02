#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//有如下代码，则 *(p[0]+1) 所代表的数组元素是（C）
//int a[3][2] = { 1, 2, 3, 4, 5, 6 }, * p[3];
//p[0] = a[1];
//A: a[0][1] B : a[1][0] C : a[1][1] D : a[1][2]

//代码解释
//int main()
//{
//	int a[3][2] = { 1, 2, 3, 4, 5, 6 }, * p[3];
//	p[0] = a[1];
//	printf("%d\n", *(p[0] + 1));//4 == a[1][1]
//	return 0;
//}



//关于指针下列说法正确的是【多选】（ABD）

//A : 任何指针都可以转化为void * 
//B : void* 可以转化为任何指针
//C : 指针的大小为8个字节 
//D : 指针虽然高效、灵活但可能不安全

//代码解释
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	void* q;
//	int* m = (int*)q;
//	void* n = (void*)p;
//}



//以下 scanf 函数调用选项中， 错误的是（D）
struct T
{
	char name[20];
	int age;
	int sex;
} a[5], * pa = a;

//A: scanf("%s", a[0].name); B: scanf("%d", &pa[0].age);
//C: scanf("%d", &(pa->age)); D: scanf("%d", pa->age);

//代码解释
//int main()
//{
//	scanf("%s", a[0].name);
//	printf("%s\n", a[0].name);//对
//
//	scanf("%d", &pa[0].age);
//	printf("%d\n", pa[0].age); //正确
//
//	scanf("%d", & (pa->age));
//	printf("%d\n", pa->age); //正确
//
//	scanf("%d", pa->age);//错误，pa->age为int类型，需要取出取出对应的地址
//	printf("%d\n", pa->age);
//	return 0;
//}




//如下函数 fun 计算 prod=1*2*3*…*n ，并返回计算结果值。
//但当 n>12 时，返回值不正确。要找出该程序的错误，正确的调试方法是（A）
//int fun(int n)
//{
//	int prod = 1, i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		prod *= i;
//	}
//	return prod;
//}

//A: 监视变量prod的值，在prod *= i;行处设置断点，然后单步运行，直到发现错误原因
//B: 监视变量prod的值，在return prod; 行处设置断点，程序中断后，即可发现错误原因
//C: 在prod = 1; 处设置断点，然后在函数调用堆栈中即可发现错误原因
//D: 监视变量i的值，在for(i = 1; i <= n; i++)行处设置断点，然后单步运行，直到发现错误原因

//int main()
//{
//	printf("%d\n", fun(13));
//	return 0;
//}



//下列给定程序中，函数 fun 的功能是：
//把形参a所指数组中的奇数按原顺序依次存放到 a[0]、a[1]、a[2]… 中，把
//偶数从数组中删除，奇数个数通过函数值返回。 
//例如，若a所指数组中的数据最初排列为： 9, 1, 4, 2, 3, 6, 5, 8, 7 ，
//删除偶数后，a所指数组中的数据为： 9, 1, 3, 5, 7 ，返回值为5。
//请在程序的下画线处填入正确的内容并将下画线删除，使
//程序得出正确的结果（D）

//int fun(int a[], int n)
//{
//	int i, j;
//	j = 0;
//	for (i = 0; i < n; i++)
//		if (a[i] % 2 == __1_______)
//		{
//			a[j] = a[i];
//			____j++_____;
//		}
//	return ____j_____;
//}

//A: 0 j++ j B: 1 j++ j+1 C: 0 j++ j+1 D: 1 j++ j