#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��VS2013�£�Ĭ�϶�����Ϊ8�ֽڣ�����ṹ����ռ�Ŀռ��С�ǣ� ���ֽ�

//typedef struct {
//	int a;
//	char b;
//	short c;
//	short d;
//}AA_t;
//
//int main()
//{
//	printf("%d\n", sizeof(AA_t));//12
//	return 0;
//}


//#pragma pack(4)/*����ѡ���ʾ4�ֽڶ��� ƽ̨��VS2013�����ԣ�C����*/
////����long ��4���ֽ�
//int main(int argc, char* argv[])
//{
//    struct tagTest1//12
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2//12
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3//16
//    {
//        short c;
//        long b;
//        char d;
//        long a;
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));//12 12 16
//    return 0;
//}
//#pragma pack()



//#define MAX_SIZE 5
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
////��A = 2�� B = 3ʱ��pointer���䣨 �����ֽڵĿռ䡣
//
////�ṹ����ռ����3���ֽڵĿռ䣬3 * 5 = 15


//�������Ľ���ǣ��� ��

//enum ENUM_A
//{
//	X1,
//	Y1,
//	Z1 = 255,
//	A1,
//	B1,
//};
//enum ENUM_A enumA = Y1;
//enum ENUM_A enumB = B1;
//
//int main()
//{
//	printf("%d %d\n", enumA, enumB);//1 257
//	return 0;
//}


//��32λϵͳ����������ѡ��Ϊ4�ֽڶ��룬��ôsizeof(A)��sizeof(B)�ǣ� ��
//#pragma pack(4)
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};
//
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	printf("%d\n", sizeof(struct B));
//	return 0;
//}
//



//�������Ľ���ǣ� ��

int main()
{
    unsigned char puc[4];
    struct tagPIM
    {
        unsigned char ucPim1;
        unsigned char ucData0 : 1;
        unsigned char ucData1 : 2;
        unsigned char ucData2 : 3;
    }*pstPimData;
    pstPimData = (struct tagPIM*)puc;
    memset(puc, 0, 4);
    pstPimData->ucPim1 = 2;//02
    pstPimData->ucData0 = 3;
    pstPimData->ucData1 = 4;
    pstPimData->ucData2 = 5;
    //00101001 --> 02 29 00 00
    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
    return 0;
}