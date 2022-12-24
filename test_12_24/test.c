#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//使用&地址符号取出变量的地址
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//输入函数，&是取num变量的地址，输入的数放在num的地址中
//	&num;//取出num的地址
//	//使用%p打印地址信息
//	printf("%p\n", &num);//006FF9E0：地址随机产生，每次产生的地址不同
//	return 0;
//}

//int main()
//{
//	int a = 10;//向内存申请4个字节的空间储存10
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//&a取出了a的地址，使用pa进行储存
//	return 0;
//}

//int main()
//{
//	//sizeof求数据类型或对象的字节大小
//	printf("char* =%d\n", sizeof(char*));
//	printf("short* =%d\n", sizeof(short*));
//	printf("int* =%d\n", sizeof(int*));
//	printf("long* =%d\n", sizeof(long*));
//	printf("long long* =%d\n", sizeof(long long*));
//	printf("float* =%d\n", sizeof(float*));
//	printf("double* =%d\n", sizeof(double*));
//	return 0;
//}


//struct student
//{
//	char name[12];
//	char sex[3];
//	int age;
//};
//
//int main()
//{
//	struct student stu = { "小明","男",18};//声明结构体变量并初始化结构体变量
//	//打印结构体变量的信息:使用.去访问结构体的成员信息
//	printf("name = %s sex = %s age = %d\n", stu.name, stu.sex, stu.age);
//	return 0;
//}


struct student
{
	char name[12];
	char sex[3];
	int age;
};

int main()
{
	struct student stu = { "小明","男",18 };//声明结构体变量并初始化结构体变量
	struct student* p = &stu;//指针p储存了stu的地址
	//使用（*xx).xx或->去访问结构体指针的成员信息
	printf("%s %s %d\n", (*p).name, (*p).sex, (*p).age);
	printf("%s %s %d\n", p->name, p->sex, p->age);
	return 0;
}