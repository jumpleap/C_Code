#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�������Ľ���ǣ��� ��
//#include <stdio.h>
//union Un
//{
//	short s[7];
//	int n;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));//16 --> �ڴ����
//	return 0;
//}



//��X86�£�С���ֽ���洢�������г���

//#include<stdio.h>
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;//00111001
//    s->i[1] = 0x38;//00111000
//    //0011100100111000
//    printf("%x\n", a.k);//3839
//    return 0;
//}


#include <stdio.h>
#include <string.h>
#include <assert.h>

void* my_memcpy(void* dest, const void* src, size_t len)
{
	void* ret = dest;//ָ��dest��ʼ��ַ
	assert(dest && src);

	while (len--)
	{
		//�����ڴ渴��
		/**(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;*/
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;

	}
	return ret;
}

int main()
{
	int dest[10] = { 0 };
	int src[5] = { 1,2,3,4,5 };

	void* ret = my_memcpy(dest, src, 16);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *((int*)ret + i));
	}
	return 0;
}
