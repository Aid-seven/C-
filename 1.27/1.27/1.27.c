#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int num2 = 20;//ȫ�ֱ���-�����ڴ����({})֮��ı���
//int main()
//{
//	int num 1= 10;//�ֲ�����-�����ڴ����({})֮�ڵı���
//	return 0;
//}


//int a = 100;
//int main()
//{
//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ��������ᣬ����bug
//���ֲ�������ȫ�ֱ�����������ͬʱ���ֲ���������
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
////���ӡʧ�ܣ���ΪaΪ�ֲ����������ھֲ�����
//	return 0;
//}

int main()
{
	//�����������ĺ�
	int num1 =0;
	int num2 = 0;
	int sum = 0;
	//��������-ʹ�����뺯��
	scanf("%d%d", &num1, &num2);//&-ȡ��ַ����
	//c�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}