#include<stdio.h>

//int main()
//{
//	int a = 10;//���ڴ�����4���ֽ�
//	int * p = &a;//ȡ��ַ
//	//ָ����� ������ŵ�ַ��һ�ֱ���,��int *��ʾ
//	printf("%p\n", &a);//ȡ��a�ĵ�ַ,%p����ȡ��ַ
//	printf("%p\n", p);
//	*p;//* �����ò����� ��p���н������ҵ�����ָ�Ķ���a
//	*p = 20;//ͨ��*p�ҵ���ֵ��a�������ֵ��Ϊ20
//	printf("a=%d\n", a);
//	return 0;
//}
//�����ʮ������

//int main()
//{
//	char ch = 'w';
//	char * pc = &ch;
//	*pc = 'a';
//	printf("%c\n",ch);
//	return 0;
//}

//����ָ������Ĵ�С
int main()
{
	char ch = 'a';
	char *p = &ch;
	printf("%d\n", sizeof(p));
	return 0;
}