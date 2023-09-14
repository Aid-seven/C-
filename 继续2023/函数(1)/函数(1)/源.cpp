//#include<stdio.h>
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
值传递:当实参传给形参时，形参时实参的一份临时拷贝,对形参的修改是不
会改变实参的
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
	Swap(&a, &b);//这是传址调用:1.传址调用是把函数外部创建变量的内存地址
	传递给函数参数的一种调用函数的方式。2.这种传参方式可以让函数和函数外
	边的变量建立其真正的联系，也就是函数内部可以直接操作函数外部的变量。
	(用于想要改变函数实参值，改变结果)
	传值调用:函数的形参和实参分别占用不同内存块，对形参的修改不会影响实参。
	printf("a=%d b=%d\n", a, b);
	(用于不改变但想获得某结果，得到结果)
	return 0;
}
*/

////定义函数
//int get_max(int x, int y)
////这里是形参，函数不被调用时没有实际的变量空间，调用时进行实例化，
////调用完成xy被销毁，只存在于这个函数被调用阶段
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	max = get_max(300, 100);//实参可以是产量
//	max = get_max(100, 300 + 1);//实参可以是表达式
//	max = get_max(100, get_max(1, 2));//实参也可以是函数调用
//	//无论如何函数实参得是一个确切的值
//	printf("max=%d\n", max);
//	return 0;
//}

//练习
//1.写一个函数可以判断一个数是不是素数。
//int main()
//{
//	int x = 7;
//	if (x % 2 == 0)
//	{
//		printf("这个数不是素数。");
//	}
//	else
//	{
//		for (int i = 3; i < x; i+=2)
//		{
//			if (x % i == 0)
//			{
//				printf("这个数不是素数。");
//				break;
//			}
//			else if (i==x-1||i==x-2)
//			{
//				printf("这个数是素数。");
//			}
//		}
//	}
//	return 0;
//}


//2.写一个函数判断一年是不是闰年。
//int main()
//{
//	int year = 2000;
//	if (year % 4 == 0 && year % 100 != 0)
//	{
//		printf("今年是闰年。");
//	}
//	else
//		printf("今年不是闰年。");
//	return 0;
//}

//3.写一个函数，实现一个整型有序数组的二分查找。
//int main()
//{
//	//寻找76
//	int a[] = { 32,45,59,67,76,88,89,95 };
//	int left = 1;
//	int right = sizeof(a);
//	int n = 32;
//	int mid;
//	while(left<=right)
//	{
//		 mid = (left + right)/2;
//	if (a[mid - 1] == n)
//	{
//		printf("数在数组第%d\n", mid + 1, "位");
//		break;
//	}
//	else if (a[mid-1] > n)
//	{
//		left = mid - 1;
//	}
//	else if (a[mid-1] < n)
//	{
//		right = mid + 1;
//	}
//	
//	}
//	printf("数未被找到");
//	return 0;
//}

//4.写一个函数，每调用一次这个函数，就会将num的值增加1。
//void addnum(int* num)
//{
//	*num=*num+1;//不知道为什么*num不能用++来自加
//}
//int main()
//{
//	int x = 0;
//	addnum(&x);
//	printf("x=%d\n", x);
//	addnum(&x);
//	printf("x=%d\n", x);
//	addnum(&x);
//	printf("x=%d\n", x);
//	return 0;
//}


//得证不能使用值传递
//int addnum(int num)
//{
//	num++;
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	addnum(x);
//	printf("x=%d\n", x);
//	addnum(x);
//	printf("x=%d\n", x);
//	addnum(x);
//	printf("x=%d\n", x);
//	return 0;
//}