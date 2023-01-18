#pragma once //防止头文件重复使用

//先从C标准库中的头文件开始查找
#include <stdio.h>
#include <stdlib.h>

//预处理块
#define MAX 100
#define MIN 0

//结构声明
struct People
{
	char name[10];
	int age;
};
//加空行

//函数的声明
//void print();
//int getMax(int x, int y);
//int grade(int score);