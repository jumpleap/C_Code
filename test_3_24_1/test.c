#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//struct Node
//{
//	int data;
//	struct Node next;
//};//����������ط��ǷǷ��ģ��������ȥ
//
//int main()
//{
//	printf("%d\n", sizeof(struct Node));
//	return 0;
//}

//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct Node));
//	return 0;
//}


//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8
//	return 0;
//}


//enum Sex
//{
//	MALE,
//	FEMALE
//};
//
//int main()
//{
//	enum Sex sex = MALE;
//	sex = 10;
//	printf("%d\n", sex);
//	return 0;
//}


//union Un
//{
//	int i;
//	char c;
//};
//union Un un;
//
//int main()
//{
//	// ��������Ľ����һ������
//	printf("%p\n", &(un.i));
//	printf("%p\n", &(un.c));
//	//��������Ľ����ʲô��
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//	return 0;
//}


//union Un1
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
//
//int main()
//{
//	//��������Ľ����ʲô��
//	printf("%d\n", sizeof(union Un1));//8
//	printf("%d\n", sizeof(union Un2));//16
//	return 0;
//}



//����ѧ������
//struct stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	double weight;
//}s4, s5, s6;//ȫ�ֱ���
//
//int main()
//{
//	struct stu s1, s2, s3;//�ֲ�����
//	return 0;
//}


//�����ṹ������ ���� û�����ֵĽṹ������
//struct
//{
//	char c;
//	int i;
//}s;


//struct
//{
//	int i;
//	char c;
//}s;
//
//struct
//{
//	int i;
//	char c;
//}*ps;
//
////�������ᱨ������������ͬ�����͡��ᷢ�����棬��������д
//int main()
//{
//	ps = &s;
//	return 0;
//}



//typedef struct student
//{
//	int age;
//	char name[20];
//	stu* next;//�����Ƿ����У�//�����У���Ϊtypedef�Ķ�������stu�ĺ��棬
//	//����������ʶ��stu
//}stu;

//typedef struct student
//{
//	int age;
//	char name[20];
//	struct student* next;//��ȷ��ʽ
//}stu;



//�ṹ��ĳ�ʼ��
//struct stu
//{
//	int age;
//	char sex;
//}s1;
//
//int main()
//{
//	//��ʼ����ʽ1������˳���ʼ��
//	struct stu s2 = { .age = 10,.sex = 'm' };
//	printf("%d %c", s2.age, s2.sex);
//
//	//��ʼ����ʽ2��˳���ʼ��
//	struct stu s3 = { 18,'c' };
//
//	return 0;
//}


//struct s
//{
//	int i;
//	char c;
//	int* ptr;
//};
//
//int main()
//{
//	//�ṹ����ָ��ĳ�ʼ���ķ�ʽ
//	struct s s1 = { 18,'n',NULL };
//	int age = 19;
//	struct s s1 = { 18,'n',&age };
//	return 0;
//}



//����Ľṹ���ռ���˶��ٵ��ֽڿռ�
//struct S1
//{
//	int a;
//	char c;
//};
//
//struct S2
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S3
//{
//	char c1;
//	int a;
//	char c2;
//	char c3;
//}; 
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//8
//	printf("%d\n", sizeof(struct S2));//12
//	printf("%d\n", sizeof(struct S3));//12
//	return 0;
//}


//��β鿴�ṹ��ĳ����Ա�����ĵ�ַƫ�ƴ�
//offsetof�鿴
//#include <stddef.h>
//
//struct stu
//{
//	char sex;
//	int age;
//	int birth;
//	double weight;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct stu,sex));//0
//	printf("%d\n", offsetof(struct stu,age));//4
//	printf("%d\n", offsetof(struct stu,birth));//8
//	printf("%d\n", offsetof(struct stu,weight));//16
//	return 0;
//}



//˼�����½ṹ����ռ�����ڴ�ռ�
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S2));//8
//	printf("%d\n", sizeof(struct S4));//32
//
//	return 0;
//}



//vs�е�Ĭ�϶�������8
//����Լ�����Ĭ�϶�����

//#pragma pack(1)//����Ĭ�϶�������1
//struct stu
//{
//	char c;
//	int age;
//	char name;
//};
//#pragma pack() //�ָ�Ĭ�϶����� -- 8
//
//int main()
//{
//	printf("%d\n", sizeof(struct stu));//6
//	return 0;
//}




//�ṹ�崫�ε�����
//��ֵ�û��Ǵ���ַ�ã�

//struct stu
//{
//	int age;
//	char sex;
//};
//
//void print(struct stu s1)
//{
//	printf("%d %c\n", s1.age, s1.sex);
//}
//
//void print1(struct stu* s1)
//{
//	printf("%d %c\n", s1->age, s1->sex);
//}
//
//int main()
//{
//	struct stu s1 = { 18,'m' };
//	print(s1);//��ֵ
//	print1(&s1);//��ַ
//	return 0;
//}


//��ֵ��ʱ������ѹջ���ή�ͳ����ʱ��Ϳռ俪������������Ӧ�ý��д���ַ


//λ�� - ������λ
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};//47 bit -- ���в���48������λ -- ��8���ֽ�
//
//
//int main()
//{
//	struct A sa = {0};
//	printf("%d\n", sizeof(sa));//8
//
//	return 0;
//}



//һ��Сcase�����˽�λ��
//struct s
//{
//	char a : 3;//011
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};

//3 + 4 + 5 + 4 = 16 --> ����ֻռ�����ֽڣ�Ϊʲô��ӡ�������ֽ�
//3,4 ռһ���ֽڣ�5��ռһ���ֽڣ�4��ռһ���ֽ�

//int main()
//{
//	printf("%d\n", sizeof(struct s));//3
//	struct s s1 = { 0 };
//	s1.a = 10;//1010 --> 3������λ --> 010
//	s1.b = 12;//1100 --> 4������λ --> 1100
//	s1.c = 3;//011   --> 5������λ --> 00011
//	s1.d = 4;//100   --> 4������λ --> 0100
//	//��Vs�е���ʽ��0110 0010 0000 0011 0000 0100
//	//ʮ��������ʽ�� 6    2    0   3    0    4
//	//���Բ鿴
//	return 0;
//}



enum Sex
{
	//ö�ٵĿ���ȡֵ,Ĭ���Ǵ�0��ʼ������1��
	//ö�ٳ���
	MALE,
	FEMALE  = 5,
	SECRET//������ŵ���
};

int main()
{
	enum Sex s = FEMALE;
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//5
	printf("%d\n", SECRET);//6

	return 0;
}