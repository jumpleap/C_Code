#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），
	去掉一个最高分和一个最低分，输出每组的平均成绩。（注：本题有多组输入）
输入描述：
	每一行，输入7个整数（0~100），代表7个成绩，用空格分隔。
输出描述：
	每一行，输出去掉最高分和最低分的平均成绩，小数点后保留2位，每行输出后换行。
*/

int main()
{
    int num = 0, count = 0;
    double sum = 0;//计算累加和
    int max = -1, min = 101;//最大值设置最小数，最小值设置最大数
    while (scanf("%d", &num) != EOF)
    {
        if (max < num)
        {
            max = num;//最大值
        }
        if (min > num)
        {
            min = num;//最小值
        }
        sum += num;//累加
        count++;//累计次数

        //判断是否有7次
        if (count == 7)
        {
            printf("%.2lf\n", (sum - min - max) / 5.0);
            //有七次之后进行重置
            count = sum = 0;
            max = -1;
            min = 101;
        }
    }
	return 0;
}