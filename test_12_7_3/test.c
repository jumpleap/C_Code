#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ʵ����ĸ�Ĵ�Сдת�����������������
/*
//��һ��������
int main()
{
	char ch = '0';
	while (scanf("%c", &ch) != EOF)
	{
		getchar();//���Ļ��з�
		if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch + 'a' - 'A';
		}
		printf("ת�����Сд����Ϊ��%c\n", ch);
	}
	return 0;
}
*/

//�������⺯��tolower();
int main()
{
	char ch = '0';
	while (scanf("%c", &ch) != EOF)
	{
		getchar();//���Ļ��з�
		printf("ת�����Сд��ĸΪ��%c\n", tolower(ch));
	}
	return 0;
}