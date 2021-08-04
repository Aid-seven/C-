#include<stdio.h>

//关键字-不能与变量名冲突

//auto-自动
//int main()
//{	
// auto int a=10//局部变量-自动变量 局部变量前都有auto，由于都有所以省略了
//	return 0;
//}

//break-中断-停止循环，case语句
//const-修饰常变量
//continue-继续，用于循环
//default-默认
//do-do while循环
//enum-枚举
//extern-引入外部符号
//goto-goto语句

//reister-寄存器关键字
//int main()
//{
//	register int a = 10;//建议把a定义成寄存器变量
//	//寄存器是有限的，所以是建议,编译器可以自行判断
//	return 0;
//}

//signed
//int main()
//{
//	int a = -2;//int 定义的变量是有符号的，实际上是signed int
//	unsigned int num = -1;//即使放入的是负数由于无符号也是证书
//	return 0;
//}

//sizeof-大小

//static-静态的
//void test()
//{
//	int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//			i++;
//	}
//	return 0;
//}
//结果是五个a=2
void test()
{
	static int a = 1;//定义a是一个静态的局部变量a保留了
	a++;
	printf("a=%d\n", a);
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}
//结果是a=2，a=3，a=4，a=5，a=6

//struct-结构体关键字

//typedef-类型定义/类型重定义
//int main()
//{
//	typedef unsigned int u int;//给unsigned int重新取名叫u int
//	unsigned int num = 20;
//	u int num2 = 20;//所以这两个是一个意思
//	return 0;
//}

//union-联合体/共用体
//voed-无/空
//volatile