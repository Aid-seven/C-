#define _CRT_SEVURE_NO_WARNINGS 1
#include<stdio.h>

//����һ���ṹ������
struct Book
{
	char name[20];//C���Գ������
	short price;//55Ԫ
};//��һ���������������������  ;����ȱ�ٴ������

  //���ýṹ������-����һ�������͵Ľṹ�����
//int main()
//{
//	struct Book b1 = { "C���Գ������",55 };
//	printf("����;%s\n", b1.name);
//	printf("�۸�;%dԪ\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
//	return 0;
//}

//int main()
//{	
//	struct Book b1 = { "C���Գ������",55 };
//	struct Book* pb = &b1;
//	//����pb��ӡ�������ͼ۸�
//	printf("����:%s\n", (*pb).name);
//	printf("�۸�:%dԪ\n", (*pb).price);
//	//�򻯷�ʽ
//	printf("����:%s\n", pb->name);//pbָ��Ķ�������
//	printf("�۸�:%dԪ\n", pb->price);
//	return 0;
//}

//������
//.   �ṹ�����.��Ա
//->  �ṹ��ָ��->��Ա

//����޸�����
//Ϊʲô�����޸ļ۸�����Ϊprice���ڱ�������name��������
//���ǳ�ԱΪ�ַ����ĸ�ֵ��ʽ�������ַ�������
//strcpy������ʲô.����������,...)
//int main()
//{
//	struct Book b1 = { "C���Գ������",55 };
//	strcpy(b1.name,"C++");
//	//strcpy-string copy �ַ������� ����һ���⺯����Ҫ�õ�ͷ�ļ�string.h,
//	//����֪��Ϊɶ��������ͷ�ļ�ȴ�ᷢ�����󣬿������ڰ汾����
//	printf("������%s\n", b1.name);
//	return 0;
//}