#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//实现猜数字游戏(1-100)

void menu()
{
	printf("*****************************************\n");
	printf("*****     1.开始游戏  0.结束游戏    *****\n");
	printf("*****************************************\n");
}

void game() 
{
	int guess = 0;
	int guessNum = rand() % 100 + 1;//rand()能返回的最大值是32767
	//printf("%d\n", guessNum);//打印要猜的数查看是否符合逻辑

	//死循环进行猜数字
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &guess);
		if (guess < guessNum)
		{
			printf("猜小了\n");
		}
		else if (guess > guessNum)
		{
			printf("猜大了\n");
		}
		else
		{
			//猜对了，退出循环
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{
	int option = 0;
	//随机数的生成器
	srand((unsigned int)time(NULL));
	do
	{
		menu();//菜单
		printf("请选择：>");
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}

	} while (option != 0);
	return 0;
}