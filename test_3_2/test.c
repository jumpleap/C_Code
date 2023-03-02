#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
////const对指针的作用
////1.const 放在数据类型的前面，则指针所指向的变量的内容不能改变，但指针的指向能改变
////2.const 放在数据类型的后面，则指针所指向的变量的内容能改变，但指针的指向不能改变
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	const int* p1 = &a;
//	//指向变量的内容不能改变
//	//*p1 = 20;
//	//能改变指向的变量
//	p1 = &b;
//	printf("%d\n", *p1);//11
//
//	int* const p2 = &a;
//	//指向变量的内容能改变
//	*p2 = 12;
//	printf("%d\n", *p2);//12
//	//不能改变指向的变量
//	//p2 = &a;
//	return 0;
//}



//#include <stdio.h>
//
////extern关键字的作用
//extern int age;
//
//int main()
//{
//	printf("%d\n", age);//20
//	return 0;
//}



//顺序结构
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a + b);
//	return 0;
//}


//分支结构
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 9;
//
//	if (a > b)
//	{
//		printf("a > b\n");
//	}
//	else
//	{
//		printf("a < b\n");
//	}
//	return 0;
//}


//循环结构
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("believe youself, you can do it!!!\n");
//		i++;
//	}
//	return 0;
//}



//语句: 以分号结束的表达式或常量就叫做语句
//#include <stdio.h>
//
//int main()
//{
//	"abcdef";//分号结束
//	int num = 10;//分号结束
//	return 0;
//}



//多分支的执行规则
//#include <stdio.h>
//
//int main()
//{
//	int score = 0;
//	scanf("%d", &score);
//
//	if (score > 0 && score < 60)
//	{
//		printf("成绩不合格\n");
//	}
//	else if (score >= 60 && score < 70)
//	{
//		printf("成绩一般\n");
//	}
//	else if (score >= 70 && score < 80)
//	{
//		printf("成绩良好\n");
//	}
//	else if (score >= 80 && score < 90)
//	{
//		printf("成绩优良\n");
//	}
//	else if (score >= 90 && score <= 100)
//	{
//		printf("成绩优秀\n");
//	}
//	else
//	{
//		printf("你输入的成绩有误，请重写输入~\n");
//	}
//	return 0;
//}



//switch和case的特点
//#include <stdio.h>
//
//int main()
//{
//	int weekday = 0;
//	scanf("%d", &weekday);
//	double data = 4;
//	//switch(data){}（）中只能为整型表达式
//	switch (weekday)
//	{
//		//case 1.0://错误，case的后面只能跟整型常量值且整型常量值不能重复
//		case 1:
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期日\n");
//			break;
//		default:
//			printf("你输入的数字有误，请重新操作\n");
//			break;//好习惯
//	}
//	return 0;
//}



//break和continue再循环中的作用
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);//0 1 2 3 4
//		i++;
//	}
//
//	i = 0;
//	while (i < 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);//0 1 2 3 4 死循环
//		i++;
//	}
//	return 0;
//}



#include <stdio.h>

//空类型
void test(void){}

int main()
{
	//整型家族
	char a;
	short b;
	int c;
	long d;
	long long e;

	//浮点型家族
	float f;
	double g;

	//构造类型
	//struct{};//里面需要填构造中的参数
	//union{};
	int arr[10];
	enum{};

	//指针类型
	int* p1;
	char* p2;
	float* p3;

	return 0;
}