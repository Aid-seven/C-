#include<stdio.h>

//����a,bֵ
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


//���ú���Swap����a,bֵ
/*����Ľ����������ʹ��ȡ��ַ��ֻ�ǡ�ֵ���ݡ��ᵼ�½�������Ч
��Ϊ��Swap(a,b)��ֻ�ǰ�a��b��ֵ����x,y������xy������û��;����xy����ab
����Ҫʵ�ֵ�ַ����
*/
/*��ַ���ݹ���:
��&a��&b��a��b�ĵ�ַ����x��y,��Ϊ���ܵ��ǵ�ַ,����Ҫ�ÿ��Դ�ŵ�ַ
��ָ�����x��y����(��ָ������Ķ�����int *p),��*x����a�����ַ��Ӧ
��ֵ��ԭ����a��ֵ,*y����b��ֵ,����tmp=a,a=b,b=tmp
*/
//�����������ĺ�������Add(a,b)��ֵ��һ����������Ϳ�������return������ֵ��
/*void Swap(int* x, int* y)//void�����޷���ֵ//int* x=&a;xָ�����
{
	//*x;//��x�����ò�������a��ֵ����
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