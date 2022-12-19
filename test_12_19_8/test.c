#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	求一个整数的所有数位之和
输入描述：
	输入一行，包含一个整数。
输出描述：
	一个整数. int范围内


int main()
{
    int num = 0;
    int sum = 0;
    scanf("%d", &num);

    while (num)//num为0退出循环
    {
        int x = num % 10;//得到每一位
        sum += x;//累加每一位的和
        num /= 10;
    }
    printf("%d\n", sum);

	return 0;
}
*/


/*
描述
    小乐乐的班主任想统计一下班级里一共有多少人需要被请家长，
    三个成绩（语文，数学，外语）平均分低于60的将被请家长，
    小乐乐想编程帮助班主任算一下有多少同学被叫家长。
输入描述：
    共n+1行
    第一行，输入一个数n，代表小乐乐的班级中有n个同学。
    在接下来的n行中每行输入三个整数代表班级中一个同学的三科成绩（语文，数学，外语），用空格分隔。
输出描述：
    一行，一个整数，代表班级中需要被请家长的人数。
*/

int main()
{
    int people = 0;
    int count = 0;
    int chinese, math, english, score;
    scanf("%d", &people);

    while (people > 0)
    {
        scanf("%d %d %d", &chinese, &math, &english);
        score = (chinese + math + english) / 3;
        if (score < 60)
        {
            count++;
        }
        people--;
    }
    printf("%d\n", count);
    return 0;
}