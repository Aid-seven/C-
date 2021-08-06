#define _CRT_SEVURE_NO_WARNINGS 1
#include<stdio.h>

//创建一个结构体类型
struct Book
{
	char name[20];//C语言程序设计
	short price;//55元
};//用一个大括号来描述书的特征  ;不可缺少代表结束

  //利用结构体类型-创建一个该类型的结构体变量
//int main()
//{
//	struct Book b1 = { "C语言程序设计",55 };
//	printf("书名;%s\n", b1.name);
//	printf("价格;%d元\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格：%d元\n", b1.price);
//	return 0;
//}

//int main()
//{	
//	struct Book b1 = { "C语言程序设计",55 };
//	struct Book* pb = &b1;
//	//利用pb打印出书名和价格
//	printf("书名:%s\n", (*pb).name);
//	printf("价格:%d元\n", (*pb).price);
//	//简化方式
//	printf("书名:%s\n", pb->name);//pb指向的对象内容
//	printf("价格:%d元\n", pb->price);
//	return 0;
//}

//操作符
//.   结构体变量.成员
//->  结构体指针->成员

//如何修改书名
//为什么可以修改价格是因为price属于变量，而name属于数组
//凡是成员为字符串的赋值形式都是用字符串拷贝
//strcpy（拷贝什么.拷贝到哪里,...)
//int main()
//{
//	struct Book b1 = { "C语言程序设计",55 };
//	strcpy(b1.name,"C++");
//	//strcpy-string copy 字符串拷贝 这是一个库函数需要用到头文件string.h,
//	//但不知道为啥这里引用头文件却会发生错误，可能由于版本差异
//	printf("书名：%s\n", b1.name);
//	return 0;
//}