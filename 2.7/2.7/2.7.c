#define _CRT_SECUERE_NO_WARNING 1
#include<stdio.h>


//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放十个整型数据数组
//	printf("%d\n", arr[4]);
//	//char ch[20];
//	//float arr2[5];
//	return 0;
//} 


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 5 % 2;//取模
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	//整型1占四个字节=32bit
//	int b = a << 2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//(二进制)位操作
//	//&按位与 与：并起来
//	//|按位或
//	//^按位异或
//	int a = 3;
//	int b = 5;
//	int c=a&b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;//=表赋值，==判断相等
//	a = a + 10;
//	a += 10;
//	a = a & 2;
//	a&=2
//	return 0;
//}

//单目操作符
//双目操作符
//三目操作符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a + b;//操作符，左右各有一个操作数，所以加号为双目操作符
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int sz = 0;
	sz=sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);
	return 0;
}