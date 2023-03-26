#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void* my_memmove(void* dest, void* src, int len)
{
	void* start = dest;

	if (dest < src)
	{
		//Ç°ÒÆ
		while (len--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//ºóÒÆ
		while (len--)
		{
			*((char*)dest + len) = *((char*)src + len);
		}
	}
	return start;
}