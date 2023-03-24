#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//struct Node
//{
//	int data;
//	struct Node next;
//};//看出了这个地方是非法的，报错过不去
//
//int main()
//{
//	printf("%d\n", sizeof(struct Node));
//	return 0;
//}

//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct Node));
//	return 0;
//}


//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8
//	return 0;
//}


//enum Sex
//{
//	MALE,
//	FEMALE
//};
//
//int main()
//{
//	enum Sex sex = MALE;
//	sex = 10;
//	printf("%d\n", sex);
//	return 0;
//}


//union Un
//{
//	int i;
//	char c;
//};
//union Un un;
//
//int main()
//{
//	// 下面输出的结果是一样的吗？
//	printf("%p\n", &(un.i));
//	printf("%p\n", &(un.c));
//	//下面输出的结果是什么？
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//	return 0;
//}


//union Un1
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
//
//int main()
//{
//	//下面输出的结果是什么？
//	printf("%d\n", sizeof(union Un1));//8
//	printf("%d\n", sizeof(union Un2));//16
//	return 0;
//}



//定义学生类型
//struct stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	double weight;
//}s4, s5, s6;//全局变量
//
//int main()
//{
//	struct stu s1, s2, s3;//局部变量
//	return 0;
//}


//匿名结构体类型 —— 没有名字的结构体类型
//struct
//{
//	char c;
//	int i;
//}s;


//struct
//{
//	int i;
//	char c;
//}s;
//
//struct
//{
//	int i;
//	char c;
//}*ps;
//
////编译器会报出这是两个不同的类型。会发出警告，不能这样写
//int main()
//{
//	ps = &s;
//	return 0;
//}



//typedef struct student
//{
//	int age;
//	char name[20];
//	stu* next;//这样是否能行？//不能行，因为typedef的定义是在stu的后面，
//	//编译器不能识别stu
//}stu;

//typedef struct student
//{
//	int age;
//	char name[20];
//	struct student* next;//正确形式
//}stu;



//结构体的初始化
//struct stu
//{
//	int age;
//	char sex;
//}s1;
//
//int main()
//{
//	//初始化方式1：不按顺序初始化
//	struct stu s2 = { .age = 10,.sex = 'm' };
//	printf("%d %c", s2.age, s2.sex);
//
//	//初始化方式2：顺序初始化
//	struct stu s3 = { 18,'c' };
//
//	return 0;
//}


//struct s
//{
//	int i;
//	char c;
//	int* ptr;
//};
//
//int main()
//{
//	//结构体中指针的初始化的方式
//	struct s s1 = { 18,'n',NULL };
//	int age = 19;
//	struct s s1 = { 18,'n',&age };
//	return 0;
//}



//下面的结构体的占用了多少的字节空间
//struct S1
//{
//	int a;
//	char c;
//};
//
//struct S2
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S3
//{
//	char c1;
//	int a;
//	char c2;
//	char c3;
//}; 
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//8
//	printf("%d\n", sizeof(struct S2));//12
//	printf("%d\n", sizeof(struct S3));//12
//	return 0;
//}


//如何查看结构体某个成员变量的地址偏移处
//offsetof查看
//#include <stddef.h>
//
//struct stu
//{
//	char sex;
//	int age;
//	int birth;
//	double weight;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct stu,sex));//0
//	printf("%d\n", offsetof(struct stu,age));//4
//	printf("%d\n", offsetof(struct stu,birth));//8
//	printf("%d\n", offsetof(struct stu,weight));//16
//	return 0;
//}



//思考以下结构体所占多大的内存空间
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S2));//8
//	printf("%d\n", sizeof(struct S4));//32
//
//	return 0;
//}



//vs中的默认对齐数是8
//如何自己设置默认对齐数

//#pragma pack(1)//设置默认对齐数是1
//struct stu
//{
//	char c;
//	int age;
//	char name;
//};
//#pragma pack() //恢复默认对齐数 -- 8
//
//int main()
//{
//	printf("%d\n", sizeof(struct stu));//6
//	return 0;
//}




//结构体传参的问题
//传值好还是传地址好？

//struct stu
//{
//	int age;
//	char sex;
//};
//
//void print(struct stu s1)
//{
//	printf("%d %c\n", s1.age, s1.sex);
//}
//
//void print1(struct stu* s1)
//{
//	printf("%d %c\n", s1->age, s1->sex);
//}
//
//int main()
//{
//	struct stu s1 = { 18,'m' };
//	print(s1);//传值
//	print1(&s1);//传址
//	return 0;
//}


//传值的时候会进行压栈，会降低程序的时间和空间开销，所有我们应该进行传地址


//位段 - 二进制位
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};//47 bit -- 进行补齐48个比特位 -- 即8个字节
//
//
//int main()
//{
//	struct A sa = {0};
//	printf("%d\n", sizeof(sa));//8
//
//	return 0;
//}



//一个小case快速了解位段
//struct s
//{
//	char a : 3;//011
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};

//3 + 4 + 5 + 4 = 16 --> 明明只占两个字节，为什么打印出三个字节
//3,4 占一个字节，5独占一个字节，4独占一个字节

//int main()
//{
//	printf("%d\n", sizeof(struct s));//3
//	struct s s1 = { 0 };
//	s1.a = 10;//1010 --> 3个比特位 --> 010
//	s1.b = 12;//1100 --> 4个比特位 --> 1100
//	s1.c = 3;//011   --> 5个比特位 --> 00011
//	s1.d = 4;//100   --> 4个比特位 --> 0100
//	//在Vs中的样式：0110 0010 0000 0011 0000 0100
//	//十六进制形式： 6    2    0   3    0    4
//	//调试查看
//	return 0;
//}



enum Sex
{
	//枚举的可能取值,默认是从0开始，递增1的
	//枚举常量
	MALE,
	FEMALE  = 5,
	SECRET//后面跟着递增
};

int main()
{
	enum Sex s = FEMALE;
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//5
	printf("%d\n", SECRET);//6

	return 0;
}