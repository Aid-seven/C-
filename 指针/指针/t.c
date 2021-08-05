#include<stdio.h>

//int main()
//{
//	int a = 10;//向内存申请4个字节
//	int * p = &a;//取地址
//	//指针变量 用来存放地址的一种变量,用int *表示
//	printf("%p\n", &a);//取出a的地址,%p用于取地址
//	printf("%p\n", p);
//	*p;//* 解引用操作符 对p进行解引用找到它所指的对象a
//	*p = 20;//通过*p找到的值即a，把这个值改为20
//	printf("a=%d\n", a);
//	return 0;
//}
//结果是十六进制

//int main()
//{
//	char ch = 'w';
//	char * pc = &ch;
//	*pc = 'a';
//	printf("%c\n",ch);
//	return 0;
//}

//计算指针变量的大小
int main()
{
	char ch = 'a';
	char *p = &ch;
	printf("%d\n", sizeof(p));
	return 0;
}