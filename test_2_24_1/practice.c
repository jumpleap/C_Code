#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//�������������С������
//��һ��ѭ�����

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	
//	//ȡ�����е����ֵ
//	int max = num1 > num2 ? num1 : num2;
//
//	//���ߵĽ����Ϊ0����ѭ��
//	while (max % num1 != 0 || max % num2 != 0)
//	{
//		++max;
//	}
//	printf("%d��%d����С�������ǣ�%d", num1, num2, max);
//	return 0;
//}


//��������ʽ�����x / gcd(x,y) * y;
//int getGcd(int x, int y)
//{
//	int tmp = 0;
//	while (tmp = x % y)
//	{
//		x = y;
//		y = tmp;
//	}
//	return y;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	if (x < y)
//	{
//		int tmp = x;
//		x = y;
//		y = tmp;
//	}
//
//	int gcd = getGcd(x, y);
//	printf("%d��%d����С�������ǣ�%d\n", x, y, x / gcd * y);
//	return 0;
//}



//���ַ���i love beijing.��ӡ��bejing. love i
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void reverse(char* left, char* right)
{
	assert(left && right);
	while (left < right)
	{
		char ch = *left;
		*left = *right;
		*right = ch;
		left++;
		right--;
	}
}

int main()
{
	char str[101] = "0";
	gets(str);
	int len = strlen(str);

	reverse(str, str + len - 1);
	char* cur = str;
	
	while (*cur)
	{
		char* start = cur;
		while (*cur != ' ' && *cur != '\0')
		{
			cur++;
		}
		reverse(start, cur - 1);
		if (*cur == ' ')
			cur++;
	}
	printf("%s\n", str);
	return 0;
}