#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//有以下函数，该函数的功能是（B）
//int fun(char* s)
//{
//	char* t = s;
//	while (*t++);
//	return(t - s);
//}
//A: 比较两个字符的大小 
//B: 计算s所指字符串占用内存字节的个数
//C: 计算s所指字符串的长度 
//D : 将s所指字符串复制到字符串t中

//代码验证
//int main()
//{
//	char* s = "abcdef";
//	printf("%d\n", fun(s));//7--->即字符串所在的字节数
//	return 0;
//}



//若有“ float a[3]={1.5,2.5,3.5},*pa=a;*(pa++)*=3; ”，则 *pa 的值是（B）
//A: 1.5 B : 2.5 C : 3.5 D : 4.5

//代码验证
//int main()
//{
//	float a[3] = { 1.5,2.5,3.5 }, * pa = a; 
//	*(pa++) *= 3;//后置++：先使用后自增
//	printf("%.1f\n", *pa);//2.5
//	return 0;
//}


//以下程序运行后的输出结果是（A）

//#include <stdio.h>
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }, * p = a + 5, * q = NULL;
//	*q = *(p + 5);
//	printf("%d %d\n", *p, *q);//运行报错，*q是空指针，不能对其解引用
//	return 0;
//}

//A: 运行后报错 B: 6 6 C: 6 11 D: 5 10



//设有定义 char *p[]={"Shanghai","Beijing","Honkong"}; 
//则结果为 j 字符的表达式是（B）
//A: *p[1] + 3
//B : *(p[1] + 3) 
//C : *(p[3] + 1) 
//D : p[3][1]

//代码验证
//int main()
//{
//	char* p[] = { "Shanghai","Beijing","Honkong" };
//	printf("%c\n", *p[1] + 3); //B +3 --> E
//	printf("%c\n", *(p[1] + 3));
//	//printf("%c\n", *(p[3] + 1));//越界
//	//printf("%c\n", p[3][1]);//越界
//	return 0;
//}



//以下叙述中正确的是（B）
//A: 即使不进行强制类型转换，在进行指针赋值运算时，指针变量的基类型也可以不同
// 在进行赋值运算的时候，指针只能赋地址
//B: 如果企图通过一个空指针来访问一个存储单元，将会得到一个出错信息
//C: 设变量p是一个指针变量，则语句p = 0; 是非法的，应该使用p = NULL;
// p=0和p=NULL等价
//D: 指针变量之间不能用关系运算符进行比较 //可以

//代码验证
//int main()
//{
//	/*char* p = NULL;
//	int a = 0;
//	p = &a;*/
//
//	int* p;
//	p = 0;
//
//	return 0;
//}