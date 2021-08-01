#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//操作符
//逻辑操作符
//int main()
//{
//	//0表示假
//	//非0都是真
//	int a = 3;
//	int b = 5;//a、b为真
//	int c = 0;//c为0是假
//	//&&-逻辑与 并且 只看真假
//	int d = a && b;
//	int e = a && c;
//	printf("d=%d\n", d);
//	printf("e=%d\n",e);
//	//||-逻辑或 或许
//	int f = a || c;
//	int g = c || c;
//	printf("f=%d\n", f);
//	printf("g=%d\n", g);
//	return 0;
//}

//条件操作符或叫三目操作符
//exp1? exp2:exp3;(exp表达式)
//如果表达式1为真则执行表达式2 ，如果表达式2为假则执行表达式3
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else 
//		max = b;
//	printf("max=%d\n", max);
//	return 0;
//}
//等价于
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("max=%d\n", max);
//	return 0;
//}

//逗号表达式
//exp1,exp2,exp3,...expN

//[]-下标引用操作符	
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];
//	return 0;
//}
//()-函数调用操作符
//int Add(int x, int y)
//{
//	int z=0;
//	z = x+y ;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
// .点   ->箭头 &取地址操作符 *解引用操作符


