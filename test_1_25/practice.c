#define _CRT_SECURE_NO_WARNINGS


//���г��������ǣ�D��
#include<stdio.h>
int main()
{
	int a[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 }, *p[4], i;
	for (i = 0; i < 4; i++)
		p[i] = &a[i * 3];
	printf("%d\n", p[3][2]);//12
	return 0;
}
//A: ���������д��� 
//B : 6 
//C : 8 
//D : 12
//���ͣ�int *p[4]�ǵ�һάΪ4�Ķ�ά���飬p[i] = &a[i * 3]��Ϊÿһά��������
