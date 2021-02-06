#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//	{
//		printf("%c\n",'\'');
//		return 0;
//	}

//int main()
//{
//	printf("%s\n", "\"");
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\132');
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\x61');
//	return 0;
//}

//int main()
//{
//	/*
//	int a = 10;
//	*/
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("认真学习\n");
//	printf("要坚持吗?(1/0)>:");
//	scanf("%d", &input);//1/0
//	if (input == 1)
//		printf("可以变强\n");
//	else
//		printf("会变捞\n");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("好好学习\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码,%d\n", line);
//		line++;
//	}
//	if(line>=20000)
//	printf("找工作\n");
//	return 0;
//}

int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int sum = 0;
	int a = 100;
	int b = 200;
	int num1 = 50;
	int num2 = 80;
	sum = Add(num1, num2);
	sum=Add(a,b);
	sum = Add(2, 4);
	printf("sum=%d\n", sum);
	return 0;
}