#define _CRT_SECURE_NO_WARNINGS


//下列程序的输出是（D）
#include<stdio.h>
int main()
{
	int a[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 }, *p[4], i;
	for (i = 0; i < 4; i++)
		p[i] = &a[i * 3];
	printf("%d\n", p[3][2]);//12
	return 0;
}
//A: 上述程序有错误 
//B : 6 
//C : 8 
//D : 12
//解释：int *p[4]是第一维为4的二维数组，p[i] = &a[i * 3]是为每一维划分区域
