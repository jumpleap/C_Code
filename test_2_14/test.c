#define _CRT_SECURE_NO_WARNINGS

//���г���ε�������Ϊ��C��
//unsigned long pulArray[] = { 6,7,8,9,10 };
//unsigned long* pulPtr;
//pulPtr = pulArray;
//*(pulPtr + 3) += 3;
//printf(��% d, % d\n��, *pulPtr, *(pulPtr + 3));

//A.9, 12
//B.6, 9
//C.6, 12
//D.6, 10

//������֤
//#include <stdio.h>
//
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf(" % d, % d\n", *pulPtr, *(pulPtr + 3));//6 12
//	return 0;
//}



//�������´��룺

//struct student
//{
//	int num;
//	char name[32];
//	float score;
//}stu;

//���������������ȷ���ǣ�(D)

//A.struct �ǽṹ�����͵Ĺؼ���
//B.struct student ���û�����Ľṹ������
//C.num, score ���ǽṹ���Ա��
//D.stu ���û�����Ľṹ��������



//�ṹ����ʳ�Ա�Ĳ���������������D��
//
//A..������
//B.->������
//C.*�����ò�����
//D.sizeof



//���ڶ���ָ������������ȷ���ǣ���B��
//
//A.����ָ��Ҳ��ָ�룬ֻ������һ��ָ�����
// ����
//B.����ָ��Ҳ��ָ�룬����������һ��ָ��ĵ�ַ
//C.����ָ���������������ĵ�ַ
// һά����ʹ��һ��ָ��
//D.����ָ��Ĵ�С��4���ֽ�
//64λƽ̨����8���ֽ�

//������֤
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(int**));//4
//	printf("%d\n", sizeof(double**));//4
//	return 0;
//}



//�������ָ������˵����ȷ���ǣ���C��
//
//A.����ָ�� + 1�����ƫ��һ���ֽ�
// 4���ֽ�
//B.ָ�� - ָ��õ���ָ���ָ��֮����ֽڸ���
// �õ�����ֵ�����
//C.����ָ������ò�������4���ֽ�
//D.ָ�벻�ܱȽϴ�С
//ָ���д洢��ֵ�ܱȽϴ�С

//������֤
//#include <stdio.h>
//
//int main()
//{
//	//����ָ����32λƽ̨�µļ�1����4���ֽڵĿռ�
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	//ָ��-ָ����������ָ��֮��ľ���
//	int* p1 = &arr[1];
//	printf("%d\n", p1 - p);
//	return 0;
//}



//�����ĸ���ָ�����飺��A��
//
//A. int* arr[10];
//B.int* arr[];
// Ҳ��ָ�����飬����û������
//C.int** arr;
// ����ָ��
//D.int(*arr)[10];
//����ָ��



//�������Ҫ������ṹ���г�Աa������,���²���������ߴ���������(B)
//#include < stdio.h >
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", __________);
//	return 0;
//}

//A.a.a
//B.*p.a
//C.p->a
//D.(*p).a



//����Debug��Release������˵��������ǣ���D��
//
//A.Debug����Ϊ���԰汾�����������bug�İ汾
//B.Release����Ϊ�����汾��������Ա���Եľ���Release�汾
//C.Debug�汾����������Ϣ�������Ż���
//D.Release�汾Ҳ���Ե��ԣ�ֻ���������Ż��������С�������ٶ���Ч������
//����Release��ʽһ�¾͹����޷���������ʵ�ֹ���



//���������������ǣ���C��
//#include <stdio.h>
//
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},
//							 {9802,"wang",19},
//					{9803,"zhao",18} };
//	fun(students + 1);
//	return 0;
//}
//
//A.zhang
//B.zhao
//C.wang
//D.18



//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//20 10 5 2 1 1 = 39ƿˮ

#include <stdio.h>

int getSum(int num)
{
	int ret = num * 2 - 1;
	return ret;
}

int main()
{
	int num = 0;
	scanf("%d", &num);

	int sum = getSum(num);
	printf("%d\n", sum);
	return 0;
}