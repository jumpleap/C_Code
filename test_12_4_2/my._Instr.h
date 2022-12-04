#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void connect(char arr1[], char arr2[]);

void connect(char arr1[], char arr2[])
{
	int i = 0, j = 0;
	while (arr1[i] != '\0')
	{
		i++;
	}
	while (arr2[j] != '\0')
	{
		arr1[i] = arr2[j];
		i++;
		j++;
	}
}