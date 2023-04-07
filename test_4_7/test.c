#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	//所占字节数的大小是多少？
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}


//#include <stdio.h>
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct S2));//?
//	return 0;
//}


//#include <stdio.h>
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S3));//?
//	return 0;
//}


//#include <stdio.h>
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
//	printf("%d\n", sizeof(struct S4));//？
//	return 0;
//}


//#include <stdio.h>
//
//#pragma pack(4)//默认对齐数被修改为4
//struct stu
//{
//	char gender;
//	double d;
//	int i;
//};
//#pragma pack()//还原VS的默认对齐数
//
//int main()
//{
//	printf("%d\n", sizeof(struct stu));//16
//	return 0;
//}



//#include <stdio.h>
//
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



//#include <stdio.h>
//
//enum Day//星期
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur = 10,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex//性别
//{
//	MALE = 2,
//	FEMALE,
//	SECRET
//};
//
//enum Color//颜色
//{
//	RED,
//	GREEN,
//	BLUE = 6
//};
//
//int main()
//{
//	enum Day day = Fri;
//	enum Sex sex = SECRET;
//	enum Color color = RED;
//
//	printf("%d\n", day);//11
//	printf("%d\n", sex);//4
//	printf("%d\n", color);//0
//	return 0;
//}



//#include <stdio.h>
//
//union Un
//{
//	char ch;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	u.i = 1;
//
//	if (u.ch == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//
//union Un1
//{
//	char c[5];
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un1));
//	return 0;
//}


#include <stdio.h>

union Un2
{
	short c[7];
	int i;
};

int main()
{
	printf("%d\n", sizeof(union Un2));
	return 0;
}