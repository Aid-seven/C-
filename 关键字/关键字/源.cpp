#include<stdio.h>

//�ؼ���-�������������ͻ

//auto-�Զ�
//int main()
//{	
// auto int a=10//�ֲ�����-�Զ����� �ֲ�����ǰ����auto�����ڶ�������ʡ����
//	return 0;
//}

//break-�ж�-ֹͣѭ����case���
//const-���γ�����
//continue-����������ѭ��
//default-Ĭ��
//do-do whileѭ��
//enum-ö��
//extern-�����ⲿ����
//goto-goto���

//reister-�Ĵ����ؼ���
//int main()
//{
//	register int a = 10;//�����a����ɼĴ�������
//	//�Ĵ��������޵ģ������ǽ���,���������������ж�
//	return 0;
//}

//signed
//int main()
//{
//	int a = -2;//int ����ı������з��ŵģ�ʵ������signed int
//	unsigned int num = -1;//��ʹ������Ǹ��������޷���Ҳ��֤��
//	return 0;
//}

//sizeof-��С

//static-��̬��
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
//��������a=2
void test()
{
	static int a = 1;//����a��һ����̬�ľֲ�����a������
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
//�����a=2��a=3��a=4��a=5��a=6

//struct-�ṹ��ؼ���

//typedef-���Ͷ���/�����ض���
//int main()
//{
//	typedef unsigned int u int;//��unsigned int����ȡ����u int
//	unsigned int num = 20;
//	u int num2 = 20;//������������һ����˼
//	return 0;
//}

//union-������/������
//voed-��/��
//volatile