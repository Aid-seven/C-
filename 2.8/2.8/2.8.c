#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>

int Better(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 2;
	int b = 5;
	int max = 0;
	max=Better(a, b);
	printf("max=%d\n", max);
	return 0;
}