#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int num2 = 20;//全局变量-定义在代码块({})之外的变量
//int main()
//{
//	int num 1= 10;//局部变量-定义在代码块({})之内的变量
//	return 0;
//}


//int a = 100;
//int main()
//{
//局部变量和全局变量的名字建议不要相同，容易误会，产生bug
//当局部变量和全局变量的名字相同时，局部变量优先
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
////会打印失败，因为a为局部变量，不在局部外表达
//	return 0;
//}

int main()
{
	//计算两个数的和
	int num1 =0;
	int num2 = 0;
	int sum = 0;
	//输入数据-使用输入函数
	scanf("%d%d", &num1, &num2);//&-取地址符号
	//c语言语法规定，变量要定义在当前代码块的最前面
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}