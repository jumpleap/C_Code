#define _CRT_SECURE_NO_WARNINGS

//����VS���Կ�ݼ�˵��������ǣ���A��
//
//A.F5 - �ǿ�ʼִ�У�������
// F5�ǿ�ʼ���ԣ�CTRL + F5�ǿ�ʼִ��
//B.F10 - ������̵��ԣ��������������뺯��
//C.F11 - ���������ԣ����Թ۲���Ե�ÿ��ϸ��
//D.F9�����öϵ��ȡ���ϵ�



//��������һ����ʽ������һ��ָ��char���ͱ�����ָ��p��p��ֵ�����޸ģ�
//��pָ��ı���ֵ���޸ģ�(A)

//A.const char* p
//B.char const* p
//C.char* const p
//D.const char* const p

//������֤
//#include <stdio.h>
//
//int main()
//{
//	const int a = 5;
//	int b = 10;
//	const int* p1 = &a;
//	//*p1 = 10;
//	p1 = &b;
//	return 0;
//}



//���¹���ָ���˵��, ��ȷ����(A)
//
//A.int* const p��int const* p�ȼ�
//B.const int* p��int* const p�ȼ�
// ���󣬲��ȼۣ���һ��p���Ըı�ָ��ı������ڶ������ܣ����ǵڶ����ܸı�ֵ
//C.const int* p��int const* p�ȼ�
//D.int* p[10]��int(*p)[10]�ȼ�
//ָ������        ����ָ��



//������ѭ������
//VS����������������Ĵ��룬��ͼ����������������


//����������ѭ����ԭ��i�ĵ�ַ��arr[12]�ĵ�ַ��ͬ
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}




