#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���³���Ĺ����ǣ��Ѵ�д��ĸ��Сд��ĸ��
//int main()
//{
//	char ch[80] = "123abcdEFG*&";
//	int j;
//	puts(ch);
//	for (j = 0; ch[j] != '\0'; j++)
//		if (ch[j] >= 'A' && ch[j] <= 'Z')
//			ch[j] = ch[j] + 'e' - 'E';//�Ѵ�д��ĸ��Сд��ĸ
//	puts(ch);
//	return 0;
//}



//���ڴ���Σ�����������ȷ���ǣ�C��
//int main()
//{
//	int t = 0;
//	while (printf("*"))
//	{
//		t++;
//		if (t < 3)
//			break;
//	}
//	return 0;
//}

//A: ����ѭ�����Ʊ��ʽ��0�ȼ� B : ����ѭ�����Ʊ��ʽ��'0'�ȼ�
//C : ����ѭ�����Ʊ��ʽ�ǲ��Ϸ��� D : ����˵��������



//���³�������ʱ�������� 1abcedf2df<�س�> �������ǣ�1AbCEdf2df��
//int main()
//{
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch % 2 != 0 && (ch >= 'a' && ch <= 'z'))
//			ch = ch - 'a' + 'A';
//		putchar(ch);
//	}
//	printf("\n");
//	return 0;
//}


//������������У�������������䲻ͬ���ǣ�D��
//A : if (a) printf("%d\n", x); else printf("%d\n", y);
//B: if (a == 0) printf("%d\n", y); else printf("%d\n", x);
//C: if (a != 0) printf("%d\n", x); else printf("%d\n", y);
//D: if (a == 0) printf("%d\n", x); else printf("%d\n", y);