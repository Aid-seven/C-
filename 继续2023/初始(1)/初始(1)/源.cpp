#include<stdio.h>

//int main()
//{
//	//年龄20
//	short age = 20;//向内存申请两个字节(16bit位)用来存放20
//	float weight = 95.6f;//向内存申请四个字节存放小数
//	//95.6加f是因为系统默认出现小数时为双精度浮点数，
//	//而float是单精度浮点数这样可以前后对应
//
//	return 0;
//}

int main()
{
	//这里注意老师教的是%d，%d是一种常用用法
	//但是编译器建议我改成%zd，其实%zd是比较少用的
	//%zd是强制转化为整形的格式输出符，对应的是size-t类型的(c99)中规定
	printf("%zd\n", sizeof(char));//1
	printf("%zd\n", sizeof(short));//2
	printf("%zd\n", sizeof(int));//4
	printf("%zd\n", sizeof(long));//4
	//也有可能是8，因为C语言只规long的大小只要>=int的大小
	printf("%zd\n", sizeof(long long));//8
	printf("%zd\n", sizeof(float));//4
	printf("%zd\n", sizeof(double));//8
	return 0;
}