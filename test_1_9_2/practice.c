#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//编写代码，演示多个字符从两端移动，向中间汇聚

//void move(char arr1[], char arr2[], int len)
//{
//	int left = 0;
//	int right = len - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		right--;
//		left++;
//		Sleep(1000);//停顿一秒后再执行，单位是毫秒，需头文件windows.h
//		system("cls");//清屏
//		printf("%s\n", arr2);
//	}
//}
//
//int main()
//{
//	char arr1[] = "Welcome to my world,my dear!";
//	char arr2[] = "############################";
//	int len = strlen(arr1);
//	
//	move(arr1, arr2, len);
//	return 0;
//}



//编写代码模拟用户登录情况，只能登录三次
int main()
{
	char password[20] = "123456";
	
	for (int i = 1; i <= 3; i++)
	{
		printf("请输入密码：>");
		scanf("%s", password);

		if (!strcmp(password, "123456"))
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("登录失败，你还有%d次机会\n", 3 - i);
		}
	}
}