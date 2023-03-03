#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int check_sys(int a)
//{
//	//返回低地址的第一个字节的数据值
//	return (*(char*)&a);
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys(a);
//
//	//返回比较
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}



//整型提升
//#include <stdio.h>
//
//int main()
//{
//	char ch1 = 127;
//	//01111111
//	char ch2 = 3;
//	//00000011
//	char ch3 = ch1 + ch2;
//	//01111111  --> 127
//	//00000011  --> 3
//	//10000010 --> 补码
//	//11111111 11111111 11111111 10000010 整型提升
//	//10000010  截断
//	//10000001 
//	//11111110 -126 结果
//
//	printf("%d %d\n", ch3, ch1 + ch2);//-126 130
//	return 0;
//}



//异或的性质
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int c = 0;
//	int d = 5;
//	
//	int ret = a ^ c;
//	int res = a ^ b ^ d;
//	printf("%d\n", ret);//10
//	printf("%d\n", res);//5
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (num & 1)
//	{
//		printf("%d是奇数\n", num);
//	}
//	else
//	{
//		printf("%d是偶数\n", num);
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int is_judge_even(int num)
//{
//	return num % 2;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (is_judge_even(num))
//	{
//		printf("%d是奇数\n", num);
//	}
//	else
//	{
//		printf("%d是偶数\n", num);
//	}
//	return 0;
//}


#include <stdio.h>

void test()
{
	printf("test...\n");
}

int main()
{
	test();
	return 0;
}