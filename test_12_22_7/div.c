#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
��Ŀ��
	����һ��t��Ȼ�����t�����ݣ�����ÿ�����ݣ�
	����a��b�������������a�ܱ�b���������YES���������NO
*/

int main()
{
	int t = 0;
	int a = 0, b = 0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &a, &b);

		/*if (b == 0 || a % b)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}*/

		//b����Ϊ0
		if (b != 0)
			printf("%s", a % b ? "NO" : "YES");
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}