#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//循环语句形式
//int main()
//{
//	//1.while循环
//	//while (条件)
//	//{
//	//	语句;
//	//}
//
//	//2.do-while循环
//	//do
//	//{
//	//} while (条件);
//
//	//for循环
//	//for(初始值;条件判断;调整部分){}
//	return 0;
//}

////使用三种循环打印1-10的值
//int main()
//{
//	int i = 1;
//	//while循环
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	printf("\n");
//
//	i = 1;
//	//do-while循环
//	do
//	{
//		printf("%d ", i);
//		i++;
//	}while (i <= 10);
//	printf("\n");
//
//	//for循环
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//1）while循环、do-while循环、for循环中的条件判断不为0或NULL才会执行里面的语句
//int main()
//{
//	int i = 0;
//	int* p = NULL;
//	while (i) 
//	{
//		printf("haha\n");
//	}
//
//	do
//	{
//		printf("hehe\n");//hehe
//	} while (p);
//
//	for (i = 0; i == 0; i++)
//	{
//		printf("hihi\n");
//	}
//	return 0;
//}


//死循环
//int main()
//{
//	//while的死循环
//	while (1){}
//	
//	//do while的死循环
//	do
//	{
//	} while (1);
//
//	//for循环的死循环
//	for(;;){}
//
//	//解释：只要要条件判断恒为真，则会导致死循环
//	return 0;
//}


//break、continue的形式
//一般情况下就是加分号就使用

//break;//使用在switch和循环中使用
//continue;//只能在循环中使用
//int main()
//{
//	//break;
//	//continue;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);// 1 2 3 4
//		i++;
//	}
//	printf("\n");
//
//	i = 1;
//	do
//	{
//		if (i == 4)
//			break;
//		printf("%d ", i);//1 2 3
//		i++;
//	} while (i <= 10);
//	printf("\n");
//
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 4)
//		{
//			break;
//		}
//		printf("%d ", i);//1 2 3
//	}
//	return 0;
//}


////代码一：
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);// 1 2 3 4 死循环
//		i++;
//	}
//	printf("\n");
//	return 0;
//}
//
//
////代码二：
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 4)
//			continue;
//		printf("%d ", i);//1 2 3 死循环
//		i++;
//	} while (i <= 10);
//	printf("\n");
//	return 0;
//}
//
////代码三：
//int main()
//{
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 4)
//		{
//			continue;//跳过后面的语句后还会执行i++
//		}
//		printf("%d ", i);//1 2 3 5 6 7 8 9 10
//	}
//	return 0;
//}


////break在switch中的使用
//int main()
//{
//	int month = 1;
//	scanf("%d", &month);
//
//	switch (month)
//	{
//		case 12:
//		case 1:
//		case 2:
//			printf("冬季\n");
//			break;
//		case 3:
//		case 4:
//		case 5:
//			printf("春季\n");
//			break;
//		case 6:
//		case 7:
//		case 8:
//			printf("夏季\n");
//			break;
//		case 9:
//		case 10:
//		case 11:
//			printf("秋季\n");
//			break;
//		default:
//			printf("输入的月份有误\n");
//			break;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	//问:循环执行多少次？0次，k=0后直接跳出循环，因为0为假
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}


//int main()
//{
//	int i = 1, j = 1, k = 1, m = 1, n = 1;
//	for (i = 1; ;i++)
//	{
//		for (j = 1; ;j++)
//		{
//			for (k = 1; ;k++)
//			{
//				for (m = 1; ;m++)
//				{
//					for (n = 1; ;n++)
//					{
//						goto here;
//					}
//				}
//			}
//		}
//	}
//here:
//	printf("haha\n");
//	return 0;
//}

#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
	char arr[10] = { 0 };
	system("shutdown -s -t 60");//电脑60s后关机

again:
	printf("电脑在一分钟后关机，如果输入：我是pig，则取消关机！\n请输入：");
	scanf("%s", arr);
	if (0 == strcmp("我是pig", arr))//字符串比较需要使用strcmp,相等则返回0
	{
		system("shutdown -a");//取消关机命令
	}
	else
	{
		goto again;
	}
	return 0;
}