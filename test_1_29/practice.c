#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//�������±���������ʽ: ch/i + (f*d �C i) �Ľ������Ϊ��D��
//char ch;
//int i;
//float f;
//double d;
//A: char B: int C: float D: double

//������֤
//int main()
//{
//	char ch = 'a';
//	int i=1;
//	float f = 9.99;
//	double d = 3.0;
//	printf("%lf\n", ch / i + (f * d - i));//�����Զ�����ת��
//	return 0;
//}



//���ڴ����˵����ȷ���ǣ�A��
//int main()
//{
//	int x = -1;
//	unsigned int y = 2;
//	//������ʽ����д������������޷�����,�����������Զ�ת�����޷�����
//	if (x > y)
//	{
//		//printf("%u\n", x);
//		printf("x is greater");
//	}
//	else
//	{
//		printf("y is greater");
//	}
//	return 0;
//}

//A: x is greater B: y is greater C: ����ʵ�� D: ���



//��֪�����¸�����������˵���������²�����C�����﷨�ı��ʽ�ǣ�A��
int k, a, b;
unsigned int w = 5;
double x = 1.42;

//A: x % 3 //%ֻ����������
//B : w += -20 
//C : k = (a = 200, b = 300) 
//D : a += a -= a = 9

//������֤
//int main()
//{
//	int k, a, b;
//	unsigned int w = 5;
//	double x = 1.42;
//	//x % 3;
//	w += -20;
//	k = (a = 200, b = 300);
//	a += a -= a = 9;
//	return 0;
//}



//���溯�����������ǣ�D��
//void func()
//{
//	int k = 1 ^ (1 << 31 >> 31);
//	printf("%d\n", k);
//}
//00000000 00000000 00000000 00000001
//10000000 00000000 00000000 00000000 -->1 << 31
//11111111 11111111 11111111 11111111  --> >> 31
//00000000 00000000 00000000 00000001
//11111111 11111111 11111111 11111110 -->����Ľ��(���룩
//10000000 00000000 00000000 00000010 --> -2


//A: 0 B: -1 C: -2 D: 1

//������֤
//int main()
//{
//	func();
//}


//���´�����������ǣ�A��
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	//sizeof�ڲ������м���
//	sizeof(i++);
//	printf("%d\n", i);//1
//	return 0;
//}

//A: 1 B: 4 C: 2 D: 8



//����һ������������ nums �� ��������������� 1 �ĸ�����
//1 <= nums.length <= 105
//nums[i] ���� 0 ���� 1.

//void input(int* arr, int len)
//{
//    for (int i = 0; i < len; i++)
//        scanf("%d", &arr[i]);
//}
//
//int findMaxConsecutiveOnes(int* nums, int numsSize)
//{
//    int max = 0;
//    int min = 0;//�ۼ�������1����0����
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == 1)
//        {
//            min++;
//            //�õ��������1
//            if (min > max)
//                max = min;
//        }
//        //����
//        if (nums[i] == 0)
//            min = 0;
//    }
//    return max;
//}
//
//
//int main()
//{
//    int arr[105] = { 0 };
//    int len = 0;
//    
//    while (scanf("%d", &len) != EOF)
//    {
//        input(arr, len);
//        int constantVal = findMaxConsecutiveOnes(arr, len);
//        printf("%d\n", constantVal);
//    }
//    return 0;
//}




/*
����
	��ȫ����Perfect number�����ֳ����������걸������һЩ�������Ȼ����
	�����е������ӣ����������������Լ�����ĺͣ������Ӻ�������ǡ�õ���������
	���磺28������Լ��1��2��4��7��14��28����ȥ������28�⣬
	����5������ӣ�1+2+4+7+14=28��
	����n�������n����(��n)��ȫ���ĸ�����
���ݷ�Χ��
	1��n��5��10^5
����������
	����һ������n
���������
	���������n����ȫ���ĸ���
*/

#include <stdio.h>

int isPerfectNum(int x)
{
    int sum = 0;//�ۺ�
    for (int i = 1; i <= x / 2; i++)
    {
        //�ж�i�ǲ���x��Լ��
        if (x % i == 0)
            sum += i;
    }
    return sum;
}

int main()
{
    int n = 0;
    int count = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        //Լ���ĸ���
        if (isPerfectNum(i) == i)
            count++;
    }
    printf("%d\n", count);
    return 0;
}