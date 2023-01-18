#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//如下程序的功能是（把大写字母变小写字母）
//int main()
//{
//	char ch[80] = "123abcdEFG*&";
//	int j;
//	puts(ch);
//	for (j = 0; ch[j] != '\0'; j++)
//		if (ch[j] >= 'A' && ch[j] <= 'Z')
//			ch[j] = ch[j] + 'e' - 'E';//把大写字母变小写字母
//	puts(ch);
//	return 0;
//}



//对于代码段，下面描述正确的是（C）
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

//A: 其中循环控制表达式与0等价 B : 其中循环控制表达式与'0'等价
//C : 其中循环控制表达式是不合法的 D : 以上说法都不对



//以下程序运行时，若输入 1abcedf2df<回车> 输出结果是（1AbCEdf2df）
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


//下列条件语句中，功能与其他语句不同的是（D）
//A : if (a) printf("%d\n", x); else printf("%d\n", y);
//B: if (a == 0) printf("%d\n", y); else printf("%d\n", x);
//C: if (a != 0) printf("%d\n", x); else printf("%d\n", y);
//D: if (a == 0) printf("%d\n", x); else printf("%d\n", y);