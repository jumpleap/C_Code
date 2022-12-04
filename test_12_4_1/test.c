#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int num = 100;
//
//int main()
//{
//	int x = 10;
//	printf("%d\n", x);
//	{
//		int y = 20;
//		printf("%d\n", y);
//	}
//	//printf("%d\n", y); //错误，y是局部变量，它的作用域是变量所在的局部范围
//	printf("%d\n", num);
//	return 0;
//}


//extern int global;
//int main()
//{
//	printf("%d\n", global);
//	return 0;
//}


//void test()
//{
//	int b = 20;
//	printf("%d\n", b);
//}
//
//int main()
//{
//	test();
//	//printf("%d\n", b); 错误，b的作用域属于它所在的{}，生命周期出{}后结束
//	return 0;
//}

//总结
//1.作用域
//	局部变量的作用域是变量所在的局部范围
//	全局变量的作用域是整个工程
//2.生命周期
//	局部变量的生命周期：进入作用域生命周期开始，出作用域生命周期结束
//	全局变量的生命周期：整个程序的生命周期


//#define MAX 10
//int main()
//{
//	//字面常量
//	3.14;
//	2;
//	'a';
//	"asnh";
//
//	//const修饰的常变量，const是常属性
//	const int n = 10; //n是一个变量，但是具有了常属性，不能被修改
//	//n = 20; //使用const修饰的变量，该其值不能再修改
//	//int arr[n];//虽然n具有了常属性，但本质上还是变量，所有不能使用它作为数字的大小
//
//  const: const修饰的常变量在C语言中只是在语法层面限制了变量不能被直接修改，但是它本质上还是变量，所以叫常变量
//	printf("%d\n", MAX);//10
//  int arr[MAX]; //可以使用
//	return 0;
//}

//枚举常量
//注意：常量名一般使用大写
//enum Sex
//{
//	MALE = 3,//默认从0开始
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex one = MALE;
//	printf("%d\n", one);
//	printf("%d\n", SECRET);
//
//	//MALE = 3; //不能直接给枚举中的常量赋值
//	return 0;
//}


//字符串：由双引号引起来的一串字符叫做字符串字面值，或简称为字符串
//字符串的结束标志是'\0'，在计算字符串长度的时候'\0'是结束标志，不算做字符串的内容
//int main()
//{
//	char arr1[] = "gitee";
//	char arr2[] = { 'g','i','t','e','e'};
//	char arr3[] = { 'g','i','t','e','e','\0' };
//	printf("%s\n", arr1);//gitee
//	printf("%s\n", arr2);//不知道什么时候遇到'\0',所以不能确定
//	printf("%s\n", arr3);//gitee
//	return 0;
//}

#include <string.h>
////使用strlen()函数求字符串长度 -- 需要头文件string.h
//int main()
//{
//	char arr1[] = "gitee";
//	char arr2[] = { 'g','i','t','e','e'};
//	char arr3[] = { 'g','i','t','e','e','\0' };
//	printf("%d\n", strlen(arr1));// 5
//	printf("%d\n", strlen(arr2));//不知道什么时候遇到'\0',所以不能确定
//	printf("%d\n", strlen(arr3)); //5
//	return 0;
//}


//转义符
//int main()
//{
//	printf("hello\nworld!\n"); // \n：换行
//	printf("hello,\tworld!\n"); // \t:制表符
//	printf("\\"); //\ --> 打印
//	printf("%s\n", "\""); //打印出一个"
//	printf("%c\n", '\'');//打印出'
//
//	printf("D:\\C_code\\c-language-code\n"); 
//
//	//八进制 -- \ddd
//	printf("%d\n", '\123'); //83
//	printf("%c\n", '\045');
//
//	//十六进制 -- \xdd
//	printf("%d\n", '\x12'); //18
//	return 0;
//}


//int main()
//{
//	printf("%d\n", strlen("abcdef")); //6
//	printf("%d\n", strlen("c:\test\628\test.c")); //14
//	return 0;
//}


int main()
{
	int option = 0;
	printf("你会好好敲代码吗？(1/0):\n");
	scanf("%d", &option);
	if (option == 1)
	{
		printf("你会成功的！！！\n");
	}
	else
	{
		printf("这样不得行哦，要好好敲代码！！！\n");
	}
	return 0;
}