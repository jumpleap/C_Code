#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//a+b������

/*
//��һ��
int main()
{
	int a = 0, b = 0;
	printf("������������������\n");
	scanf("%d %d", &a, &b);
	printf("a+b=%d\n", a + b);
	return 0;
}
*/

//��������t�����ݣ�ÿ��������a,b������t�����ݵ�a+b�ĺ�
/*
int main()
{
	int t = 0;
	int a = 0, b = 0;
	printf("�������ж��������ݣ�\n");
	scanf("%d", &t);

	while (t--)
	{
		printf("������a,b������������\n");
		scanf("%d %d", &a, &b);
		printf("a+b = %d\n",a + b);
	}
	return 0;
}
*/

//�������ж������ݣ�ÿ��������a, b������Щ���ݵ�a + b�ĺ�
/*
int main()
{
	int a = 0, b = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		//EOF��ֵ��-1
		printf("a+b = %d\n", a + b);
	}
}
*/


//���ģ���д��������a��b�ĺ�
int getAdd(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 0, b = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		printf("a+b = %d\n", getAdd(a, b));
	}
	return 0;
}