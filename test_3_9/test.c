#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);//+1������һ���ֽ�
//	printf("%x %x\n", ptr1[-1], *ptr2);//4 2000000
//	//ptr1[-1]��ʾ*(ptr1 -1 )
//	return 0;
//}



//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//{1,3,5};
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//pָ��a[0]��a[0][0] =1
//	return 0;
//}



//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//��%p��ӡ�Ǵ�ӡ��ַ�����룩����ַ����ַ�õ���������֮��Ĳ�
//	return 0;
//}



//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 5
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;//*pa��ʾpaָ��a��a��������ʾ������Ԫ�ص�ַ��a�Ƕ�ά���飬��Ԫ�ص�ַ��a[0]
//	pa++;//a[0] + 1 --> a[1]
//	printf("%s\n", *pa);//at
//	return 0;
//}



//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//
//	for (int i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		for (int j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (int j = 0; j <= 2*i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//�°벿��
//	for (int i = 0; i < line - 1; i++)
//	{
//		//��ӡ�ո�
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (int j = 0; j < (line - 1 - i) * 2 - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//�ж��ַ��������е�ֵ������ֵͬ����false������ͬ����true
//bool isUnique(char* astr) {
//    //�ⷨһ���������
//    for (int i = 0; i < strlen(astr); i++)
//    {
//        for (int j = i + 1; j < strlen(astr); j++)
//        {
//            if (astr[i] == astr[j])
//                return false;
//        }
//    }
//    return true;
//
//    //�ⷨ�� ����ϣ�� 
//    char hash[128] = { 0 };
//    memset(hash, 0, sizeof(hash));
//
//    for (int i = 0; i < strlen(astr); i++)
//        hash[astr[i]]++;
//
//    for (int i = 0; i < 128; i++)
//    {
//        if (hash[i] > 1)
//            return false;
//    }
//    return true;
//
//    //�ⷨ��������
//    if (astr == NULL)
//        return false;
//    if (strlen(astr) == 0)
//        return true;
//
//    int flag = 1;
//    for (int i = 0; i < strlen(astr) - 1; i++)
//    {
//        for (int j = 0; j < strlen(astr) - i - 1; j++)
//        {
//            if (astr[j] > astr[j + 1])
//            {
//                flag = 0;
//                char tmp = astr[j];
//                astr[j] = astr[j + 1];
//                astr[j + 1] = tmp;
//            }
//        }
//        if (flag == 1)
//            break;
//    }
//
//    for (int i = 0; i < strlen(astr) - 1; i++)
//    {
//        if (astr[i] == astr[i + 1])
//            return false;
//    }
//    return true;
//}