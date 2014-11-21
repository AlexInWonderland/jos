#include "memory.h"

void *memcpy(void* dest, void* src, int size)
{
	unsigned char* tmp = (unsigned char*)dest;
	unsigned char* tmp1 = (unsigned char*)src;
	for(int i=0; i < size; i++)
	{
		tmp[i]=tmp1[i];
	} 
	return dest;
}

void* memset(void* dest, int value, int size)
{
	unsigned char* a = (unsigned char*) dest;
	for(int i=0; i < size; i++)
	{
		a[i]=value;
	}
	return dest;
}
int memcmp(void* mem1, void* mem2, int size)
{
	unsigned char* tmp = (unsigned char*)mem1;
	unsigned char* tmp1 = (unsigned char*)mem2;
	for(int i=0; i < size ; i++)
	{
		if(tmp[i] > tmp1[i] || tmp[i] < tmp1[i])
		{
		   return (tmp[i] - tmp1[i]);
		}
	}
	return 0;
}

int strlen(const char* str)
{
	int count=0;
	while(*str != '\0')
	{
	   str++;
	   count++;
	}
	return count;
}
