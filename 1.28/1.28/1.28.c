#include<stdio.h>
//int global = 2021;
//void test()
//{
//	printf("test()--%d\n", global);
//}
//int main()
//{
//	test();
//	printf("global=%d\n",global);
//	return 0;
//}

int main()
{
//	//���� extern �����ⲿ����
	extern int g_val;
	printf("g_val=%d\n", g_val);
	return 0;
}

//int main()
//{
//	{
//		int a = 10;
//		printf("a=%d\n", a);
//	}
//	return 0;
//}