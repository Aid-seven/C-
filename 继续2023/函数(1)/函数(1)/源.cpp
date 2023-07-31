#include<stdio.h>

//交换a,b值
/*
int main()
{
	int a = 10;
	int b = 20;
	int tmp = 0;
	printf("a=%d b=%d\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("a=%d b=%d\n", a, b);
	return 0;
}
*/


//利用函数Swap交换a,b值
/*这里的交换里如果不使用取地址，只是“值传递”会导致交换不生效
因为在Swap(a,b)里只是把a和b的值传给x,y，但是xy交换后没有途经将xy传给ab
所以要实现地址传递
*/
/*地址传递过程:
用&a、&b把a和b的地址传给x和y,因为接受的是地址,所以要用可以存放地址
的指针变量x和y接收(而指针变量的定义是int *p),而*x代表a这个地址对应
的值即原来的a的值,*y代表b的值,所以tmp=a,a=b,b=tmp
*/
//而对于其他的函数比如Add(a,b)的值是一个数，这里就可以利用return来返回值。
/*void Swap(int* x, int* y)//void代表无返回值//int* x=&a;x指针变量
{
	//*x;//对x解引用操作，对a的值操作
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	int a = 10;
	int b = 20;

	printf("a=%d b=%d\n", a, b);
	Swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}
*/