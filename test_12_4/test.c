#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	//数据类型的所占空间大小
//	printf("%d\n", sizeof(char)); //1
//	printf("%d\n", sizeof(short)); //2
//	printf("%d\n", sizeof(int));  //4
//	printf("%d\n", sizeof(long)); //4
//	printf("%d\n", sizeof(long long)); // 8
//	printf("%d\n", sizeof(float)); //4
//	printf("%d\n", sizeof(double)); //8
// 
//	//printf是打印信息的函数，在控制台上打印信息
//	//编译器默认小数类型是double型，若是需要使用float型，在数字后面+F/f
//	float f = 3.14f;
//
//	return 0;
//}


//局部变量：在{}内定义的变量
//全局变量：在{}外定义的变量
int num = 20;

int main()
{
	int num = 10;
	printf("%d\n", num); //10
	//1.局部变量和全局变量名字可以相同
	//2.在局部变量和全局变量名字相同的时候，优先使用局部变量
	return 0;
}