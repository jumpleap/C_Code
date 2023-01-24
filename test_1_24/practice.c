#define _CRT_SECURE_NO_WARNINGS

//如下程序的运行结果是（ D）
//char c[5] = { 'a', 'b', '\0', 'c', '\0' };
//printf("%s", c);
//A: 'a' 'b' 
//B : ab\0c\0 
//C: ab c 
//D : ab

//代码验证
//int main()
//{
//	char c[5] = { 'a', 'b', '\0', 'c', '\0' };
//	printf("%s", c);//ab
//	return 0;
//}



//若有定义： int a[2][3]; ，以下选项中对 a 数组元素正确引用的是（ D）
//A: a[2][0] 
//B : a[2][3] 
//C : a[0][3] 
//D : a[1 > 2][1]

//代码验证
//int main()
//{
//	int a[2][3];
//	//a[2][0];	//第一维的范围应该是0-1
//	//a[2][3];	//第一维的范围：0-1，第二维的范围：0-2
//	//a[0][3];	//第二维的范围：0-2
//	//a[1 > 2][1] = 2;//1 > 2为假：0
//	return 0;
//}



//在下面的字符数组定义中，哪一个有语法错误（D）
//A: char a[20] = "abcdefg"; 
//B: char a[] = "x+y=5."; 
//C: char a[15]; 
//D: char a[10] = '5';

//代码验证
//int main()
//{
//	//char a[20] = "abcdefg";//正确
//	//char a[] = "x+y=5.";//正确
//	//char a[15];//正确
//	char a[10] = '5';//错误，字符数组的表示用{}和""
//	return 0;
//}



//下列定义数组的语句中正确的是【多选】（AC）
//A:
//#define size 10
//char str1[size], str2[size + 2];
//B: char str[]; 
//C: int num['10']; 
//D: int n = 5; int a[n][n + 2];

//代码验证
//int main()
//{
//#define size 10
//	char str1[size], str2[size + 2];
//
//	//char str[]; //错误
//	
//	int num['10'];
//
//	int n = 5;
//	//int arr[n][n + 2]; //错误
//	return 0;
//}



//已知 i，j 都是整型变量，
//下列表达式中，与下标引用 X[i][j] 不等效的是【多选】（AD）
//A: *(X[i] + j) 
//B : *(X + i)[j] 
//C : *(X + i + j) 
//D : *(*(X + i) + j)

//代码验证
//int main()
//{
//	int x[2][3] = { 1,2,3,4,5,6 };
//	printf("%d\n", x[1][2]);//6
//	
//	printf("%d\n", *(x[1] + 2));
//	printf("%d\n", *(x + 1)[2]);//x+1跳过了x数组
//	printf("%d\n", *(x + 1 + 2));
//	printf("%d\n", *(*(x + 1) + 2));//x+1跳过了x数组
//	return 0;
//}


/*
描述
	编写一个函数，计算字符串中含有的不同字符的个数。
	字符在 ASCII 码范围内(0~127 ，包括 0 和 127)，
	换行表示结束符，不算在字符里。不在范围内的不作统计。
	多个相同的字符只计算一次
	例如，对于字符串 abaca 而言，有 a、b、c 三种不同的字符，因此输出 3 。
	数据范围：1≤n≤500
输入描述：
	输入一行没有空格的字符串。
输出描述：
	输出的输入字符串的范围在(0~127，包括0和127)字符的种数。
*/

//#include <stdio.h>
//#include <string.h>
//
//int GetCharSum(char* arr, int len)
//{
//    int table[128] = { 0 };
//    int count = 0;
//
//    memset(table, 0, sizeof(table));//初始化
//    for (int i = 0; i < len; i++)
//        table[arr[i]] = 1;//标记值
//
//    for (int i = 0; i < len; i++)
//    {
//        if (table[arr[i]] == 1)
//        {
//            count++;
//            table[arr[i]] = 0;
//        }
//    }
//    return count;
//}
//
//int main()
//{
//    char arr[501] = "";
//    scanf("%s", arr);
//    int len = strlen(arr);
//
//    int count = GetCharSum(arr, len);
//    printf("%d\n", count);
//    return 0;
//}

/*
	给定一个大小为 n 的数组 nums ，返回其中的多数元素。
	多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。
	你可以假设数组是非空的，并且给定的数组总是存在多数元素。
*/

/*
思路
    1）多数元素比其他元素的总数还多
    2）cur：当前值，count：当前值的数量
    3）cur和数组下一值进行比较，如果相等，则count++，反之，count--，
    count=0后我们更新cur的值
*/

int majorityElement(int* nums, int numsSize)
{
    int cur = 0;;//记录当前数
    int count = 0;//当前值的数量

    for (int i = 0; i < numsSize; i++)
    {
        //判断当前的计数器
        if (count == 0)
        {
            cur = nums[i];//更新当前数
            count++;
        }
        else
        {
            //当前数和数组的值比较
            if (cur == nums[i])
                count++;
            else
                count--;
        }
    }
    return cur;
}