#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。

输入描述：
两行，第一行为n，表示n个成绩，不会大于10000。
第二行为n个成绩（整数表示，范围0~100），以空格隔开。
*/

/*
//法一:使用数组
#define SCOPE 10000
int main()
{
    int score[SCOPE] = { 0 };
    int n = 0;
    int high, low;
    int i = 0;

    printf("请输入你要录入成绩的人数:\n");
    scanf("%d", &n);
    printf("请输入%d个学生的成绩：\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }

    high = low = score[0];
    for (i = 0; i < n; i++)
    {
        //找最高分和最低分
        if (high < score[i])
            high = score[i];//高分
        if (low > score[i])
            low = score[i];//低分
    }
    printf("%d\n", high - low);
	return 0;
}
*/

//法二
int main()
{
    int n = 0;//人数
    int max = 0, min = 100;
    int num = 0;
    int i;
    printf("请输入你要录入成绩的人数:\n");
    scanf("%d", &n);
    printf("请输入%d个学生的成绩：\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (max < num)
            max = num;
        if (min > num)
            min = num;
    }
    printf("%d\n", max - min);
    return 0;
}